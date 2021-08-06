#include <iostream> 
using namespace std;

/*
Write a program that uses a structure called point to model a point. Define three points,
and have the user input values to two of them. Then set the third point equal to the sum
of the other two, and display the value of the new point.
*/

struct Point {
	double x;
	double y; 
};

Point operator+(Point p1 , Point p2) {
	return {p1.x + p2.x , p1.y + p2.y }; 
}

int main() {
	Point p1, p2, p3; 

	cout << "Enter coordinates for p1 : ";
	cin >> p1.x >> p1.y ;

	cout << "Enter coordinates for p2 : ";
	cin >> p2.x >> p2.y;

	cout << "coordinates of p1+p2 are : ";

	p3 = p1 + p2; 
	cout << p3.x << " " << p3.y ;

	return 0;
}