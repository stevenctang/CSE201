#include <iostream>
#include <cassert>
#include <vector>

using namespace std;

const int ROWS =4;
const int COLS =3;

double findMax(double a[ROWS][COLS]){
	double max = a[0][0];
	for ( int i=0; i<ROWS; ++i){
		for (int j=0; j<COLS;++j){
			if (a[i][j] > max) max= a[i][j];
		}
	}
	return max;
}

int main( int argc,char *args[]){
	double a[ROWS][COLS]={
		{ 3,8, 6},
		{-4,3, 65},
		{-9,1, 33},
		{-2,5,20}
	};
	
	assert(findMax(a)==65);

	a[0][0] = -20;
	a[0][1] = -20;
	a[0][2] = -20;
	a[1][0] = -20;
	a[1][1] = -20;
	a[1][2] = -20;
	a[2][0] = -20;
	a[2][1] = -20;
	a[2][2] = -20;
	a[3][0] = -20;
	a[3][1] = -20;
	a[3][2] = -20;

	assert(findMax(a)== -20);

	cout<<" Test Passed"<< endl;
}

