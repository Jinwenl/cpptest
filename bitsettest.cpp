// bitset::any
#include <iostream>
#include <bitset>
using namespace std;

int main ()
{
  bitset<5> m;

	m.flip();
	m.flip(2);
	//m.set(4);
	cout << m.test(2) << endl;
	cout << m.size() << endl;
	for( int i = 0; i < m.size(); i++){
		cout << m[i];
	}
	cout << endl;
	cout << "any: " << m.any() << endl;
	cout << "count: " << m.count() << endl;
  return 0;

}
