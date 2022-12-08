
all:
	@echo "Building..."
	make -C ./src

run:
	make -C ./src run

clean:
	make -C ./src clean	

install:
	make -C ./src install
