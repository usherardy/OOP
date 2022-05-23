
#include <iostream>

#include "Student.h"
#include "Employee.h"

Student::Student(){
}
Student::Student(string Name, string Company, int Age, string Subchoice, int Grade)
	:Employee(Name, Company, Age) {
	Sub = Subchoice;
	grade = Grade;
}
void Student::IsStudying() {
	cout << getname() << " has Chosen " << Sub << endl;
}
void Student::Work() {
	cout << getname() << " is learning " << Sub << " as his major" << endl;

}
Student Student::operator+(Student& obj) {
	Student s;
	s.Sub = Sub + " and " + obj.Sub;
	s.setname(getname() +  " and " + obj.getname());
	s.grade = grade + obj.grade;
	return s;
}


