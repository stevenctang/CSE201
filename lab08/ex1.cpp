#include <iostream>
#include <cassert>
#include <vector>

using namespace std;

void mysort(vector<int> & v) {
	for (int i=0 ; i<v.size() -1 ; ++i) {
		int k = i;
		for (int j= i+1; j< v.size(); ++j){
			if (v[j] < v[k]) k=j;
		}
		swap(v[i],v[k]);
	}
}

int main( int argc,char*args[]) {

	vector<int> v;
	v.push_back(3);
	v.push_back(6);
	v.push_back(15);
	v.push_back(8);
	v.push_back(9);
	v.push_back(2);

	mysort(v);

	assert(v[0] == 2);
	assert(v[1] == 3);
	assert(v[2] == 6);
	assert(v[3] == 8);
	assert(v[4] == 9);
	assert(v[5] == 15);

	cout<< " Done " << endl;

}
