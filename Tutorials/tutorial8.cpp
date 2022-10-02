// this program demonstrates stringstream
#include <iostream>
#include <sstream> // for stringstream
#include <string>
using namespace std;

int main(){
  // string s = "a quick brown fox jumped over the lazy dog";
  // stringstream str(s); // used to break down the string s into individual words
  // string word; // used to store the individual word

  // // while loop to count the words inside string s
  // int count = 0;
  // while (str >> word){
  //   count++;
  // }
  // cout << "Number of words: " << count;

  // use stringstream to convert string into int
  string mystr;
  cout << "Input number: ";
  cin >> mystr;
  int myint;
  stringstream(mystr) >> myint;
  cout << myint;
}