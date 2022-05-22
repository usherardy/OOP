#pragma once

#include <iostream>
#include <string>
#include "Employee.h"

class Student : public Employee {
public:
	string Sub;
public:
	Student(string Name, string Company, int Age, string Subchoice);
	void IsStudying();
	//void Work();
};