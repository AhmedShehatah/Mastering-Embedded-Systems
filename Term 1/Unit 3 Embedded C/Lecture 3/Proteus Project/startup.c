

#include <stdint.h>
#define STACK_START_SP 0x20001000
extern unsigned int _stack_top;
extern unsigned int _E_data;
extern unsigned int _E_bss;
extern unsigned int _E_text;
extern unsigned int _S_data;
extern unsigned int _S_bss;

void Reset_Handler(void);
void Default_Handler();
void NMI_Handler(void) __attribute__((weak, alias("Default_Handler")));
void H_Fault_Handler(void) __attribute__((weak, alias("Default_Handler")));
void MM_Fault_Handler(void) __attribute__((weak, alias("Default_Handler")));
void Bus_Fault(void) __attribute__((weak, alias("Default_Handler")));
void Usage_Fault_Handler(void) __attribute__((weak, alias("Default_Handler")));
uint32_t vectors[] __attribute__((section(".vectors"))) = {
    &_stack_top,
    (uint32_t)&Reset_Handler,
    (uint32_t)&NMI_Handler,
    (uint32_t)&MM_Fault_Handler,
    (uint32_t)&Bus_Fault,
    (uint32_t)&Usage_Fault_Handler,
};

void Reset_Handler(void)
{
    // copy data from rom to ram
    unsigned int data_size = (unsigned char *)&_E_data - (unsigned char *)&_S_data;
    unsigned char *P_src = (unsigned char *)&_E_text;
    unsigned char *P_dst = (unsigned char *)&_S_data;
    int i = 0;
    for (i = 0; i < data_size; i++)
        *((unsigned char *)P_dst++) = *((unsigned char *)P_src++);
    // init bss with zeros
    unsigned int bss_size = (unsigned char *)&_E_bss - (unsigned char *)&_S_bss;
    P_dst = (unsigned char *)&_S_bss;
    i = 0;
    for (i = 0; i < bss_size; i++)
        *((unsigned char *)P_dst++) = (unsigned char)0;

    main();
}

void Default_Handler()
{
    Reset_Handler();
}
