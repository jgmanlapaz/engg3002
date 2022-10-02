// Using vector functions, write a
// program that will compute the
// mean and standard deviation
// given a vector input.
// Use int as your data types.
// Input: 
// Input vector length: 4
// Input vector elements: 45 44 46 43
// Output:
// Vector Elements:
// 45
// 44
// 46
// 43
// Mean: 44.5
// Standard Deviation: 1.11803


#include <iostream>
#include <vector> //size(), push_back()
#include <cmath>
using namespace std;

int main(){
  int n, num;
  vector<int> numset = {};

  cout << "Input vector length: ";
  cin >> n;
  cout << "Input vector elements: ";
  for (int i = 0; i < n; i++){
    cin >> num;
    numset.push_back(num);
  }

  // write code to compute for mean
  // write code to compute for standard deviation
  // hint: sd = sqrt(sum((num[i] - mean)^2)/n)
}