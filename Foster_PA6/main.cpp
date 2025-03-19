/*File: main.cpp
* Author: Isaiah Foster
* Professor: Andy O'fallon
* Class: Cpts_122
* Assignment: PA6
* Created: 03/15/2025
* Last updated: 03/18/2025
* Description: creates BST object and opens convert.txt to search
*/

#include "BST.hpp"

int main(void)
{
	BST<string> morseTree;
	morseTree.printInOrder();
	std::ifstream convertFile("convert.txt");

	while (!convertFile.eof())
	{
		string searchString;
		std::getline(convertFile, searchString);
		std::cout << '\n'; //newline between each new line of convert.txt file
		int n = searchString.size();
		for (int i = 0; i < n; i++)
		{
			morseTree.search(toupper(searchString[i]));
		}
	}


	return 0;
}