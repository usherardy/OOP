

#include <iostream>
#include "Teacher.h"
#include "Employee.h"

Teacher::Teacher(string Name, string Company, int Age, string subject)
		:Employee(Name, Company, Age) {
		Subject = subject;
	}
void Teacher::PrepareLesson() {
	cout << getname() << " is preparing " << Subject << " lesson " << endl;
	}
void Teacher::Work() {
	cout << getname() << " is teaching " << Subject << endl;
	}
