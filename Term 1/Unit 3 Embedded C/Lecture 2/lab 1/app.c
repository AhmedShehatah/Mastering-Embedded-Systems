#include "uart.h"

unsigned char text[100] = "learn in depth : ahmed shehatah";
void main(void)
{
    print_on_uart(text);
    return;
}