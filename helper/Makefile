APP=geocalcs
BIN_DIR=bin
CC=gcc
LDFLAGS=-lm

SOURCES=$(wildcard *.c)
OBJECTS=$(foreach obj, $(SOURCES), $(BIN_DIR)/$(obj:.c=.o))

all: init $(BIN_DIR)/$(APP)

$(BIN_DIR)/$(APP): $(OBJECTS)
	@echo creating executable $@
	$(CC) $(OBJECTS) $(LDFLAGS) -o $(BIN_DIR)/$(APP)

$(BIN_DIR)/%.o: %.c
	@echo creating object $@
	$(CC) $(CFLAGS) -o $@ -c $<

init:
	mkdir -p $(BIN_DIR)

clean:
	rm -f $(BIN_DIR)/$(APP) $(OBJECTS)
