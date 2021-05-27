﻿#pragma once
#include <iostream>
#include <iomanip>

using namespace std;


//Создайте приложение «Телефонная книга».Необходимо
//хранить данные об абоненте(ФИО, домашний телефон,
//	рабочий телефон, мобильный телефон, дополнительная
//	информация о контакте) внутри соответствующего класса.
//	Наполните класс переменными - членами, функциями -
//	членами, конструкторами, inline - функциями - членами,
//	используйте инициализаторы, реализуйте деструктор.
//	Обязательно необходимо выделять динамически память под
//	ФИО.Предоставьте пользователю возможность добавлять
//	новых абонентов, удалять абонентов, искать абонентов
//	по ФИО, показывать всех абонентов.



class Contact
{
private:
	char*	lastName;
	long	homePhone;
	long	officePhone;
	long	mobilePhone;
	char*	additionalInfo;

public:
	Contact();
	Contact(char*, long, long, long, char*);


	void Print();

	//~Contacts();


};
