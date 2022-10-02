// this program demonstrates the cmath library

#include <iostream> // cin, cout, <<, >>
#include <cmath> //pow()
using namespace std;
int main(){
  double num1 = pow(2,-1); //2^(-1)
  cout << num1 <<endl;

  double num2 = sin(3.14/2);
  cout << num2 <<endl;

  double num3 = exp(3.14*2);
  cout << num3 <<endl;

  double num4 = sqrt(3);
  cout << num4 <<endl;
}