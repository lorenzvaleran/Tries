/*
 * Main.cpp
 *
 *  Created on: Feb 1, 2018
 *      Author: lo
 */
#include <iostream>
#include <vector>
#include "../Inc/Tries.h"

using namespace std;

int main() {
	cout << "!!!Tries!!!" << endl;

    string keys[] = {"the", "a", "there",
                    "answer", "any", "by",
                     "bye", "their" };

    // Convert array to vector
	vector<string> vecKeys(begin(keys), end(keys));

	Tries *tries=new Tries();

	for(vector<string>::iterator it=vecKeys.begin();it!=vecKeys.end();it++)
	{
		const string &element=*it;
		cout << "Adding " << element << endl;
		tries->addWord(element);
	}

	cout << "Size of Tries : " << tries->getSize() << endl;
	cout << (tries->existWord("rot")==true) << endl;

	delete tries;

	return 0;
}
