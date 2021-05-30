#pragma once
#pragma warning (disable : 4996)
#include <iostream>
#include <iomanip>

using namespace std;


//Создайте приложение «Телефонная книга».Необходимо
//хранить данные об абоненте(ФИО, домашний телефон,
//	рабочий телефон, мобильный телефон, дополнительная
//	информация о контакте) внутри соответствующего класса.
// 
//	Наполните класс 
// переменными - членами, 
// функциями -членами, 
// конструкторами, 
// inline - функциями - членами,
//	используйте инициализаторы, 
// реализуйте деструктор.
// 
// 
//	Обязательно необходимо выделять динамически память под ФИО.
// 
// Предоставьте пользователю возможность 
// добавлять новых абонентов, 
// удалять абонентов, 
// искать абонентов по ФИО, 
// показывать всех абонентов.



class Contact
{
private:
	char*	fullName;
	long	homePhone;
	long	officePhone;
	long	mobilePhone;
	char*	additionalInfo;

public:
	Contact();
	Contact(char*, long, long, long, char*);

	void Print();

	//getters - Accessors
	char*	GetFullName()
	{
		return fullName;
	}
	long	GetHomePhone()
	{
		return homePhone;
	}
	long	GetOfficePhone()
	{
		return officePhone;
	}
	long	GetMobilePhone()
	{
		return mobilePhone;
	}
	char*	GetAdditionalInfo()
	{
		return additionalInfo;
	}
	
	//setters - Mutators
	void	SetFullName(char* _fullName) 
	{
		if (_fullName == NULL || _fullName == "")
			return;

		fullName = _fullName;

		if (fullName != NULL)
		{
			delete[] fullName;
		}
		char* fullName = new char[strlen(_fullName) + 1];
		strcpy(fullName, _fullName);
	}
	void	SetHomePhone(long _homePhone)
	{
		homePhone = _homePhone < 0 ? 0 : _homePhone;
	}
	void	SetOfficePhone(long _officePhone)
	{
		officePhone = _officePhone < 0 ? 0 : _officePhone;
	}
	void	SetMobilePhone(long _mobilePhone)
	{
		mobilePhone = _mobilePhone < 0 ? 0 : _mobilePhone;
	}
	void	SetAdditionalInfo(char* _additionalInfo)
	{
		if (_additionalInfo == NULL || _additionalInfo == "")
			return;

		additionalInfo = _additionalInfo;

		if (additionalInfo != NULL)
		{
			delete[] additionalInfo;
		}
		char* additionalInfo = new char[strlen(_additionalInfo) + 1];
		strcpy(additionalInfo, _additionalInfo);
	}

	~Contact();


};
