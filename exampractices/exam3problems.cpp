					Exam 3 problems

1. Write a predicate function that checks whether two vectors are identical( same element in the same order. Function reuturns true if they are identical, false if not. 





2 Implement a function that determines if the vector only contains the number 7. Function returns true if 7 is the only number that appears in vector, otherwise false.








3.Write text code that tests every statement in the isLucky function you implemented in   the previous problem. Use assertions.





4. Write a predicate function called isStrictlyIncreasing that checks wheher a vector of  integers contains values that are in strictly increasing order. Function returns true if  the elements are in strictly increasing order; otherwise false. Example: v=( -2,4,5,6,8)  will true and false for (3,4,6,6,9).
        bool isStricltyIncreasing(const vector<int> & v);



	
5.Write a predicate function that checks whether two vectors complement in the sense that their elements pairwise add to zero. For example, vectors ( -2,3,0,-7) and (2,-3,0,7) are  acomplements. If it has different number of elements, they are not comparable so return    false.
                bool areCompliments(const vector<int> & a, const vector<int> & b);




6. Implement a function countOccourences whose declaration appears above. The argument of the function is a 2-dimensional array of integers and the second argument is an inteter k.Function returns the number of times k occurs in a. Variables ROWS and COLS are constants
defined elsewhere in the program, don't need to define, just use them.
        int countOccurrences(int a[ROWS][COLS], int k);



7. Implement a function that searches for a given value in the vector of integers. If the value is found, function returns the index of the value, if not found return -1. Don't    assume values are in order, do not use binary search. For example, v=(-2,4,18,6) it will  return -1 for k=1. For k=18 it will return 2.






8. Implement a function that uses binary search for a given value in a vector of integers whose elements are strictly increasing order. If the values are found, function will      return the index of the value in the vector, otherwise it will return -1. You can assume  that the values passed into the function are in strictly increasing order. For Example    v=(-2,4,5,6) the function will return -1 for k=2. For k=4 it will return 1.

        int binarySearch(const vector<int> & v, int k);



