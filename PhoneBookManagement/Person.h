#pragma once

#include<string>
using namespace std;

class Person { // �⺻���� ����� ���� ��ȭ ����
private:
	string personName; // ��� �޴��� ����
	string personNumber;
public:
	Person(string personName, string personNumber);
	virtual ~Person();
	virtual string getPsersonName();
	virtual string getPersonNumber();
};