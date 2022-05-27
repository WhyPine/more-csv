/*
Aidan Gooding
PA 6 - 10/29/21
This is a attendance marker program.
*/
#include "Data.h"

Data::Data(int rNum, int id, string name, string email, int units, string major, string level, Stack* s, int abNum) {
	this->rNum = rNum;
	this->id = id;
	this->name = name;
	this->email = email;
	this->units = units;
	this->major = major;
	this->level = level;
	if (s == nullptr) {
		this->absence = new Stack();
	}
	else{
		this->absence = s;
	}
	this->abNum = abNum;
}

Data::~Data() {

}

string Data::getStudent() {
	return this->name;
}

Stack* Data::getStack() {
	return this->absence;
}

int Data::getID() {
	return this->id;
}

std::fstream& operator<< (std::fstream& lhs, Data& rhs) {
	//lhs << rhs.getName() << "\n" << rhs.getCalories() << endl << rhs.getDate() << endl << endl;
	return lhs;
}

string Data::getString() {
	return std::to_string(this->rNum) + "\n" + std::to_string(this->id) + "\n" + this->name + "\n" + this->email + "\n" + std::to_string(this->units) + "\n" + this->major + "\n" + this->level + "\n" + std::to_string(this->abNum) + "," + this->getStack()->printStack();
}

void Data::setAbsence(int add) {
	this->abNum += add;
}

int Data::getabNum() {
	return this->abNum;
}