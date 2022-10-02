// Write a program that will compute the 
// mean for a given dataset. 
// Use a loop that will
// input a dataset.
// Input: 5 20 13 24 25 16
// Output 19.6 4.59

#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int n;
  double data,
    mean,
    sd;
  
  cin >> n;
  //use any loop of choice
  int i = 1;
  double sum = 0;

  while (i <= n){
    cin >> data;
    sum = sum + data;
    i++;
    mean = sum / n;
  }
  cout << mean;
}