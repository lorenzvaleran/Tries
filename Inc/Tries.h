/*
 * Tries.h
 *
 *  Created on: Feb 1, 2018
 *      Author: lo
 */

#ifndef TRIES_H_
#define TRIES_H_

#include "Node.h"
#include <string>

using namespace std;

class Tries
{
private:
	Node *root;
	int size;

public:
	Tries();
	virtual ~Tries();

	int getSize(); // Returns number of elements in Tries
	void addWord(const string &word);
	bool existWord(const string &word);
};

#endif /* TRIES_H_ */
