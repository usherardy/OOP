#include <iostream>
#include "Developer.h"
#include "Employee.h"

using namespace std;

Developer::Developer(string fav, string Name, string Company, int Age)
	:Employee(Name, Company, Age) {
	FavProgLang = fav;
}
void Developer::FixBug() {
	cout << name << " Fixed Bug using" << FavProgLang << endl;
}
void Developer:: Work() {
	cout << name << " is writing " << FavProgLang << "code" << endl;
}