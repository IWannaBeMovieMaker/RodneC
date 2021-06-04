#include "rodneCislo.h"
#include <iostream>

int main() {
	using std::cout;
	using std::cin;
	using std::endl;

	RodneC rc1;
	RodneC rc2("6462191472");
	RodneC rc3(rc2);

	cout << "Objekt rc1 vytvoreny vychozim konstruktorem: " << endl;
		cout << "----------------------------------------------" << endl
		<< rc1 << endl;

	cout << "Objekt rc2 vytvoreny konstruktorem s parametry: " << endl;
	cout << "----------------------------------------------" << endl
		<< rc2 << endl;

	cout << "Objekt rc3 vytvoreny kopirovacim konstruktorem: " << endl;
		cout << "----------------------------------------------" << endl
		<< rc3 << endl;

	return 0;
}