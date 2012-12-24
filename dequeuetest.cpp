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

	queue<int>q;
	q.push(1);
	q.push(2);
	q.push(3);
//	cout << q[0] << q[1] << q[2] << endl;	
	cout << q.back() << endl;

	return 0;
}
