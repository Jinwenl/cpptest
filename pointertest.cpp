#include <iostream>

using namespace std;

int main(){
	int a = 7;
	int *ap;
	ap = &a;

	double b = 3.42;
	double *bp = &b;

	cout << "a = " << *ap  << endl;
	cout << "b = " << *bp << endl;

	return 0;
}
