/*
Aidan Gooding
PA 6 - 10/29/21
This is a attendance marker program.
*/
#pragma once


#include "Data.h"
template <class T>
class Node {
private:
	T* data;
	Node<T>* pNext;
public:
	Node(T* newdata);
	~Node();
	T* getData();
	Node<T>* getNext();
	void setNext(Node<T>* newNext);
};

template <class T>
Node<T>::Node(T* newData) {
	this->data = newData;
	this->pNext = nullptr;
}

template <class T>
Node<T>::~Node() {
}

template <class T>
T* Node<T>::getData() {
	return this->data;
}

template <class T>
Node<T>* Node<T>::getNext() {
	return this->pNext;
}

template <class T>
void Node<T>::setNext(Node<T>* newNext) {
	this->pNext = newNext;
}