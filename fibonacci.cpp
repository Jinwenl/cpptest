#include <iostream>

using namespace std;

int f1(int i){
	if(i <= 2)
		return 1;
	else
		return f1(i-1) + f1(i-2);
}

// loop method
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

// tail recursion
int f3(int i, int val=1, int prev=1){
	if(i==1)
		return prev;	
	if(i==2)
		return val;
	else
		return f3(i-1, val+prev, val);
}

int main(){
	int j = 20;
	for(int i=1; i<j; i++){
		cout << i << "\t" << f1(i) << "\t" << f2(i) << "\t" << f3(i) << endl;
	}
	return 0;
}






