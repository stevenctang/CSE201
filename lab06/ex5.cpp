#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

int countOccurrences(const vector<int> & v, int k) {
	int occurrences = 0;
	for ( int i=0; i< v.size(); ++i) {
		if( v[i] == k) ++occurrences;
	}
		return occurrences;
}
