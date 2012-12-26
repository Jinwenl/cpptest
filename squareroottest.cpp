#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double f(double n){
	double xold, xnew;
	xold = 2.0;
	cout << "xnew = " << xnew << endl;
	while(abs(xnew * xnew - n) > 0.000001){
		xnew = xold - (xold*xold-n) / (2.0 * xold);
		xold = xnew;
		cout << xnew << endl;
	}

	return xnew;
}

int main(){
	cout.precision(11);
	cout << f(3.0) << endl;

	return 0;
}

