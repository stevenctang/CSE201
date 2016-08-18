#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

void insert(vector<int> & v, int k){
	v.push_back(0);
	for ( int i= v.size() -1; i>0;--i){
	   if(k<v[i-1]) {
		v[i]=v[i-1];
	} else {
		v[i]=k;
		return;
		}
	}
	v[0]=k;
}
int main() {
	vector<int> v(4);
	v[0] = 3;
	v[1] = 6;
	v[2] = 7;
	v[3] = 12;
	insert(v,8);
	assert(v[0] == 3);
	assert(v[1] == 6);
	assert(v[2] == 7);
	assert(v[3] == 8);
	assert(v[4] == 12);
	
	vector<int> u(2);
	u[0]=4;
	u[1]=7;
	insert(u,1);
	assert(u[0] == 1);
	assert(u[1] == 4);
	assert(u[2] == 7);

	vector<int> w(2);
	w[0] = 3;
	w[1] = 6;
	insert(w,30);
	assert(w[0] == 3);	
	assert(w[1] == 6);
	assert(w[2] == 30);

	cout<< " all test passed" << endl;
}

