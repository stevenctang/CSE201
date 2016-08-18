#include <iostream>
#include <cassert>

using namespace std;

int mymaximum(int a[], int numberOfElements) {
	int m = a[0];
	for (int i = 1; i<numberOfElements; ++i) {
		if (a[i]>m) m = a[i];
	}
	return m;
}

int main(){
	int a[] = { 6,-3,8,1};
	int max = mymaximum(a,4);
	assert(max == 8);

	int b[4];
	b[0]=6;
	b[1]=-3;
	b[2]=8;
	b[3]=1;
	max = mymaximum(b,4);
	assert(max == 8);
	
	int c[]={-23,-10,-100};
	assert(mymaximum(c,3) == -10);

	cout<<"All test passed."<< endl;
}
  
