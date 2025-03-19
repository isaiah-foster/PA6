#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <ostream>

template <typename T>
class BSTNode
{
private:
	char englishChar;
	T morseCode;
	BSTNode<T>* left;
	BSTNode<T>* right;

public:
	BSTNode();
	BSTNode(T morseCode, char englishChar);
	~BSTNode();
	char getEnglishChar();
	T getMorseCode();
	void setEnglishChar(char englishChar);
	void setMorseCode(T morseCode);
	BSTNode*& getLeft();
	BSTNode*& getRight();
	friend std::ostream& operator<<(std::ostream& lhs, BSTNode<T>* rhs)
	{
		lhs << rhs->getEnglishChar() << " " << rhs->getMorseCode() << std::endl;
		return lhs;
	}
};

template <typename T>
BSTNode<T>::BSTNode()
{
	this->englishChar = '\0';
	this->morseCode = "";
	this->left = nullptr;
	this->right = nullptr;
}

template <typename T>
BSTNode<T>::BSTNode(T morseCode, char englishChar)
{
	this->englishChar = englishChar;
	this->morseCode = morseCode;
	this->left = nullptr;
	this->right = nullptr;
}

template <typename T>
BSTNode<T>::~BSTNode()
{
}

template <typename T>
char BSTNode<T>::getEnglishChar()
{
	return this->englishChar;
}

template <typename T>
T BSTNode<T>::getMorseCode()
{
	return this->morseCode;
}


template <typename T>
void BSTNode<T>::setEnglishChar(char englishChar)
{
	this->englishChar = englishChar;
}

template <typename T>
void BSTNode<T>::setMorseCode(T morseCode)
{
	this->morseCode = morseCode;
}

template <typename T>
BSTNode<T>*& BSTNode<T>::getLeft()
{
	return left;
}

template <typename T>
BSTNode<T>*& BSTNode<T>::getRight()
{
	return right;
}