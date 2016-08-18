#include <iostream>
#include <cassert>
#include "EggCarton.h"

using namespace std;

int main(int argc,char*args[]) {

	EggCarton egg_cart1(4,2);
	assert( egg_cart1.getTotalEggs()==6);
	assert( egg_cart1.addWhiteEggs(3)==true);
	assert( egg_cart1.getTotalEggs()==9);
	assert(!egg_cart1.addBrownEggs(4));
	assert( egg_cart1.getTotalEggs()==9);

	EggCarton egg_cart2(1,2);
	assert( egg_cart2.getTotalEggs()==3);
	assert( egg_cart2.addWhiteEggs(5)==true);
	assert( egg_cart2.getTotalEggs()==8);
	assert(!egg_cart2.addBrownEggs(6));
	assert( egg_cart2.getTotalEggs()==8);
	cout<<"All Tests Passed"<<endl;
}
