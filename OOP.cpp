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

int main()
{

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