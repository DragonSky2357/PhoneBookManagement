#include "PhoneBook.h"

bool PhoneBook::pushData(void)
{
	string phoneName, phoneNumber;

	cout << "��ȭ�� : "; cin >> phoneName;
	cout << "��ȭ��ȣ : "; cin >> phoneNumber;

	if (overlapFind(phoneName, phoneNumber))
		return true;

	Index.push_back(new Phone(phoneName, phoneNumber));
	return false;
}

bool PhoneBook::removeData(void)
{
	if (Index.empty()) return true;

	string phoneName, phoneNumber;

	cout << "��ȭ�� : "; cin >> phoneName;
	cout << "��ȭ��ȣ : "; cin >> phoneNumber;

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
		cout << "��ȭ�� : " << (*iter)->getPhoneName();
		cout << " ��ȭ��ȣ : " << (*iter)->getPhoneNumber()<<endl;
	}
}

bool PhoneBook::savePhoneNumberList(void)
{
	try {
		ofstream saveFile("data.txt");
		for (auto iter = Index.begin(); iter != Index.end(); iter++) {
			saveFile << "��ȭ��:" << (*iter)->getPhoneName();
			saveFile << " ��ȭ��ȣ:" << (*iter)->getPhoneNumber() << endl;
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
