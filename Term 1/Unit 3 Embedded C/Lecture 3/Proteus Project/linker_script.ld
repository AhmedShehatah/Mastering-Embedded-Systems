/* Linker Script for arm CortexM3 by Ahmed Shehatah */

ENTRY(_reset)

MEMORY
{
	FLASH(RX) : ORIGIN = 0x08000000, LENGTH = 128K
	SRAM(RWX) : ORIGIN = 0x20000000, LENGTH = 20K
}

SECTIONS
{
	.text :
	{
		*(.vectors*) *(.text*) *(.rodata)
		_E_text = .;
	}> FLASH
	.data :
	{
		_S_data = .;
		*(.data)
		. = ALIGN(4);
		_E_data = .;
	} > SRAM AT> FLASH
	.bss :
	{
		_S_bss = .;
		*(.bss)
		. = ALIGN(4);
		_E_bss = .;
		. = . + 0X1000;
		_stack_top = .;
	}> SRAM

}