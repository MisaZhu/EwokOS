all: 
	mkdir -p ../../build/rootfs/drivers/raspix
	cd libs/uspi; make
	cd drivers/mini_uartd; make
	cd drivers/pl011_uartd; make
	cd drivers/gpio_actledd; make
	cd drivers/mbox_actledd; make
	cd drivers/fbd; make
	cd drivers/usbd; make
	cd bin/actled; make
	cd bin/gpio; make

clean:	
	cd libs/uspi; make clean
	cd drivers/mini_uartd; make clean
	cd drivers/pl011_uartd; make clean
	cd drivers/gpio_actledd; make clean
	cd drivers/mbox_actledd; make clean
	cd drivers/fbd; make clean
	cd drivers/usbd; make clean
	cd bin/actled; make clean
	cd bin/gpio; make clean
