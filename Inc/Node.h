/*
 * Node.h
 *
 *  Created on: Feb 1, 2018
 *      Author: lo
 */

#ifndef NODE_H_
#define NODE_H_

#include <vector>
#include <iostream>

using namespace std;

class Node
{
private:
	char value;
	vector<Node *> vecChildNodes;
	bool endMarker;

public:
	Node(char c);
	virtual ~Node();

	char getValue()const;
	Node* addChildNode(char c);
	Node* existChildNode(char c);
	void setEndMarker();
	bool isEnd()const;
};

#endif /* NODE_H_ */
