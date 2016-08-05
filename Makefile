SOURCES := $(shell find $(SOURCEDIR) -name '*.c')
SOURCES_H := $(shell find $(SOURCEDIR) -name '*.h')

SOURCES_O := $(shell find $(SOURCEDIR) -name '*.o')
SOURCES_GCH := $(shell find $(SOURCEDIR) -name '*.gch')

MAIN_NAME = shortstack

LIBS = -lSDL2

.PHONY: all clean lint

all: $(MAIN)
	gcc $(SOURCES) -Wall -o $(MAIN_NAME) $(LIBS)

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
