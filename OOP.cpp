#include <iostream>
#include "Employee.h"
#include"Employee.cpp"
#include "Developer.h"
#include "Developer.cpp"
#include "Teacher.h"
#include "Teacher.cpp"
#include "Student.h"
#include "Student.cpp"

using namespace std;

/*
class Employee:IEmployee {
private:
	std::string company;
	int age;
protected:
	string name;
public:
	void setname(string  Name) {
		name = Name;
	}
	string getname()
	{
		return name;
	}
	void setcompany(string  Company) {
		company = Company;
	}
	string getcompany()
	{
		return company;
	}
	void setage(int Age) {
		if(Age > 18)
			age = Age;
	}
	int getage()
	{
		return age;
	}

	void IntroduceYourSelf()
	{
		cout << "First name  -" << name << endl;
		cout << "last name  -" << company << endl;
		cout << "Shape  -" << age << endl;
	}
	Employee(string Name, string Company, int Age)
	{
		name = Name;
		company = Company;
		age = Age;
	}

	void AskForPromotion() {
		if (age > 30)
			cout << name << "Got promoted" << endl;
		else
			cout << name << "Not Promoted" << endl;
	
	}
	virtual void Work() {
		cout << name << "is checking email, task baclog " << endl;
	}
};

class Developer : public Employee {
public:
	string FavProgLang;
	Developer(string fav, string Name, string Company, int Age)
		:Employee(Name, Company, Age) {
		FavProgLang = fav;
	}
	void FixBug() {
		cout << name << " Fixed Bug using" << FavProgLang << endl;
	}
	void Work() {
		cout << name << "is writing " << FavProgLang << "code" << endl;
	}


};
class Teacher : public Employee {
public:
	string Subject;
	Teacher(string Name, string Company, int Age, string subject)
		:Employee(Name, Company, Age) {
		Subject = subject;
	}
	void PrepareLesson() {
		cout << name << "is preparing " << Subject << " lesson " << endl;
	}
	void Work() {
		cout << name << "is teaching " << Subject << endl;
	}
};*/
int main()
{
	//Employee employee1("Dick", "Head", 10);
	//employee1.IntroduceYourSelf();
	//employee1.setage(39);
	//cout << employee1.getname()<<"is "<< employee1.getage() << endl;

	//employee1.AskForPromotion();


	 // Insertering Developer
	Developer d("C", "Dennis Ritchie", "Bell Labs", 89);
	d.IntroduceYourSelf();
	d.FixBug();				
	d.AskForPromotion();	
	Developer d1("Unix", "Ken Thompson", "Bell Labs", 70);
	Developer d2 = d & d1;
	cout << d2.getname() << " both worked on " << d2.FavProgLang << " at " << d2.getcompany() << endl;
	printf("---------------------------------\n");
	
	
	// Inserting Teacher
	Teacher t = Teacher("Julius", "Shannons club", 30, "Computer Science");
	t.IntroduceYourSelf();	
	t.PrepareLesson();		
	t.AskForPromotion();	printf("---------------------------------\n");
	
	// Inserting Student
	Student s = Student("Ashar", "Vgtu", 20, "Programming", 5);
	s.IntroduceYourSelf();	
	s.IsStudying();			
	s.AskForPromotion();	

	Student s1("Shakir", "Stanford", 21, " Maths",8);
	Student s2= s + s1;
	cout <<s2.getname() << " are learning " << s2.Sub << " and their Combined Grade is " << s2.grade << endl;
	printf("---------------------------------\n");


	//Polymorphism
	Employee* e1 = &d;
	Employee* e2 = &t;
	Employee* e3 = &s;
	e1->Work();
	e2->Work();
	e3->Work();
}