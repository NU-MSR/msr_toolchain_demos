APP=invest
BIN_DIR=bin
CC=gcc

all: init $(BIN_DIR)/$(APP)

$(BIN_DIR)/$(APP):
	$(CC) $(APP).c -o $(BIN_DIR)/$(APP)

init:
	mkdir -p $(BIN_DIR)

clean:
	rm -f $(BIN_DIR)/$(APP)
