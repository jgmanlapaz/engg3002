// Write a program that will compute the 
// roots of a quadratic equation given
// the form ax^2 + bx + c
// implement a control statement where
// the roots will be printed if the
// discriminant is positive
// and print "No real roots"
// if the discriminant is negative

#include <iostream>
#include <cmath>
using namespace std;

int main(){
  double a,
    b,
    c,
    root1,
    root2,
    discriminant;
  
  cout << "Enter quadratic equation ax^2 + bx + c (a, b, c): ";
  cin >> a >> b >> c;

  //what is the quadratic formula?
  discriminant = pow(b, 2) - 4*a*c;
  root1 = (-b + sqrt(discriminant))/2*a;
  root2 = (-b - sqrt(discriminant))/2*a;

  if (discriminant >= 0){
    cout << "The roots are " << root1 << " and " << root2 <<endl;
  }

  else{
    cout << "No real roots" <<endl;
  }
}