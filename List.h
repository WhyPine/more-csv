/*
Aidan Gooding
PA 6 - 10/29/21
This is a attendance marker program.
*/
#pragma once
#include "Node.h"

template <class T>
class List {
private:
	Node<T>* pHead;
public:
	List();
	~List();
	void insertAtFront(T* newData);
	bool isEmpty();
	Node<T>* getHead();
	void setNull();
};

template<class T>
List<T>::List() {
	this->pHead = nullptr;
}

template<class T>
List<T>::~List() {
	while (this->pHead != nullptr) {
		Node<T>* pCur = this->pHead;
		while (pCur->getNext() != nullptr) {
			pCur = pCur->getNext();
		}
		delete(pCur);
	}
}

template <class T>
void List<T>::insertAtFront(T* newData) {
	if (this->pHead == nullptr) {
		this->pHead = new Node<T>(newData);
	}
	else {
		Node<T>* pCur = this->pHead;
		this->pHead = new Node<T>(newData);
		this->pHead->setNext(pCur);
	}
}

template <class T>
bool List<T>::isEmpty() {
	if (this->pHead == nullptr) {
		return true;
	}
	return false;
}

template <class T>
void List<T>::setNull() {
	this->pHead = nullptr;
}

template <class T>
Node<T>* List<T>::getHead() {
	return this->pHead;
}