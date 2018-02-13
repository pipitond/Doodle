CXXFLAGS = -std=c++0x

game: main.o Critter.o Ant.o Doodlebugs.o runSim.o utilities.o
	g++ ${CXXFLAGS} main.o Critter.o Ant.o Doodlebugs.o runSim.o utilities.o -o game

main.o: main.cpp
	g++ ${CXXFLAGS} -c main.cpp

Critter.o: Critter.cpp Critter.hpp
	g++ ${CXXFLAGS} -c Critter.cpp

Ant.o: Ant.cpp Ant.hpp
	g++ ${CXXFLAGS} -c Ant.cpp

Doodlebugs.o: Doodlebugs.cpp Doodlebugs.hpp
	g++ ${CXXFLAGS} -c Doodlebugs.cpp

runSim.o: runSim.cpp runSim.hpp
		g++ ${CXXFLAGS} -c runSim.cpp

utilities.o: utilities.cpp utilities.hpp
			g++ ${CXXFLAGS} -c utilities.cpp

clean:
	rm *.o game
