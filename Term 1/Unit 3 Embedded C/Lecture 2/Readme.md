## 

# Lecture 2

### Booting Sequence



- Most processors have a default address from which the first bytes of code are fetched upon application of power and release of reset.

- Hardware designers use this information to arrange the layout of Flash memory on the board and to select which address range(s) the Flash memory responds to.

- This way, when power is first applied, code is fetched from a well-known and predictable address, and software control can be established.
  
  

#### Bootloader

The bootloader provides this early initialization code and is responsible for initializing the board so that other programs can run. 



## Running Mode

- ROM Mode
  
  - Simple
  
  - Require Smaller memory
  
  - Fixed code address
  
  - Relative Small Code

- RAM Mode
  
  - Complex
  
  - Re-locatable code
  
  - Faster
  
  - Large Code (SDRAM)

## BootLooder vs Startup

Startup is a code excuted before main. Bootlooder is a binary has its own startup

# Bootloaders In depth

 The bootloader is a piece of code responsible for

- Basic hardware initialization

- Loading of an application binary, usually an operating system kernel:-

- from flash storage

- from the network

- From SDCard or from another type of non-volatile storage.

- From usb client

- Possibly decompression of the application binary  Execution of the application  

- Besides these basic functions, most bootloaders provide a  shell with various commands implementing different operations.

- Loading of data from storage or network, memory inspection, hardware diagnostics and testing, etc.
  
  
  
  
  
  

# Lab 1

- All initialized global variables are stored in the `.data` and uninitialized global/static variables are stored in `.bss` section

- `.bss` is is not in flash as it is not have a value, we just reserve a section for it in ram by knowing its size and initialize this section by zero.

- `const` variables are stored in `.rodata` section

## what is startup

- Code written in startup file runs before main(), Then call the main()

- Some part of startup code dependent on the target processor.

- the startup code will also include a few instructions after the call to main. These instructions will be executed only in the event that the high-level language program exits (i.e., the call to main returns).

- Startup code for C programs usually consists of the following series of actions:
  
  - Disable all interrupts.
  
  - Create a vector table for your microcontroller. Vector table are MCU specific
  
  - Copy any initialized data from ROM to RAM.
  
  - Zero the uninitialized data area.
  
  - Allocate space for and initialize the stack.
  
  - Initialize the processor’s stack pointer. Create and initialize the heap
  
  - Enable interrupts.
  
  - Call main.
