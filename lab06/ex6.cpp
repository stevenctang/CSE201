#include <iostream>
#include <cassert>

using namespace std;

bool isAllZeros(int a[50][100]) {
	for (int i=0; i<50; ++i){
	   for (int j=0;j<100;++j) {
	      if (a[i][j] !=0) return false;
		}
	   }
	return true;
}

int main() {




}
