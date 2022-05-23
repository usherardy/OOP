#include <iostream>
#include "Developer.h"
#include "Employee.h"

using namespace std;

Developer::Developer() {}
Developer::Developer(string fav, string Name, string Company, int Age)
	:Employee(Name, Company, Age) {
	FavProgLang = fav;
}
void Developer::FixBug() {
	cout << getname() << " Fixed Bug using " << FavProgLang << endl;
}
void Developer:: Work() {
	cout << getname() << " is writing " << FavProgLang << " code" << endl;
}
Developer Developer::operator &(Developer dev) {
	Developer d;
	d.company = company;
	d.setname(getname() + " and " + dev.getname());
	d.FavProgLang = FavProgLang +" and " + dev.FavProgLang;
	return d;
}