CFLAGS = -Wall -std=c99 -O2
LIBS   = -lm

prefix       := /usr/local
exec_prefix   = $(prefix)
bindir        = $(exec_prefix)/bin/

SRC          := $(shell find ./ -type f -name '*.c')
OBJ          := $(SRC:.c=.o)
DEPENDENCIES := $(SRC:.c=.d)
BIN          := hello-name-test

all: $(BIN)
.PHONY: all clean install uninstall test run

ifneq ($(MAKECMDGOALS),clean)
-include $(DEPENDENCIES)
endif

$(BIN): $(OBJ)
	$(CC) -o $@ $(OBJ) $(CFLAGS) $(LIBS)

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS) -MMD > ${<:.c=.d}

clean:
	rm -f $(OBJ) $(BIN) $(DEPENDENCIES)

install:
	install -m 0755 ./ $(bindir) $(bin)

uninstall:
	rm -f $(bindir)$(bin)

test: $(BIN)
	@./test.sh

run: $(BIN)
	@./$(BIN)
