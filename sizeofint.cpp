#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int m;
	for(int i = 0; i < 100; i++){
		m = pow(2,i);
		cout <<i << "\t" << m << "\t" << pow(2,i)  << endl;
	}
	return 0;
}
