// this program demonstrates if, else, and else-if statements
#include <iostream>
using namespace std;

int main(){
  int x = 2;
  int y = 3;

  if (x*y > 0){
    cout << "Positive!" <<endl;
  }

  else if (x*y == 0){
    cout << "Zero" <<endl;
  }

  else{
    cout << "Negative." <<endl;
  }
}