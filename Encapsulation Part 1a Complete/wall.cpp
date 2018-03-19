#include "stdafx.h"
#include "wall.h"
#include <iostream>

using namespace std;

wall::wall(void)
{
	length = 8;
	width = 8;
}

void wall::set(int new_length, int new_width)
{
	length = new_length;
	width = new_width;
}

wall::~wall(void)
{
	length = 0;
	width = 0;
}

int main()
{
	wall small, medium, large; // three objects instantiated of type class wall

	small.set(5, 7);
	large.set(15, 20);

	cout << "In this part, we have divided our program into\n";
	cout << "three parts.\n" << "1. Declaration part, wall.h\n";
	cout << "2. Implementation part, wall.cpp\n" << "3. Main program, wall2.cpp\n";
	cout << "The output just from the 3rd part i.e. the main \n";
	cout << "program is same as the previous program, as follows\n";
	cout << "----------------------------------------------------\n\n";
	cout << "Area of the small wall surface is = " << small.get_area() << "\n";
	cout << "Area of the medium wall surface is = " << medium.get_area() << "\n";
	cout << "area of the big wall surface is =  " << large.get_area() << "\n";

}


