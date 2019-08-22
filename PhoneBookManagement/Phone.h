#pragma once

#include<string>
using namespace std;

class Phone {
private:
	string phoneName;
	string phoneNumber;

public:
	Phone(string phoneName, string phoneNumber);
	virtual ~Phone();
	string getPhoneName(void);
	string getPhoneNumber(void);
	void phoneList();
};