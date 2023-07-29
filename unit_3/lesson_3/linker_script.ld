
MEMORY
{
	flash(RX) : ORIGIN = 0x08000000, LENGTH = 128K
	Sram(RWX) : ORIGIN = 0x20000000, LENGTH = 20K
}

SECTIONS
{
	.TEXT : {
		*(.vectors*)
		*(.text*)
		*(.rodata)
		_E_text = . ;
	} > flash
	
	.DATA : {
		_S_data = . ;
		*(.data)
		_E_data = . ;
	} > Sram AT> flash
	
	.BSS : {
		_S_bss = . ;
		*(.bss)
		_E_bss = . ;
	} > Sram
	
	. = ALIGN(4);
	. = . + 0x1000;
	stack_top = . ;
}