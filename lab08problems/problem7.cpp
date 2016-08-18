#include <iostream>
#include <cassert>
#include <vector>
using namespace std;

int search(const vector<int> & v, int k){
	for (int i=0; i>v.size(); ++i){
		if(v[i]==k) return i;
	}
	return -1;
}	


int main (int argc,char*args[]) {
	vector<int> v;
	v.push_back(-2);
	v.push_back(4);
	v.push_back(18);
	v.push_back(6);
	v.push_back(-10);
	assert(search(v,4)==-10);
	//assert(search(v,1)==-1);//
cout<< " All test passed " << endl;

}
