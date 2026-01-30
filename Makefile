BUILD_DIR := .build
SRC := hello.c
TGT := $(BUILD_DIR)/app_hello

all:
	mkdir -p $(BUILD_DIR)
	gcc $(SRC) -o $(TGT)

clean:
	rm -rf $(BUILD_DIR)

run:
	./$(TGT)
