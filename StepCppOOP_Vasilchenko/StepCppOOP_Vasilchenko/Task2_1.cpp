#pragma warning (disable : 4996)
#include "Task2_1.h"



PhoneBook::PhoneBook(int _count ,Contact* _book): count{_count}
{
	book = new Contact[count];
	for (int i = 0; i < count; i++)
	{
		book[i].SetFullName(_book[i].GetFullName());
		book[i].SetHomePhone(_book[i].GetHomePhone());
		book[i].SetOfficePhone(_book[i].GetOfficePhone());
		book[i].SetMobilePhone(_book[i].GetMobilePhone());

	}

}

void PhoneBook::AddNewContact()
{
}

void PhoneBook::DelContact()
{
}

void PhoneBook::SearchContactName()
{
}

void PhoneBook::ShowAllContacts()
{
}

void PhoneBook::PrintBook()
{
	for (int i = 0; i < count; i++)
	{
		book[i].Print();
	}
}



PhoneBook::~PhoneBook()
{

}
