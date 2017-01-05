
MAIN_SRC = draw.c main.c nano_poly.c window.c state.c macros.c

SOURCES := ${MAIN_SRC}
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
	valgrind --track-origins=yes --leak-check=yes\
 --suppressions=i915.supp\
 --suppressions=nv_prop.supp\
 ./$(MAIN_NAME)

memtest_nosup:
	valgrind --track-origins=yes --leak-check=yes --show-reachable=yes\
 ./$(MAIN_NAME)

memtest_gensup:
	valgrind --track-origins=yes --leak-check=yes\
 --suppressions=i915.supp\
 --suppressions=nv_prop.supp\
 --gen-suppressions=yes\
 ./$(MAIN_NAME)

memtest_gensup_clean:
	valgrind --track-origins=yes --leak-check=yes\
 --gen-suppressions=yes\
 ./$(MAIN_NAME)

lint:
	cppcheck --language=c --enable=warning,style --template=gcc\
 $(SOURCES)
