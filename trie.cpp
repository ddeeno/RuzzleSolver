#include <vector>
#include <fstream>
#include "trie.h"

using namespace std;

//================
// SUPPORT METHOD
//================

char* stringToCharArray(string s) {
	int TempNumOne = s.size();
	char Filename[30];
	for (int a=0; a <= TempNumOne; a++) {
        Filename[a] = s[a];
    }
    return Filename;
}

//============
// CLASS TRIE
//============

trie::trie(std::string filepath) {
	this->root = new nodetrie();
	string line;
	// ifstream myfile(stringToCharArray(filepath));
	ifstream myfile("italian.txt");
	if (myfile.is_open()) {
		while (myfile.good()) {
			getline(myfile, line);
			nodetrie* currentNode = root;
			for (int i = 0; i < line.size(); i++) {
				currentNode = currentNode->insert(line[i]);
			}
		}
	}
}

trie::trie() {}

trie::~trie() {}