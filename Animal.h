#pragma once
#include <iostream>
using namespace std;
class Animal
{
protected:
	static int counter;

public:
	virtual void fly() = 0;
	virtual void speak() = 0;


};

