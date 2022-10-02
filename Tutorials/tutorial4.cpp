// this program demonstrates if, else, and else-if statements
// along with boolean operators
#include <iostream>
using namespace std;

int main(){
  bool x = true;
  bool y = false;

  if (x&&y == true){
    cout << "Both inputs are on!" <<endl; //and
  }

  else if (x||y == true){
    cout << "At least one of the inputs is on." <<endl; //or
  }

  else{
    cout << "At least one of the inputs is not on." <<endl;
  }
}