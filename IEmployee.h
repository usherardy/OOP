#pragma once
#include <iostream>
class IEmployee {

public:
	virtual void AskForPromotion() = 0;
	virtual void Work() =0 ;
};