__start__: obj Warcaby
	./Warcaby

CPPFLAGS=-Wall -pedantic -Iinc -c
LDFLAGS=-Wall



obj:
	mkdir obj

Warcaby: obj/main.o obj/rozgrywka.o obj/minimax.o obj/ruch.o 
	g++ ${LDFLAGS} -o Warcaby obj/main.o obj/rozgrywka.o obj/minimax.o obj/ruch.o 

obj/main.o: src/main.cpp inc/rozgrywka.h
	g++ ${CPPFLAGS} -o obj/main.o src/main.cpp

obj/rozgrywka.o: src/rozgrywka.cpp inc/rozgrywka.h
	g++ ${CPPFLAGS} -o obj/rozgrywka.o src/rozgrywka.cpp

obj/minimax.o: src/minimax.cpp inc/minimax.h
	g++ ${CPPFLAGS} -o obj/minimax.o src/minimax.cpp

obj/ruch.o: src/ruch.cpp inc/minimax.h
	g++ ${CPPFLAGS} -o obj/ruch.o src/ruch.cpp

clean:
	rm -f pliki obj/* core*
