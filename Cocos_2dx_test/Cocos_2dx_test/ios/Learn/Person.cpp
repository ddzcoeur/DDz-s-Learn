//
//  Person.cpp
//  Cocos_2dx_test
//
//  Created by Zhou DD on 12/10/13.
//
//

#include "Person.h"
using namespace std;

Person::Person(void)
{
    init();
}


void Person::init(void)
{
    setPersonName("DDz");
    setPersonAddress("WenYi Road");
}


void Person::setPersonName(string aName)
{
    person_name = aName;
}
void Person::setPersonAddress(string aAddress)
{
    person_name = aAddress;
}