#include <iostream>
#include <cassert>

using namespace std;

int binary_search( int a[], int size, int k){
int s=0;
int e= size-1;
while(s<=e) {
	int m= ( s + e)/2;
	if( a[m]==k){
	 return m;
	} else if (k<a[m]){
		e=m-1;
	}else{
		assert(k>a[m]);
		s=m+1;
		}
	}
	return -1;
}
int main(int argc,char*args[]){
	int a[] = { -4, -2, 0, 3, 6, 11, 15, 16};

	assert(binary_search (a,8,-4)==0);
	assert(binary_search (a,8,0)==2);
	assert(binary_search (a,8,17)==-1);
	assert(binary_search (a,8,3)==3);
	assert(binary_search (a,8,6)==4);
	assert(binary_search (a,8,15)==6);
	assert(binary_search (a,8,16)==7);
	assert(binary_search (a,8,11)==5);
	assert(binary_search (a,8,22)==-1);

	cout<<"All test passed"<<endl;
}

