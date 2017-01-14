
MAIN_SRC = draw.c main.c nano_poly.c window.c state.c macros.c config.c\
 menu_logic.c settings_logic.c game_logic.c gameover_logic.c

SOURCES := ${MAIN_SRC}
SOURCES_O := $(shell find $(SOURCEDIR) -name '*.o')
SOURCES_GCH := $(shell find $(SOURCEDIR) -name '*.gch')

MAIN_NAME = shortstack

LIBS = -lSDL2 -lconfuse
WIN_LIBS= -static $(shell pkg-config --libs --static sdl2) $(shell pkg-config --libs --static libconfuse)

.PHONY: all clean lint

all: $(MAIN)
	gcc $(MAIN_SRC) -Wall -o $(MAIN_NAME) $(LIBS)

win: $(MAIN)
	i686-w64-mingw32-gcc $(MAIN_SRC) -std=gnu89 -I/mingw32/include/ -L/mingw32/lib -Wall -Wl,-subsystem,windows -o $(MAIN_NAME) $(WIN_LIBS)

clean:
	rm $(MAIN_NAME) $(SOURCES_O) $(SOURCES_GCH)

run:
	./$(MAIN_NAME)

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
