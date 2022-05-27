/*
Aidan Gooding
PA 6 - 10/29/21
This is a attendance marker program.
*/
#pragma once
#include <fstream>
#include "List.h"
#define _CRT_SECURE_NO_WARNINGS

class Menu {
private:
	
public:
	Menu();
	void displayMenu();
	void subMenu();
};

Menu::Menu() {

}


void Menu::displayMenu() {
	cout << "1. Import Course List" << endl;
	cout << "2. Load Master List" << endl;
	cout << "3. Store Master List" << endl;
	cout << "4. Mark Absences" << endl;
	cout << "5. Edit Absences" << endl;
	cout << "6. Generate Report" << endl;
	cout << "7. Exit" << endl;
}

void Menu::subMenu() {
	cout << "1. Generate Recent Report" << endl;
	cout << "2. Generate Greater Than Report" << endl;
}