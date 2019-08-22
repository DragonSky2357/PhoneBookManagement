#include "PhoneBookManager.h"

PhoneBookManager::PhoneBookManager()
{
	string personName, personPhoneNumber, managerID, managerPassword;
	cout << "�Ŵ��� �α����� �����մϴ�" << endl;
	cout << "��ȭ��ȣ �̸� : "; cin >> personName;
	cout << "��ȭ��ȣ : "; cin >> personPhoneNumber;
	cout << "�Ŵ��� ID : "; cin >> managerID;
	cout << "�Ŵ��� ��й�ȣ : "; cin >> managerPassword;
	manager = new Manager(personName, personPhoneNumber, managerID, managerPassword);
	phoneBook = new PhoneBook();
	System::loadingDraw();
	System::clearScreen();
}

PhoneBookManager::~PhoneBookManager()
{
	delete[] manager;
	delete[] phoneBook;
}

void PhoneBookManager::run(void)
{
	System::drawMenu();
	choiceMenu();
	System::loadingDraw();
	System::clearScreen();
}

void PhoneBookManager::choiceMenu(void)
{
	int choice;
	cout << "����->>>"; cin >> choice;

	switch (choice)
	{
	case INSERT:
		insertPhoneInfo();
		break;
	case REMOVE:
		removePhoneInfo();
		break;
	case NAMESEARCH:
		nameSearchPhoneInfo();
		break;
	case PRINT:
		printList();
		break;
	case MANAGER:
		managerInfo();
		break;
	case SAVE:
		savePhoneInfo();
		break;
	case GET:
		getPhoneInfo();
		break;
	}
}

void PhoneBookManager::insertPhoneInfo(void)
{
	if (phoneBook->pushData())
		cout << "�ߺ� ��ȭ��ȣ �Դϴ�." << endl;
	else
		cout << "������ �Է� ����" << endl;
}

void PhoneBookManager::removePhoneInfo(void)
{
	if (phoneBook->removeData())
		cout << "������ ���� ����" << endl;
	else
		cout << "������ ���� ����" << endl;
}

void PhoneBookManager::nameSearchPhoneInfo(void)
{
	Phone* PhoneInfo = phoneBook->findPhoneNumberByName();
	if (PhoneInfo == nullptr)
		cout << "�����Ͱ� �������� �ʽ��ϴ�." << endl;
	else
		PhoneInfo->phoneList();

	System::waitUntilSee();
}

void PhoneBookManager::printList(void)
{
	if (phoneBook->isPhoneBookEmpty())
		cout << "�����Ͱ� �������� �ʽ��ϴ�."<<endl;
	else
		phoneBook->printListOfPhoneNumbers();

	System::waitUntilSee();
}

void PhoneBookManager::managerInfo(void)
{
	manager->printListInfo();
	System::waitUntilSee();
}

void PhoneBookManager::savePhoneInfo(void)
{
	if (phoneBook->savePhoneNumberList())
		cout << "������ ���� ����" << endl;
	else
		cout << "������ ���� ����" << endl;

}

void PhoneBookManager::getPhoneInfo(void)
{
	if (phoneBook->getPhoneNumberList())
		cout << "������ �ҷ����� ����" << endl;
	else
		cout << "������ �ҷ����� ����" << endl;
}

