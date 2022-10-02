// this program demonstrates arrays
// arrays are lists that can be
// indexed by numbers

#include <iostream>
#include <array> // sizeof()
using namespace std;

int main(){
  // an array named numbers1
  // containing 7 integer elements
  int numbers1[7] = {34, 36, 32, 35, 38, 40, 39};

  // an array named numbers2
  // containing 6 double elements
  double numbers2[6] = {23.5, 23.4, 23.3, 22.9, 23.1, 23.22};

  // printing numbers1 elements
  // using for loops
  // using only sizeof() returns the size of
  // the array TIMES the size of each element
  // for(int i = 0; i < sizeof(numbers1)/sizeof(int); i++){
  //   cout << i << " " << numbers1[i] <<endl;
  // }

  // take the sum of all elements in numbers2
  double sumofnumbers2 = 0;
  for(int i = 0; i < sizeof(numbers2)/sizeof(double); i++){
    sumofnumbers2 = sumofnumbers2 + numbers2[i];
    // or more concise: sumofnumbers2 += numbers2[i];
  }

  cout << "Sum of numbers2 array: " << sumofnumbers2 <<endl;
  // unfortunately, C++ arrays cannot 
  // be changed during program execution
  // that's why we will cover vectors
}