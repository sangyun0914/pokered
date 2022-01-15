all:pokered

pokered: main.o Moves.o Pokemons.o
	g++ -W -Wall -o pokered main.o Moves.o Pokemons.o

main.o: main.cc
	g++ -W -Wall -c main.cc

Moves.o: Moves.cc
	g++ -W -Wall -c Moves.cc

Pokemons.o: Pokemons.cc
	g++ -W -Wall -c Pokemons.cc

clean:
	rm -rf *.o pokered

