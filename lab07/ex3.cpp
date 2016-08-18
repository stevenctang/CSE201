#include <iostream>
#include <cassert>

using namespace std;

int search(int a[], int size, int k) {
	for (int i=0; i<size;++i) {
		if (a[i] ==k) return i;
	}
	return -1;
}
int main ( int argc, char*args []){
	int a[] = { -2, 4, 18, 6, -10};
	
	assert ( search (a, 5, 1 ) == -1);
	assert ( search (a, 5, 4 ) == 1);
	
	cout<<" All tests passed."<< endl;
}
