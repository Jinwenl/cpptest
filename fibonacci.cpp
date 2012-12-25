#include <iostream>

using namespace std;

int f1(int i){
	if(i <= 2)
		return 1;
	else
		return f1(i-1) + f1(i-2);
}

int f2(int i){
	int a=1;
	int b=1;
	int c;
	if (i <= 2);
		c=1;
	while(i>2){
		c = a + b;
		a = b;
		b = c;
		i--;
	}
	return c;
}

int f3(int i, int b=1, int a=1){
	if(i==1)
		return a;	
	if(i==2)
		return b;
	else
		return f3(i-1, b+a, b);
}

int main(){
	int j = 20;
	for(int i=1; i<j; i++){
		cout << i << "\t" << f1(i) << "\t" << f2(i) << "\t" << f3(i) << endl;
	}
	return 0;
}






