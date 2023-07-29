program_name =learn-in-depth
Linker =linker_script.ld
CC =arm-none-eabi-
CFLAGS =-mcpu=arm926ej-s -g
INCS =-I .
LIBS =
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
AS = $(wildcard *.s)
ASOBJ = $(AS:.s=.o)

all: $(program_name).bin

%.o: %.s
	$(CC)as.exe $(CFLAGS) $< -o $@
	
%.o: %.c
	$(CC)gcc.exe $(CFLAGS) $(INCS) -c $< -o $@
	
$(program_name).elf: $(OBJ) $(ASOBJ)
	$(CC)ld.exe -T $(Linker) $(LIBS) $(OBJ) $(ASOBJ) -o $@
	
$(program_name).bin: $(program_name).elf
	$(CC)objcopy.exe -O binary $<  $@
	
clear:
	rm *.elf *.bin
	
clearall:
	rm *.o *.elf *.bin