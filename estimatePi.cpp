#include <iostream>
 #include <ctime>
 #include <cstdlib>
 
 using namespace std;
 
 int main(){
         int N = 10000000;

         srand(time(NULL));
         
	double a, b;
	int  iter;
         
         for(int i = 1; i <= N; i++){ 
                 a = rand() / static_cast<double>(RAND_MAX);
                 b = rand() / static_cast<double>(RAND_MAX);

		if(a*a + b*b <=1){
			iter++;
		}
	}

	double c = (1.0 * iter) / (1.0 * N);
	cout << 4*c << endl;	
	return 0;
}
