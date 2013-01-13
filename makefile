all: clean RuzzleSolver
	./RuzzleSolver
clean: 
	rm -rf *.o
RuzzleSolver: RuzzleSolver.o nodetrie.o trie.o
	g++ *.o -o RuzzleSolver

RuzzleSolver.o:
	g++ -w -c RuzzleSolver.cpp -o RuzzleSolver.o
trie.o:
	g++ -w -c trie.cpp -o trie.o
nodetrie.o:
	g++ -w -c nodetrie.cpp -o nodetrie.o
