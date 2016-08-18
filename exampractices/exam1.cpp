			Exam 1 Problems
1. What does the code below output?
		int i=1;
		while (i < 32){    // Checks if i < 32 first //
			cout << i-1 << " "; // takes i and - 1 //
			i = 2*i; // takes initial i and * 2 to make it a new i//
		}

Answer : First get 0,1, 3, 7, 15

2. What does the code below output?
		int n = 1;
		int k = n++ * 2; // incriment after you find k
		cout << ++n * 7 + k; // incriment before you start

Answer : 23

3. Write cold that prints cold when t <= 40, cool when t> 40 and <=60, warm when t> 60 <=80, hot t>80.

Answer:
	int t;
	cin>> t;
	if ( t<=40 ){
		cout << " Cold " << endl;
	}
	else if( t>40 && t<=60 ){
		cout << " Cool" << endl;
	}
	else if( t>60 && t<=80 ){
		cout << " Warm "<< endl;
	}
	else if( t > 80 ){
		cout << " Hot " << endl;
	}
4. What does the code below output?
	int k = 23;
	int n = 10;
	for ( int i = 0; i < k; ++i) { // loop runs 23 times //
		n = n + 1; // n here becomes 33 because loop runs 23 1s //
	}
	cout << n + 2; // 33 + 2 

Answer : 35

5. What does the code below output?
	i = 5;
	while (i <= 405 ){ 
		i = i+200; // First step add 5 to 200, the check loop is 
				205 <= 405? Then add 205 to 200 and repeat//
	}
	cout << i;

Answer : 605


6. What does the code below output?
	int i = 1;
	int j = 2;
	double x = 1.0;
	cout << i/j << endl; // 1/2 = 0 because it's integer
	cout << x/j << endl; // 1.0/2 = .5 because it's doubled

Answer: 0, .5

7. What does the code below output?
	int i = 4;
	for ( int k = 0; k < 300; ++k){ // loop runs 300 times
		i = i + 3; // 300 * 3 = 900
	}
	cout << i;

Answer :  904

8. Write code that prints 300 random integers that are less than 2000

Answer :
	for(int i = 0; i < 300; ++i) { // runs 300 times
		cout << rand() % 2000;
	}

9 Write code that computes sum of integers 100 through n, n is inclusive.

Answer:
	int sum = 0;
	for(int i = 100; i <= n; ++i){
		sum = sum + i;
	}

