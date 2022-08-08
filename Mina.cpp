#include "Mina.h"
Mina::Mina() {
	counter++;
	cout << " new Mina " << counter << " " << endl;
}

void Mina::speak() {
	cout << " I'm Mina " << endl;
}

void Mina::fly() {

	cout << " fly " << endl;
}