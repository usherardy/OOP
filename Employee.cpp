#include <iostream>
#include "Employee.h"

using namespace std;

Employee::Employee(){}

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
	cout << "Name - " << name << endl;
	cout << "Company - " << company << endl;
	cout << "Age - " << age << endl;
}
void Employee::AskForPromotion() {
	if (age > 30)
		cout << name << " got promoted" << endl;
	else
		cout << name << " not Promoted" << endl;

}
void Employee:: Work() {
	cout << name << " is checking email, task baclog " << endl;
}

Employee::Employee(string Name, string Company, int Age)
{
	name = Name;
	company = Company;
	age = Age;
}
