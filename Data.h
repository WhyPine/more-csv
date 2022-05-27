/*
Aidan Gooding
PA 6 - 10/29/21
This is a attendance marker program.
*/
#pragma once

#include <string>
#include "Stack.h"


class Data {
public:
	Data(int rNum = NULL, int id = NULL, string name = "", string email = "", int units = NULL, string major = "", string level = "", Stack* s = nullptr, int abNum = NULL);
	//Data(int rNum, int id, string name, string email, int units, string major, string level, Stack* s = nullptr, int abNum = NULL);
	~Data();
	string getStudent();
	Stack* getStack();
	int getID();
	string getString();
	void setAbsence(int add); 
	int	getabNum();
private:
	int rNum;
	int id;
	string name;
	string email;
	int units;
	string major;
	string level;
	Stack* absence = new Stack();
	int abNum;
};

std::fstream& operator<< (std::fstream& lhs, Data& rhs);
