#include <iostream>
#include <string>

using namespace std;

int main(){

	string str("this is a string");
	cout << str.size() << str << endl;

	str.erase(7);
	cout << str.size() << str << endl;

	//str.resize(20);
	str = str + " a string";
	cout << str.size() << str << endl;

	string str1("string 1");
	str.swap(str1);
	cout << str.size() << str << endl;

	str.erase(7,1);
	cout << str << endl;

	str.insert(3,"+");
	cout << str << endl;

	return 0;
}
