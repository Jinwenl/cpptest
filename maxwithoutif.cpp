#include <iostream>

using namespace std;

int getMax(int a, int b) {
	int c = a - b;
	//int k = (c >> 31) & 0x1;
	int k = bool(c);
	int max = a - k * c;
	return max;
}

int main(){
	int a = 5, b = 3;
	cout << getMax(a,b) << endl;

	return 0;
}
