#
#  To sa opcje dla kompilacji
#
CPPFLAGS= -c -Iinc -Wall -pedantic -std=c++17

__start__: uklad_rownan


uklad_rownan: obj/main.o obj/SUklad.o obj/SMacierz.o obj/LZespolona.o obj/SWektor.o
	g++ -Wall -pedantic -o uklad_rownan obj/main.o obj/SUklad.o\
                                   obj/LZespolona.o obj/SWektor.o obj/SMacierz.o

obj/main.o: src/main.cpp inc/SUklad.hh inc/SMacierz.hh inc/SWektor.hh
	g++ ${CPPFLAGS} -o obj/main.o src/main.cpp
	
obj/SUklad.o: src/SUklad.cpp inc/SUklad.hh
	g++ ${CPPFLAGS} -o obj/SUklad.o src/Templates.cpp

obj/SMacierz.o: src/SMacierz.cpp inc/SMacierz.hh
	g++ ${CPPFLAGS} -o obj/SMacierz.o src/Templates.cpp

obj/SWektor.o: src/SWektor.cpp inc/SWektor.hh src/Templates.cpp
	g++ ${CPPFLAGS} -o obj/SWektor.o src/Templates.cpp 

obj/LZespolona.o: src/LZespolona.cpp inc/LZespolona.hh
	g++ ${CPPFLAGS} -o obj/LZespolona.o src/LZespolona.cpp

clean:
	rm -f obj/*.o uklad_rownan