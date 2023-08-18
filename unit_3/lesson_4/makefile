program_name =Tiva_c_led
Linker =linker_script.ld
CC =arm-none-eabi-
CFLAGS =-mcpu=cortex-m4 -gdwarf-2 -g
INCS =-I .
LIBS =
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
AS = $(wildcard *.s)
ASOBJ = $(AS:.s=.o)

all: $(program_name).hex

%.o: %.s
	$(CC)as.exe $(CFLAGS) $< -o $@
	
%.o: %.c
	$(CC)gcc.exe $(CFLAGS) $(INCS) -c $< -o $@
	
	
$(program_name).elf: $(OBJ) $(ASOBJ)
	$(CC)ld.exe -T $(Linker) $(LIBS) $(OBJ) $(ASOBJ) -o $@ -Map=map_file.map
	cp $(program_name).elf  $(program_name).axf
	
$(program_name).hex: $(program_name).elf
	$(CC)objcopy.exe -O ihex $<  $@
	$(CC)objcopy.exe -O binary $<  $(program_name).bin
	
clear:
	rm *.elf *.bin
	@echo "done"
	
clearall:
	rm *.o *.elf *.bin *.hex *.axf
	@echo "done"