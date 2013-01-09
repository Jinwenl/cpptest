#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int f(const vector<int> &v){
	int sum = 0;
	int max = -RAND_MAX;	// incase the max is negative
	cout << max << endl;
	for(int i = 0; i < v.size(); i++){
		sum += v[i];
		
		if(sum > max)
			max = sum;
		if(sum < 0)
			sum = 0;		

	}	
	return max;
}

int main(){
	int a[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};	//largest subset is 6
	vector<int> v(a, a+9);
	cout << f(v) << endl ;

	return 0;
}
