#include"Manager.h"

Manager::Manager(string personName, string personPhoneNumber, string managerID, string managerPassword) :Person(personName, personPhoneNumber)
{
	this->managerID = managerID;
	this->managerPassword = managerPassword;
}
string Manager::getPsersonName()
{
	return Person::getPsersonName();
}

string Manager::getPersonNumber()
{
	return Person::getPersonNumber();
}

string Manager::getPersonID()
{
	return managerID;
}

string Manager::getPersonPassword()
{
	return managerPassword;
}

void Manager::printListInfo(void)
{
	cout << "매니저 이름 : " << getPsersonName() << endl;
	cout << "매니저 전화번호 : " << getPersonNumber() << endl;
	cout << "매니저 ID : " << getPersonID() << endl;
	cout << "매니저 비밀번호 : " << getPersonPassword() << endl;
}
