#pragma once
#include <iostream>
#include <iomanip>
#include "Task2.h"

using namespace std;

class TeleBook
{
private:
	int count;
	Contact* contact;

	

public:
	TeleBook(int = 0, Contact* = NULL);
	TeleBook(int, Contact*);
	
	~TeleBook();

};
