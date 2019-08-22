#include "Phone.h"
#include<iostream>
using namespace std;

Phone::Phone(string phoneName, string phoneNumber)
	:phoneName(phoneName),phoneNumber(phoneNumber)
{
}

Phone::~Phone()
{
}

string Phone::getPhoneName(void)
{
	return phoneName;
}

string Phone::getPhoneNumber(void)
{
	return phoneNumber;
}

void Phone::phoneList()
{
	cout << "전화명 : " << getPhoneName() << " 전화번호 : " << getPhoneNumber() << endl;
}

