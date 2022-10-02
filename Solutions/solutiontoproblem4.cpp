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
// 0 45
// 1 44
// 2 46
// 3 43
// Mean: 44.5
// Standard Deviation: 1.11803
// SOLUTION

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

  double mean, sd;
  double sum = 0;
  double sumerrorsquared = 0;
  cout << "Vector Elements" <<endl;
  for (int i = 0; i < numset.size(); i++){
    sum += numset[i];
    mean = sum/numset.size();
    cout << numset[i] <<endl;
  }

  for (int i = 0; i < numset.size(); i++){
    sumerrorsquared += pow(numset[i] - mean,2);
    sd = sqrt(sumerrorsquared / numset.size());
  }

  cout << "Mean: " << mean <<endl;
  cout << "Standard Deviation: " << sd <<endl;
}