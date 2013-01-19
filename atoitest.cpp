#include <iostream>
#include <cstdlib>

using namespace std;

int my_atoi(char *s){
	int k = 0;
	int neg = 0;

	while(*s == ' ')	// handle start at space situation
		s++;

	if(*s=='-'){		// handle negative
		neg = 1;
		s++;
	}

	while(*s){
		if(*s < '0' || *s > '9')	
			break;

		k = (k<<3) + (k<<1) + *s - '0';
		s++;

		if(k<0)
			cout << "buffer overflow" << endl;
	}
	
	if(neg == 1)
		k = -k;
	return k;
}

int main(){
	char c[] = "  -2147483648s";
	//char c[] = "  -100s3";
	int i;
	i = my_atoi(c);
	cout << i << endl;
	cout <<atoi(c) << endl;

//	int j = -2147483649;
//	cout << j << endl;

	return 0;




}
