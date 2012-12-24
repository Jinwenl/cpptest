#include <iostream>
#include <vector>
#include <deque>
#include <queue>

using namespace std;


int main(){

	deque<int>d;
	d.push_back(3);
	d.push_front(2);
	cout << d.size() << endl << d[0] << d[1] << endl;

	return 0;
}
