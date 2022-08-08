#include "Bird.h"
Bird::Bird() {
	counter++;
	cout << " bird created " << counter << " " << endl;
}
void Bird::speak() {

	cout << " I'm a bird " << endl;
}