//============================================================================
// Name        : cpp_Tracking.cpp
// Author      : Dylan Blakemore
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "../include/Vec3d.h"
using namespace std;

int main() {
	Vec3d v1(1,1,2);
	Vec3d v2(3,3,5);

	std::cout << v1 << endl;
	std::cout << v2 << endl;
	std::cout << (v1 - v2) << endl;
	std::cout << v1.norm() << endl;

	return 0;
}
