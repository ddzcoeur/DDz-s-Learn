//
//  Person.h
//  Cocos_2dx_test
//
//  Created by Zhou DD on 12/10/13.
//
//

#ifndef __Cocos_2dx_test__Person__
#define __Cocos_2dx_test__Person__

#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    Person (void);
    void init(void);
    void setPersonName(string aName);
    void setPersonAddress(string aAddress);
protected:
    string person_name;
    string person_address;
};

#endif
