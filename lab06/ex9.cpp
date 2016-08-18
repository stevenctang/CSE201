#include <iostream>
#include <cassert>
#include <vector>

using namespace std;

bool isStrictlyIncreasing(const vector<int> & v);
{
	for(int i=0; i < v.size() -1; ++i){
	if (v[i] >= v[i+1]) return false;
	}
	return true;
}

int main() {





}

