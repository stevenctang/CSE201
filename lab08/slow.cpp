#include <iostream>
#include <cassert>
#include <vector>

using namespace std;

void mysort(vector<int> &v){
	for ( int i=0; i<v.size() - 1; ++i){
		int k = 1;
		for (int j = 1 + i; j< v.size(); ++j){
			if(v[j] < v[k]) k = j;
		}
		swap (v[i],v[k]);
	}
}

int main( int argc,char*args[]) {
	vector<int> v(100000);
	
	for ( int i=0; i<100000; ++i){
		v.push_back(rand());
	}
	mysort(v);
		
	cout<<" Finished " << endl;
}
