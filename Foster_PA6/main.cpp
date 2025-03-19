/*File: main.cpp
* Author: Isaiah Foster
* Professor: Andy O'fallon
* Class: Cpts_122
* Assignment: PA6
* Created: 03/15/2025
* Last updated: 03/18/2025
* Description: creates BST object and loops through a search
*/

#include "BST.hpp"

int main(void)
{
	BST<string> morseTree;
	morseTree.printInOrder();
	std::string searchString = "This is a test of the cpts 122 Morse code conversion tool.";
	int n = searchString.size();
	for (int i = 0; i < n; i++)
	{
		morseTree.search(toupper(searchString[i]));
	}

	return 0;
}