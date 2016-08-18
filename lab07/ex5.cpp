#include <iostream>
#include <cassert>

using namespace std;

int main(int argc,char*args[]) {

	cout<<"What is the number?" << endl;
	int n;
	while(true){
		cin>>n;
		if (cin.fail()){
			cout<<"Bad input, try again."<<endl;
			continue;
		}
		if (n<1023){
			cout<<"Too small"<< endl;
		}else if (n>1023){
			cout<<"Too big"<< endl;
		}else{
		assert(n==1023);
		cout<<"You got it"<< endl;
		return 0;
		}	

	}
}
