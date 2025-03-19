/*File: BST.hpp
* Author: Isaiah Foster
* Professor: Andy O'fallon
* Class: Cpts_122
* Assignment: PA6
* Created: 03/15/2025
* Last updated: 03/18/2025
* Description: defines BST class
*/

#pragma once
#include "BSTNode.hpp"
using std::string;
using std::ifstream;

template <typename T>
class BST
{
private:
	BSTNode<T>* pRoot;
	void insert(T newMorse, char newChar, BSTNode<T>** pTree);
	void printInOrder(BSTNode<T>* pRoot);
	void search(char character, BSTNode<T>* pRoot);
	void destroyTree(BSTNode<T>* pRoot);

public:
	void insert(T newData, char newCHar);
	BST();
	~BST();
	void printInOrder();
	void search(char character); //searches with in order traversal
};

template <typename T>
BST<T>::BST()
{
	pRoot = nullptr;
	ifstream tableFile("MorseTable.txt"); 
	if (tableFile.is_open())
	{
		while (!tableFile.eof())
		{
			char englishChar;
			T morseCode;
			tableFile >> englishChar >> morseCode;
			insert(morseCode, englishChar);
		}
	}
	tableFile.close();
}

template <typename T>
BST<T>::~BST()
{
	destroyTree(pRoot);
}

template <typename T>
void BST<T>::insert(T newMorse, char newChar)
{
	insert(newMorse, newChar, &pRoot);
}

template <typename T>
void BST<T>::insert(T newMorse, char newChar, BSTNode<T>** pTree)
{
	if (*pTree == nullptr) *pTree = new BSTNode<T>(newMorse, newChar);

	else if (newChar < (*pTree)->getEnglishChar())
	{
		insert(newMorse, newChar, &((*pTree)->getLeft()));
	}
	else if (newChar > (*pTree)->getEnglishChar())
	{
		insert(newMorse, newChar, &((*pTree)->getRight()));
	}
}

template<typename T>
void BST<T>::printInOrder()
{
	printInOrder(pRoot);
}

template<typename T>
void BST<T>::printInOrder(BSTNode<T>* pRoot)
{
	if (!pRoot) return;

	printInOrder(pRoot->getLeft());
	std::cout << pRoot;
	printInOrder(pRoot->getRight());
	
}

template<typename T>
void BST<T>::search(char character)
{
	search(character, pRoot);
}

template<typename T>
void BST<T>::search(char character, BSTNode<T>* pRoot)
{
	if (!pRoot) return;
	
	search(character, pRoot->getLeft());
	if (pRoot->getEnglishChar() == character)
	{
		std::cout<<pRoot->getMorseCode()<<" ";
	}
	search(character, pRoot->getRight());
	
}

template<typename T>
void BST<T>::destroyTree(BSTNode<T>* pRoot)
{
	if (!pRoot) return;
	destroyTree(pRoot->getLeft());
	destroyTree(pRoot->getRight());
	delete pRoot;
}