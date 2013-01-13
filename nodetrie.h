#ifndef NODETRIE.H
#define NODETRIE.H 

#include "nodetrie.h"

#include <vector>

class nodetrie {
public:
	nodetrie(char c, nodetrie* p);
	nodetrie();
	~nodetrie();
	char getLetter();
	nodetrie* insert(char c);
private:
	char letter;
	std::vector<nodetrie*> childrens;
	nodetrie* parent;
	bool leaf;
	bool endWord;
};

#endif