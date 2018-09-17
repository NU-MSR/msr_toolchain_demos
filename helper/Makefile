APP=geocalcs
BIN_DIR=bin
CC=gcc
LDFLAGS=-lm

SOURCES=$(wildcard *.c)
OBJECTS=$(foreach obj, $(SOURCES), $(BIN_DIR)/$(obj:.c=.o))

all: init $(BIN_DIR)/$(APP)

$(BIN_DIR)/$(APP): $(OBJECTS)
	$(CC) $(OBJECTS) $(LDFLAGS) -o $(BIN_DIR)/$(APP)

$(BIN_DIR)/%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

init:
	mkdir -p $(BIN_DIR)
	@echo $(OBJECTS)

clean:
	rm -f $(BIN_DIR)/$(APP) $(OBJECTS)
