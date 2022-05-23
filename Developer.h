#pragma once

#include <iostream>
#include <string>
#include "Employee.h"

class Developer : public Employee {
public:
	string FavProgLang;
	Developer();
	Developer(string fav, string Name, string Company, int Age);

	void FixBug();
	void Work();

	Developer operator&(Developer);

};