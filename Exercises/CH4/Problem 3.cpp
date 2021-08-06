#include <iostream> 
using namespace std;

/*
Create a structure called Volume that uses three variables of type Distance (from the
ENGLSTRC example) to model the volume of a room. Initialize a variable of type Volume
to specific dimensions, then calculate the volume it represents, and print out the result.
To calculate the volume, convert each dimension from a Distance variable to a variable
of type float representing feet and fractions of a foot, and then multiply the resulting
three numbers.
*/

struct Distance {
	int feet;
	double inches;
};

struct Volume {
	Distance d1;
	Distance d2;
	Distance d3;

};
double distanceToFloat( Distance d) {

	return d.feet + d.inches / 12; 
}

int main() {

	Volume volume = { {5 , 7} , { 4 , 11} , { 1 , 2} };

	cout << "The volume is : " << distanceToFloat(volume.d1) * distanceToFloat(volume.d2) * distanceToFloat(volume.d3); 

	return 0;
}