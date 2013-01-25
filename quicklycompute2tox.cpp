#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
	cout.precision(20);

	int a=30;

	cout << "2^x \n by cmath is :  " << pow(2,a);
	long b = (1 << a);
	cout << "\n by shiflt is : " << b << endl;

	return 0;
}
