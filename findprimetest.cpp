#include <iostream>

using namespace std;

void f (int i){
	//if(i==2)
	int z =2;
	while(z*z<=i){
		if(i%z == 0){
			cout << z << endl;
			i = i/z;
		}
		else
			z++;
	}
	cout << i << endl;
	
}

int main(){
	f(1024);

	return 0;
}
