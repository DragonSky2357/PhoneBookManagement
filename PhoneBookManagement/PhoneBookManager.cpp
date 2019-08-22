#include "PhoneBookManager.h"

PhoneBookManager::PhoneBookManager()
{
	string personName, personPhoneNumber, managerID, managerPassword;
	cout << "매니저 로그인을 시작합니다" << endl;
	cout << "전화번호 이름 : "; cin >> personName;
	cout << "전화번호 : "; cin >> personPhoneNumber;
	cout << "매니저 ID : "; cin >> managerID;
	cout << "매니저 비밀번호 : "; cin >> managerPassword;
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
	cout << "선택->>>"; cin >> choice;

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
		cout << "중복 전화번호 입니다." << endl;
	else
		cout << "데이터 입력 성공" << endl;
}

void PhoneBookManager::removePhoneInfo(void)
{
	if (phoneBook->removeData())
		cout << "데이터 삭제 실패" << endl;
	else
		cout << "데이터 삭제 성공" << endl;
}

void PhoneBookManager::nameSearchPhoneInfo(void)
{
	Phone* PhoneInfo = phoneBook->findPhoneNumberByName();
	if (PhoneInfo == nullptr)
		cout << "데이터가 존재하지 않습니다." << endl;
	else
		PhoneInfo->phoneList();

	System::waitUntilSee();
}

void PhoneBookManager::printList(void)
{
	if (phoneBook->isPhoneBookEmpty())
		cout << "데이터가 존재하지 않습니다."<<endl;
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
		cout << "데이터 저장 성공" << endl;
	else
		cout << "데이터 저장 실패" << endl;

}

void PhoneBookManager::getPhoneInfo(void)
{
	if (phoneBook->getPhoneNumberList())
		cout << "데이터 불러오기 성공" << endl;
	else
		cout << "데이터 불러오기 실패" << endl;
}

