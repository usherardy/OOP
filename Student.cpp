
#include <iostream>

#include "Student.h"
#include "Employee.h"

Student::Student(string Name, string Company, int Age, string Subchoice)
	:Employee(Name, Company, Age) {
	Sub = Subchoice;
}
void Student::IsStudying() {
	cout << name << " is has Chosen " << Sub << endl;
}/*
void Student::Work() {
	cout << name << " is learning " << Sub << endl;
}*/
