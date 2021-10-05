export CC=gcc
export CFLAGS=-W -Wall -ansi -pedantic
export LDFLAGS=
HELLO_DIR =hello
EXEC=$(HELLO_DIR)/hello

.PHONY: clean mrproper $(EXEC)

all: $(EXEC)

$(EXEC):
	@(cd $(HELLO_DIR) && $(MAKE))

clean: 
	@(cd $(HELLO_DIR) && $(MAKE) $@)
mrproper: clean 
	@(cd $(HELLO_DIR) && $(MAKE) $@)