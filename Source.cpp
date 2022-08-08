#include "Animal.h"
#include "Bird.h"
#include "Mina.h"

void Do(Animal& A) {
	A.fly();
	cout << endl;
	A.speak();
}
int main() {

	Mina M1;
	Do(M1);

	Animal* animals[5];
	animals[0] = &M1;
	animals[0]->fly();


}