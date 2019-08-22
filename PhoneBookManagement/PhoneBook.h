#pragma once

#include"Phone.h"
#include<iostream>
#include<list>
#include<fstream>
using namespace std;

class PhoneBook {
private:
	list<Phone*> Index;
	bool overlapFind(string phoneName, string phoneNumber);
public:
	PhoneBook() = default;
	bool pushData(void);
	bool removeData(void);
	Phone* findPhoneNumberByName(void);
	void printListOfPhoneNumbers(void);
	bool savePhoneNumberList(void);
	bool getPhoneNumberList(void);
	int getPhoneBookSize(void);
	bool isPhoneBookEmpty(void);
};


