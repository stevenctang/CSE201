#include <iostream>
#include <cassert>
#include <vector>

using namespace std;
	void append(vector<int> & v, int n){
	   for ( int i = 0; i <n; ++i){
		v.push_back(i);
	}
}

int main(){
	vector <int> v;
	v.push_back(4);

	assert(v.size()==1);
	assert(v[0]==4);
	
	append(v,2);
	assert(v.size() ==3);	
	assert(v[0]==4);
	assert(v[1] == 0);
	assert(v[2]==1);
	
	cout<< " All tests passed."<< endl;
}

