#pragma once

#include <iostream>
#include <string>
#include "Employee.h"


class Student : public Employee {
public:
	string Sub;
	int grade;
public:
	Student();
	Student(string Name, string Company, int Age, string Subchoice, int Grade);
	void IsStudying();
	void Work();
	Student operator+(Student& obj);
};