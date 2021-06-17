/*  Input a positif integer N, that represents a year. Print the string "Leap Year" if the year is a Leap year. Otherwise, Print "NO".
    
    What is a Leap year?
    A year is called Leap year, if the year divisible by 4, with the exception of secular years (those divisible
    times 100) which are not divisible by 400.
    
*/

#include <iostream>
using namespace std;

int main(){
  int N;
  cin >> N;
  
  if ( N % 400 != 0 && N % 100 == 0 ){
     cout << "NO";
  }
  else if ( A%100 == 0 && A%400 == 0 ){
     cout << "Leap Year";
  }
  else if ( A%4 == 0 ){
     cout << "Leap Year";
  }
  else {
     cout << "NO";
  }
  
  return 0;
}
