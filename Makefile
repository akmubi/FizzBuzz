CC := clang
CFLAGS := -c -Ofast -Wall -Wno-deprecated-declarations

.PHONY: all target run clean

FILENAME := main
BUILDPATH := build

ifeq ($(OS), Windows_NT)
FILENAME := $(BUILDPATH)\$(FILENAME).exe
RUNFILE := $(FILENAME)
else
FILENAME := $(BUILDPATH)/$(FILENAME)
RUNFILE := ./$(FILENAME)
CLIBS := -lm
endif

SOURCES := $(wildcard *.c)
OBJECTS := $(SOURCES:.c=.o)

all:  $(BUILDPATH) target

target: $(OBJECTS) timer.o
	$(CC) $^ -o  $(FILENAME) $(CLIBS)

$(BUILDPATH):
	mkdir $(BUILDPATH)

run: $(RUNFILE)
	$(RUNFILE)

run_default: $(RUNFILE)
	$(RUNFILE) /dev/stdout

run_null: $(RUNFILE)
	$(RUNFILE) /dev/null

%.o: %.c
	$(CC) $(CFLAGS) $< -o $@

TIMER_DIR := timer
timer.o: $(TIMER_DIR)/timer.c
	$(CC) $(CFLAGS) $< -o $@

ifeq ($(OS), Windows_NT)
clean:
	del /q /s *.o
	rmdir /q /s $(BUILDPATH)
else
clean:
	rm -f *.o
	rm -rf $(BUILDPATH)
endif
