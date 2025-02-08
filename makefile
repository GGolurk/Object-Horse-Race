horseRun: horse.o race.o horseRace.o
	g++ -g horse.o race.o horseRace.o -o horseRun

horseRace.o: horse.h race.h horseRace.cpp
	g++ -c -g horseRace.cpp

horse.o: horse.h horse.cpp
	g++ -c -g horse.cpp

race.o: horse.h race.h race.cpp
	g++ -c -g race.cpp

clean:
	rm *.o
	rm horseRun

run:
	make
	./horseRun
