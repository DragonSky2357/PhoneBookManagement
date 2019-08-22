#pragma once

#include"Person.h"
#include<iostream>
using namespace std;

class Manager:Person {
private:
	string managerID;
	string managerPassword;
	bool existence;
public:
	Manager(string phonenName, string PhoneNumber, string managerID, string managerPassword);
	virtual string getPsersonName() override;
	virtual string getPersonNumber() override;
	virtual string getPersonID(); 
	virtual string getPersonPassword();
	virtual void printListInfo(void);
};