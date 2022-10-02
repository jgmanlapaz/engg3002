// Write a program that will compute the 
// parallel resistance for three resistors
// r1, r2, and r3. 
// Input: 
// Resistance 1: 1000
// Resistance 2: 4000
// Resistance 3: 350
// Output:
// Equivalent Resistance: 243.48 ohms

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

  //hint: equivalent resistance = ((r1)^-1 + (r2)^-1 + (r3)^-1)^-1
  //use appropriate cmath operations to do this
}