#include "Person.h"

Person::Person(string personName, string personNumber)
	:personName(personName),personNumber(personNumber)
{
}

Person::~Person()
{

}

string Person::getPsersonName()
{
	return personName;
}

string Person::getPersonNumber()
{
	return personNumber;
}
