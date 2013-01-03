#include <iostream>
#include <ctime>
#include <bitset>
#include <cstdlib>

using namespace std;

int main(){
	int N = 10000000;
	bitset<10000000> m;
	srand(time(NULL));
	
	int z;

	for(int i = 1; i <= N; i++){
		//cout << rand()%10 << endl;		
		z = rand()%N;
		m.set(z);	
	}

	int N0 = N - m.count();
	double e = (1.0*N) / (1.0 * N0);
	cout << e << endl;
	return 0;

}
