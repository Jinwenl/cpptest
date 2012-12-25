#include <iostream>

using namespace std;

template <typename T>
inline T maxi(T a, T b){
	T max;
	if (a>b)
		return a;
	else
		return b;
}

int main(){
	int a,b;
	double c,d;
	char e,f;
	a=3;
	b=5;
	c=3.44;
	d=4.24;
	e ='a';
	f='b';
	cout << maxi(a,b) << endl;
	cout << maxi(c,d) << endl;
	cout << maxi(e,f) << endl;
	
	return 0;
}
