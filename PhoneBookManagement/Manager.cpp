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
	cout << "�Ŵ��� �̸� : " << getPsersonName() << endl;
	cout << "�Ŵ��� ��ȭ��ȣ : " << getPersonNumber() << endl;
	cout << "�Ŵ��� ID : " << getPersonID() << endl;
	cout << "�Ŵ��� ��й�ȣ : " << getPersonPassword() << endl;
}
