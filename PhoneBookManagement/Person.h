#pragma once

#include<string>
using namespace std;

class Person { // 기본적인 사람에 대한 전화 정보
private:
	string personName; // 사람 휴대폰 정보
	string personNumber;
public:
	Person(string personName, string personNumber);
	virtual ~Person();
	virtual string getPsersonName();
	virtual string getPersonNumber();
};