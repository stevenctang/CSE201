#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

vector<int> flatten (int a[100][200]) {
	vector<int> v;
	for (int i=0; i<200; i++){
		for(int j=0;j<200;++j){
		v.push_back(a[i][j]);
	}
	
   }
	return v;
}

int main() {


}
