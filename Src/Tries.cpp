/*
 * Tries.cpp
 *
 *  Created on: Feb 1, 2018
 *      Author: lo
 */

#include "/home/lo/workspace/Tries/Inc/Tries.h"

Tries::Tries():
	size(0)
{
	root=new Node(' '); // Root value is empty character
}

Tries::~Tries()
{
	delete root;
}

void Tries::addWord(const string &word)
{
	Node *currentNode = root;

	for(string::const_iterator it=word.begin();it!=word.end();it++)
	{
		char currentChar=*it;

		Node *child=currentNode->existChildNode(currentChar);

		if(child==NULL)
		{
			currentNode=currentNode->addChildNode(currentChar);
			size++;
		}
		else
			currentNode=child;

		/* Setting end marker if last element */
		if(it==word.end()-1)
		{
			currentNode->setEndMarker();
		}
	}
}

bool Tries::existWord(const string &word)
{
	Node *currentNode=root;

	for(string::const_iterator it=word.begin();it!=word.end();it++)
	{
		char currentChar = *it;

		currentNode=currentNode->existChildNode(currentChar);

		if(currentNode==NULL)
		{
			return false;
		}

		if(it==word.end()-1 && currentNode->isEnd())
		{
			return true;
		}
	}

	return false;
}

int Tries::getSize()
{
	return size;
}

