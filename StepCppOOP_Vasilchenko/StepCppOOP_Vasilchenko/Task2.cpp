#pragma warning (disable : 4996)

#include "Task2.h"



Contact::Contact()
{
	fullName		= (char*) "Smith";
	homePhone		= 0;
	officePhone		= 0;
	mobilePhone		= 0;
	additionalInfo	= (char*) "NONE";
}

Contact::Contact(
    char*	_fullName, 
	long	_homePhone, 
	long	_officePhone,
	long	_mobilePhone,
	char*	_additionalInfo)
{
	fullName = new char[strlen(_fullName) + 1];
	strcpy(fullName, _fullName);
	homePhone = _homePhone;
	officePhone = _officePhone;
	mobilePhone = _mobilePhone;
	additionalInfo = new char[strlen(_additionalInfo) + 1];
	strcpy(additionalInfo, _additionalInfo);

}

void Contact::Print()
{
	cout << "LAST NAME:         " << /*setw(15) <<*/ fullName << endl;
	cout << "HOME PHONE:        " << /*setw(15) <<*/ homePhone << endl;
	cout << "OFFICE PHONE:      " << /*setw(15) <<*/ officePhone << endl;
	cout << "MOBILE PHONE:      " << /*setw(15) <<*/ mobilePhone << endl;
	cout << "ADDITIONAL INFO:   " << /*setw(15) <<*/ additionalInfo << endl;
	cout << endl << endl;

}

Contact::~Contact()
{
	if (fullName != NULL)
	{
		delete[] fullName;
		//cout << "LAST NAME has been deleted." << endl;
		fullName = NULL;
	}
	else
		cout << "LAST NAME has already been deleted" << endl;

	if (additionalInfo != NULL)
	{
		delete[] additionalInfo;
		//cout << "ADDITIONAL INFO has been deleted." << endl;
		additionalInfo = NULL;
	}
	else
		cout << "ADDITIONAL INFO has already been deleted" << endl;


}


