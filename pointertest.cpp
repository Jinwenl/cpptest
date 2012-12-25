#include <iostream>

using namespace std;

int main(){
	int a = 7;
	int *ap;
	ap = &a;

	double b = 3.42;
	double* bp = &b;

	double* cp = bp;

	cout << "a = " << *ap  << endl;
	cout << "b = " << *bp << endl;
	cout << "c = " << *cp << endl;
	cout << "cp = " << cp << endl;


	return 0;
}
