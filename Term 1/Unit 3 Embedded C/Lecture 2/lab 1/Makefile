#@copyright : Ahmed shehtah
CC=arm-none-eabi
CFLAGS=-mcpu=arm926ej-s
INCS=-I .
LIBS=
SRC= $(wildcard *.c)
OBJ= $(SRC:.c=.o)
ASSRC= $(wildcard *.s)
ASOBJ= $(ASSRC:.s=.o)
all: learn-in-depth.bin
	@echo "=========== Done Building ================="
	@echo "=========== Start Running ================="
	qemu-system-arm.exe -M versatilepb -m 128M -nographic -kernel learn-in-depth.bin

%.o: %.s
	$(CC)-as.exe $(CFLAGS)  $< -o $@
%.o: %.c
	$(CC)-gcc.exe -c $(CFLAGS) $(INCS) $< -o $@

learn-in-depth.elf: $(OBJ) $(ASOBJ)
	$(CC)-ld.exe -T linker_script.ld $(LIBS) $(OBJ) $(ASOBJ) -o $@ -Map=Map_file.map

learn-in-depth.bin: learn-in-depth.elf
	$(CC)-objcopy.exe -O binary $< $@


clean:
	rm *.elf *.bin
	@echo "================ Removed executable files =========================="
clean_all:
	rm *.o *.elf *.bin
	@echo "===================== Removed Everything ================================"
