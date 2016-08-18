#include <iostream>
#include <cassert>
#include <vector>

using namespace std;


bool isUnlucky(vector<int>& v) {
	for (int i=0;i<v.size();++i) {
		if (v[i]==13)
	 return true;
	} 
	 return false;
}

int main(){

	vector<int> v;
	v.push_back(4);	
	v.push_back(-4);
	v.push_back(100);
	assert(isUnlucky(v) == false);
	
	v.push_back(13);
	assert(isUnlucky(v)==true);

	v.push_back(10);
	v.push_back(10);
	assert(isUnlucky(v)== true);

	cout<< "All test passed." << endl;
}

