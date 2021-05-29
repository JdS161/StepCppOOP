#pragma once
#include <iostream>
#include <iomanip>
#include "Task2.h"

using namespace std;

class PhoneBook
{
private:
	//int count;
	Contact* contact;

	

public:
	PhoneBook(/*int = 0, */Contact* = NULL);
	PhoneBook(/*int, */Contact*);
	
	void AddNewContact();			
	void DelContact();
	void SearchContactName();
	void ShowAllContacts();

	void PrintBook();


	~PhoneBook();

};
