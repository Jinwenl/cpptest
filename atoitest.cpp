#include <iostream>

using namespace std;

int my_atoi(char *s){
	int k = 0;
	while(*s){
		k = (k<<3) + (k<<1) + *s - '0';
		s++;
	}	
	return k;
}

int main(){
	char c[] = "3810";
	int i;
	i = my_atoi(c);
	cout << i << endl;
	cout << (i + 1111) << endl;

	return 0;




}
