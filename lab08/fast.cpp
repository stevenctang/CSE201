#include <iostream>
#include <cassert>
#include <algorithm>
#include <vector>


using namespace std;



int main(int argc,char*args[]) {

	vector <int> v(100000);

	for (int i=0; i< 100000; ++i) {
		v.push_back(rand());
	}
	sort(v.begin(), v.end());

	cout<< "Finished" << endl;

}
