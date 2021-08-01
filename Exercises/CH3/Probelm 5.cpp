#include <iostream> 
#include <conio.h>
#include <iomanip>
using namespace std;

/*
Use for loops to construct a program that displays a pyramid of Xs on the screen. The
pyramid should look like this
		X					row = 0 => rows = 5 => col = 5
	   XXX					row = 1				   col start = 4
	  XXXXX					row = 2				   col start = 3	
	 XXXXXXX
	XXXXXXXXX


*/


int main() {
	int rows = 20;
	double half = rows / 2;

	for (int row = 0; row < rows ; row++) { 

		

		for (int col = 0; col < rows - row; col++) {
			cout << "   ";

		}
		for (int col = half - row ; col <= half + row ; col++) {
			cout << "Gad";
		}

		cout << '\n';
	}
	cin.get();

	return 0;
}

/* 
output : 


															Gad
														 GadGadGad
													  GadGadGadGadGad
												   GadGadGadGadGadGadGad
												GadGadGadGadGadGadGadGadGad
											 GadGadGadGadGadGadGadGadGadGadGad
										  GadGadGadGadGadGadGadGadGadGadGadGadGad
									   GadGadGadGadGadGadGadGadGadGadGadGadGadGadGad
									GadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGad
								 GadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGad
							  GadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGad
						   GadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGad
						GadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGad
					 GadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGad
				  GadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGad
			   GadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGad
			GadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGad
		 GadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGad
	  GadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGad
   GadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGadGad

*/