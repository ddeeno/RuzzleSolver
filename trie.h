#ifndef TRIE.H
#define TRIE.H 

#include <vector>
#include <string>
#include "nodetrie.h"


class trie{
public:
	trie(std::string filepath);
	trie();
	~trie();
	nodetrie* getIterator();
private:
	nodetrie* root;
};

#endif