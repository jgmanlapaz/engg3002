// Write a program that will compute the 
// parallel resistance for three resistors
// r1, r2, and r3. Assume double for all 
// variables
// SOLUTION

#include <iostream> // cin, cout, <<, >>
#include <cmath>
using namespace std;

int main(){
  double r1, //resistance 1
    r2, //resistance 2
    r3, //resistance 3
    requivalent; //equivalent resistance
  
  //hint: copy for r2, r3
  cout << "Resistance 1: " <<endl;
  cin >> r1;
  cout << "Resistance 2: " <<endl;
  cin >> r2;
  cout << "Resistance 3: " <<endl;
  cin >> r3;

  //hint: equivalent resistance = ((r1)^-1 + (r2)^-1 + (r3)^-1)^-1
  //use appropriate cmath operations to do this
  requivalent = pow((pow(r1, -1) + pow(r2, -1) + pow(r3, -1)), -1);
  cout << "Equivalent Resistance: " << requivalent << " ohms";
}