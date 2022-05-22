#pragma once

#include <iostream>
#include <string>
#include "Employee.h"

class Teacher : public Employee {
private:
	string Subject;
public:
	Teacher(string Name, string Company, int Age, string subject);
	void PrepareLesson();
	void Work();

};