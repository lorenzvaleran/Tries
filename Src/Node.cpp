/*
 * Node.cpp
 *
 *  Created on: Feb 1, 2018
 *      Author: lo
 */

#include "../Inc/Node.h"


Node::Node(char c):
		endMarker(false)
{
	value=c;
}

Node::~Node()
{
	for(vector<Node*>::iterator it=vecChildNodes.begin();it!=vecChildNodes.end();it++)
		delete *it;
}

char Node::getValue()const
{
	return value;
}

Node* Node::addChildNode(char c)
{
	Node *node=new Node(c);
	vecChildNodes.push_back(node);

	return node;
}

Node* Node::existChildNode(char c)
{
	for(vector<Node*>::iterator it=vecChildNodes.begin();it!=vecChildNodes.end();it++)
	{
		Node* childNode=*it;

		if(childNode->getValue()==c)
			return childNode;
	}

	return NULL;
}

void Node::setEndMarker()
{
	endMarker=true;
}

bool Node::isEnd()const
{
	return endMarker;
}
