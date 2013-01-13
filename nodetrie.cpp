#include "nodetrie.h"

using namespace std;

nodetrie::nodetrie(char c, nodetrie* p) {
	this->leaf = true;
	this->letter = c;
	this->parent = parent;
}

nodetrie::nodetrie() {}

nodetrie::~nodetrie() {}

nodetrie* nodetrie::insert(char c) {
	if (!this->childrens.empty()) {
		for (vector<nodetrie*>::iterator it = this->childrens.begin(); it != this->childrens.end(); ++it) {
			if ((*it)->getLetter() == c)
				return *it;
		}
	} else {
		this->leaf = false;
	}
	nodetrie* nn = new nodetrie(c, this);
	this->childrens.push_back(nn);
	return nn;
}

char nodetrie::getLetter() {
	return this->letter;
}
