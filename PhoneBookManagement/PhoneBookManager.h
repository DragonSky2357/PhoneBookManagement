#pragma once
#include"PhoneBook.h"
#include"Manager.h"
#include"System.h"

class PhoneBookManager {
private:
	PhoneBook *phoneBook;
	Manager *manager;
	enum {INSERT=1,REMOVE,NAMESEARCH,PRINT,MANAGER,SAVE,GET,TRANSFER};
public:
	PhoneBookManager();
	virtual ~PhoneBookManager();
	void run(void);
	void choiceMenu(void);
	void insertPhoneInfo(void);
	void removePhoneInfo(void);
	void nameSearchPhoneInfo(void);
	void printList(void);
	void managerInfo(void);
	void savePhoneInfo(void);
	void getPhoneInfo(void);
};