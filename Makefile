
MAIN_SRC = draw.c main.c nano_poly.c stack.c state.c structs.c window.c logic.c
ACT_SRC := $(shell find $(SOURCEDIR)actors -name '*.c')

SOURCES_O := $(shell find $(SOURCEDIR) -name '*.o')
SOURCES_GCH := $(shell find $(SOURCEDIR) -name '*.gch')

MAIN_NAME = shortstack

LIBS = -lSDL2

.PHONY: all clean lint

all: $(MAIN)
	gcc $(MAIN_SRC) $(ACT_SRC) -Wall -o $(MAIN_NAME) $(LIBS)

clean:
	rm $(MAIN_NAME) $(SOURCES_O) $(SOURCES_GCH)

run:
	./shortstack

re: clean all run

memtest:
	valgrind --track-origins=yes --leak-check=yes ./$(MAIN_NAME)

lint:
	cppcheck --language=c --enable=warning,style --template=gcc\
 $(SOURCES) $(SOURCES_H)
