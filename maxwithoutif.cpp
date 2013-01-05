#include <iostream>

using namespace std;

int getMax(int a, int b) {
	int c = a - b;
	int k = (c >> 31) & 0x1;
	int max = a - k * c;
	return max;
}

int main(){
	int a = 3, b = 5;
	cout << getMax(3,5) << endl;

	return 0;
}
