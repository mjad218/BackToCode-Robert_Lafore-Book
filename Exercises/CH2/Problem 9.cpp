#include <iostream> 
#include <iomanip> 

using namespace std; 



/*


If you have two fractions, a/b and c/d, their sum can be obtained from the formula
Write a program that encourages the user to enter two fractions, and then displays their
sum in fractional form. (You don’t need to reduce it to lowest terms.) The interaction
with the user might look like this:
Enter first fraction: 1/2
Enter second fraction: 2/5
Sum = 9/10
You can take advantage of the fact that the extraction operator ( >> ) can be chained to
read in more than one quantity at once:
cin >> a >> dummychar >> b;


*/
int main() {


	double a, b, c, d; 

	char slash; 

	cout << "Enter The first Number : "; 

	cin >> a >> slash >> b; 


	cout << "Enter The Second Number : ";

	cin >> c >> slash >> d ;

	double sum = 0; 

	sum = ( ( d * a) +  (b * c) )/ (b* d); 

	cout << "sum = " << sum;
	return 0; 
}