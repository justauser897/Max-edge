#include <iostream>

int main()
{
	int side1, side2, maxedge;
	std::cout <<"Enter 2 sides.";
	std::cin >> side1;
	std::cin >> side2;
	maxedge=(side1 +side2)-1;
	std::cout << "The maximum edge is "<< maxedge;
	
	return 0;
}
