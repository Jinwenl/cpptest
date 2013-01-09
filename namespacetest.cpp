#include <iostream>


namespace A{
	int x = 10;
}

namespace B{
	int x = 20;
}

namespace{
	int x = 5;
}

int main(){
	std::cout << x << std::endl;
	std::cout << A::x << std::endl;
	std::cout << B::x << std::endl;

	return 0;
}
