#include <iostream>
#include <cassert>

using namespace std;


const int ROWS = 3;
const int COLS = 4;

double findMax(double a[ROWS][COLS]) {
	double BiggestValueSoFar= a[0][0];
	for ( int i=0; i< ROWS ++i){
		for(int j=0; j< COLS; ++j){
			if (a[i][j] > BiggestValueSoFar) BiggestValueSoFar = a[i][j];
		}
	}
	return BiggestValueSoFar;

}

int main( int argc, char*args[])[
	
	double a[ROWS][COLS];
	a[0][0] = -5;
	a[0][1] = -5;
	a[0][2] = -5;
	a[0][3] = -5;
	a[1][0] = -5;
	a[1][1] = -5;
	a[1][2] = -5;
	a[1][3] = -5;
	a[2][0] = -5;
	a[2][1] = -5;
	a[2][2] = -5;
	a[2][3] = -5;

	assert(findMax(a)==3);


	cout<< " All test passed . "<< endl;

}
