#include <iostream>
#include "Employee.h"

using namespace std;

void Employee::setname(string  Name) {
	name = Name;
}

string Employee:: getname()
{
	return name;
}
void Employee:: setcompany(string  Company) {
	company = Company;
}

string Employee:: getcompany()
{
	return company;
}
void Employee:: setage(int Age) {
	if (Age > 18)
		age = Age;
}
int Employee:: getage()
{
	return age;
}

void  Employee::IntroduceYourSelf()
{
	cout << "First name  -" << name << endl;
	cout << "last name  -" << company << endl;
	cout << "Shape  -" << age << endl;
}
void Employee::AskForPromotion() {
	if (age > 30)
		cout << name << "Got promoted" << endl;
	else
		cout << name << "Not Promoted" << endl;

}
void Employee:: Work() {
	cout << name << "is checking email, task baclog " << endl;
}

Employee::Employee(string Name, string Company, int Age)
{
	name = Name;
	company = Company;
	age = Age;
}
