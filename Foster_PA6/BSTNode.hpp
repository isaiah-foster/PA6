#pragma once
#include <iostream>
#include <string>

template <typename T>
class BSTNode
{
private:
	char englishChar;
	std::string morseCode;
	BSTNode<T>* left;
	BSTNode<T>* right;

public:
	BSTNode();
	BSTNode(char englishChar, std::string morseCode);
	BSTNode(char englishChar, std::string morseCode, BSTNode<T>* left, BSTNode<T>* right);
	~BSTNode();
	char getEnglishChar();
	std::string getMorseCode();
	BSTNode<T>* getLeft();
	BSTNode<T>* getRight();
	void setEnglishChar(char englishChar);
	void setMorseCode(std::string morseCode);
	void setLeft(BSTNode<T>* left);
	void setRight(BSTNode<T>* right);
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
BSTNode<T>::BSTNode(char englishChar, std::string morseCode)
{
	this->englishChar = englishChar;
	this->morseCode = morseCode;
	this->left = nullptr;
	this->right = nullptr;
}

template <typename T>
BSTNode<T>::BSTNode(char englishChar, std::string morseCode, BSTNode<T>* left, BSTNode<T>* right)
{
	this->englishChar = englishChar;
	this->morseCode = morseCode;
	this->left = left;
	this->right = right;
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
std::string BSTNode<T>::getMorseCode()
{
	return this->morseCode;
}

template <typename T>
BSTNode<T>* BSTNode<T>::getLeft()
{
	return this->left;
}

template <typename T>
BSTNode<T>* BSTNode<T>::getRight()
{
	return this->right;
}

template <typename T>
void BSTNode<T>::setEnglishChar(char englishChar)
{
	this->englishChar = englishChar;
}

template <typename T>
void BSTNode<T>::setMorseCode(std::string morseCode)
{
	this->morseCode = morseCode;
}

template <typename T>
void BSTNode<T>::setLeft(BSTNode<T>* left)
{
	this->left = left;
}

template <typename T>
void BSTNode<T>::setRight(BSTNode<T>* right)
{
	this->right = right;
}