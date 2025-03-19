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