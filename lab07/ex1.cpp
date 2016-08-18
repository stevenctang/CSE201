#include <iostream>
#include <cassert>
#include <vector>

using namespace std;

bool binarySearch(const vector <int> & v, int k){
	int s=0;
	int e= v.size()-1;
	while(s<=e) {
		int m=(s+e)/2;
		if (k>v[m]){
		   s=m+1;
		}else if (k<v[m]){
		   e=m-1;
		} else{
		   assert(k==v[m]);
			return true;
		}
	}
	return false;
}

int main(int argc,char*args[]) {
	vector<int> v;
	v.push_back(3);
	v.push_back(5);
	v.push_back(7);
	v.push_back(9);
	v.push_back(12);
	assert(v.size()==5);

	assert(binarySearch(v,1) == false);
	assert(binarySearch(v,3) == true);
	assert(binarySearch(v,4) == false);
	assert(binarySearch(v,5) == true);
	assert(binarySearch(v,6) == false);
	assert(binarySearch(v,7) == true);
	assert(binarySearch(v,8) == false);
	assert(binarySearch(v,9) == true);
	assert(binarySearch(v,10) == false);
	assert(binarySearch(v,12) == true);
	assert(binarySearch(v,13) == false);

	v.pop_back();
	assert(v.size()==4);
	assert(binarySearch(v,1) == false);
	assert(binarySearch(v,3) == true);
	assert(binarySearch(v,4) == false);
	assert(binarySearch(v,5) == true);
	assert(binarySearch(v,6) == false);
	assert(binarySearch(v,7) == true);
	assert(binarySearch(v,8) == false);
	assert(binarySearch(v,9) == true);
	assert(binarySearch(v,10) == false);
	assert(binarySearch(v,12) == false);
	assert(binarySearch(v,13) == false);

	cout<<"All test passed"<< endl;

}
