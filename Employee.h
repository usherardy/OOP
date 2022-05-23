#pragma once
#include <iostream>
#include <string>
#include "IEmployee.h"
using namespace std;
class Employee : public IEmployee {
private:
	string name;
protected:
	string company;
	int age;
public:
	Employee();
	void setname(string  Name);

	string getname();

	void setcompany(string  Company);
	string getcompany();

	void setage(int Age);

	int getage();
	void IntroduceYourSelf();

	Employee(string Name, string Company, int Age);
		void AskForPromotion() override;
		virtual void Work();
};

