# make -C /lib/modules/$(uname -r)/build M=$(pwd) modules

obj-m += happygardenpidriver.o 
happygardenpidriver-objs := src/happy_gardenpi_driver.o \
							src/button.o \
							src/lcd.o \
							src/relay.o \
							src/pin_config.o \
							src/error.o 
ccflags-y := -std=gnu17 -Wno-declaration-after-statement

PWD := $(CURDIR)
 
all: 
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules 
 
clean: 
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean


