#include <iostream>
#include <cmath>

using namespace std;

void whether(int x){
	if((x & (x-1)) == 0){
		cout << "is a power of 2";
	}
	else{
		cout << "is not a power of 2";
	}
}

int main(){
	int a = pow(2,5);
	int b = pow(2,4) - 1;
	
	cout << "a, " << a << ", "  ; 
	whether(a);
	cout << "\nb, " << b << ", "  ; 
	whether(b);

	cout << endl << endl;
	//bool c = a & (a-1);
	bool c = b & (b-1);
	cout << c;	

	cout << endl << endl;


	return 0;	
}	 
