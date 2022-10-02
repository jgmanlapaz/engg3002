// this program demonstrates vectors
// vectors are like arrays
// but vectors can be changed
// i.e. add more elements,
// delete elements

#include <iostream>
#include <vector> //size(), push_back()
using namespace std;

int main(){
  // a vector named numbers1
  // containing 7 elements
  vector<int> numbers1 = {34, 36, 32, 35, 38, 40, 39};

  //a vector named numbers2
  //containing 6 double elements
  vector<double> numbers2 = {23.5, 23.4, 23.3, 22.9, 23.1, 23.22};

  // print elements in numbers1
  // for (int i = 0; i < numbers1.size(); i++){
  //   cout << i <<" " <<numbers1[i]<<endl;
  // }

  // print sum of elements in numbers2
  // double sumofnumbers2 = 0;
  // for (int i = 0; i < numbers2.size(); i++){
  //   sumofnumbers2 += numbers2[i];
  // }
  // cout << sumofnumbers2 <<endl;

  // input int elements in an n-sized
  // vector called numbers3

  int n, num;
  vector<int> numbers3 = {};

  cout << "Input vector length: ";
  cin >> n;
  for (int i = 0; i < n; i++){
    cin >> num;
    numbers3.push_back(num);
  }

  cout << "Elements in numbers 3" <<endl;
  for (int i = 0; i < numbers3.size(); i++){
    cout << i <<" " <<numbers3[i]<<endl;
  }
}