#include "PhoneBook.h"

bool PhoneBook::pushData(void)
{
	string phoneName, phoneNumber;

	cout << "전화명 : "; cin >> phoneName;
	cout << "전화번호 : "; cin >> phoneNumber;

	if (overlapFind(phoneName, phoneNumber))
		return true;

	Index.push_back(new Phone(phoneName, phoneNumber));
	return false;
}

bool PhoneBook::removeData(void)
{
	if (Index.empty()) return true;

	string phoneName, phoneNumber;

	cout << "전화명 : "; cin >> phoneName;
	cout << "전화번호 : "; cin >> phoneNumber;

	for (auto iter = Index.begin(); iter != Index.end(); iter++) {
		if ((*iter)->getPhoneName() == phoneName && (*iter)->getPhoneNumber() == phoneNumber) {
			Index.erase(iter);
			return false;
		}
			
	}
	return true;
}

bool PhoneBook::overlapFind(string phoneName, string phoneNumber)
{
	for (auto iter = Index.begin(); iter != Index.end(); iter++) {
		if ((*iter)->getPhoneName() == phoneName && (*iter)->getPhoneNumber() == phoneNumber) {
			return true;
		}
	}
	return false;
}

Phone* PhoneBook::findPhoneNumberByName()
{
	string phoneName; cin >> phoneName;

	for (auto iter = Index.begin(); iter != Index.end(); iter++) {
		if ((*iter)->getPhoneName() == phoneName) {
			return (*iter);
		}
	}
	return nullptr;
}

void PhoneBook::printListOfPhoneNumbers(void)
{
	for (auto iter = Index.begin(); iter != Index.end(); iter++) {
		cout << "전화명 : " << (*iter)->getPhoneName();
		cout << " 전화번호 : " << (*iter)->getPhoneNumber()<<endl;
	}
}

bool PhoneBook::savePhoneNumberList(void)
{
	try {
		ofstream saveFile("data.txt");
		for (auto iter = Index.begin(); iter != Index.end(); iter++) {
			saveFile << "전화명:" << (*iter)->getPhoneName();
			saveFile << " 전화번호:" << (*iter)->getPhoneNumber() << endl;
		}
		saveFile.close();
	}
	catch (exception e) {
		cout << e.what();
		return false;
	}
	return true;
}

bool PhoneBook::getPhoneNumberList(void)
{
	try {
		ifstream getFile("data.txt");
		string buf;
		while (getline(getFile,buf)) {
			cout << buf << endl;
		}
	}
	catch (exception e) {
		cout << e.what() << endl;
		return false;
	}
	return true;
}

int PhoneBook::getPhoneBookSize(void)
{
	return Index.size();
}

bool PhoneBook::isPhoneBookEmpty(void)
{
	return Index.empty();
}
