program_name =cortex-m3_led
Linker =linker_script.ld
CC =arm-none-eabi-
CFLAGS =-mcpu=cortex-m3 -gdwarf-2
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
	
$(program_name).hex: $(program_name).elf
	$(CC)objcopy.exe -O ihex $<  $@
	
clear:
	rm *.elf *.bin
	@echo "done"
	
clearall:
	rm *.o *.elf *.bin
	@echo "done"