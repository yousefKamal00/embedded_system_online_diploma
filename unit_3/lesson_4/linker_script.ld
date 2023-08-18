
MEMORY
{
	flash(RX) : ORIGIN = 0x00000000, LENGTH = 512M
	Sram(RWX) : ORIGIN = 0x20000000, LENGTH = 512M
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
}