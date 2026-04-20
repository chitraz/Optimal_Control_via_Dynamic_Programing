all:clean dps autorun

main.o: main.cpp
	 g++ -c -Wall main.cpp BellmanSolver.cpp ProblemDefinition.cpp

dps: main.o
	 g++ -g -o dps main.o -lm

autorun: 
	./dps

clean:
	 rm -f *.o dps

