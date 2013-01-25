#include <iostream>

using namespace std;

int findu(int *s){
	int u = 0;
	while(*s){
		cout << *s;
		u ^= *s;
		s++;
	}
	return u;
}

int main(){

	int a[] = {2,5,4,2,5,4,7,8,8,9,9};
	int result;
	result = findu(a);
	cout << result << endl;
	
	return 0;
}
