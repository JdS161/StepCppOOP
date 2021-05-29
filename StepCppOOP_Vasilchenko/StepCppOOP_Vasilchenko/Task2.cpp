#include "Task2.h"



Contact::Contact()
{
	lastName		= (char*) "Smith";
	homePhone		= 0;
	officePhone		= 0;
	mobilePhone		= 0;
	additionalInfo	= NULL;
}

Contact::Contact(
	char*	_lastName, 
	long	_homePhone, 
	long	_officePhone,
	long	_mobilePhone,
	char*	_additionalInfo)
{
	lastName = new char[strlen(_lastName) + 1];
	homePhone = _homePhone;
	officePhone = _officePhone;
	mobilePhone = _mobilePhone;
	additionalInfo = new char[strlen(_additionalInfo) + 1];

}

void Contact::Print()
{
	cout << "LAST NAME: " << setw(15) << lastName << endl;
	cout << "HOME PHONE: " << setw(15) << homePhone << endl;
	cout << "OFFICE PHONE: " << setw(15) << officePhone << endl;
	cout << "MOBILE PHONE: " << setw(15) << mobilePhone << endl;
	cout << "ADDITIONAL INFO: " << setw(15) << additionalInfo << endl;


}

Contact::~Contact()
{
	if (lastName != NULL)
	{
		delete[] lastName;
		cout << "LAST NAME has been deleted." << endl;
		lastName = NULL;
	}
	else
		cout << "LAST NAME has already been deleted" << endl;

	if (additionalInfo != NULL)
	{
		delete[] additionalInfo;
		cout << "ADDITIONAL INFO has been deleted." << endl;
		additionalInfo = NULL;
	}
	else
		cout << "ADDITIONAL INFO has already been deleted" << endl;


}

