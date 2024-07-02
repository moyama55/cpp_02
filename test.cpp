#include <iostream>
#include <string>
#include <cmath>

int main()
{
	int a;
	float b = 1234.4321f;
	a = roundf(b * 256);
	std::cout << (float)a / (float)(256) << std::endl;
}