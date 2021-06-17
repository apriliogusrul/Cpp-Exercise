/* Input an integer N that represents the grade on a exam. It informs that
  the students has passed the exam or not.
  
  if the score is greater or equal to 18, the student passed.
  if the score is lower than 18, the student failed.
  if the score is greater than 30, or lower than 0, the score is not valid.
*/

#include <iostream>
using namespace std;

int main(){
  int N;
  
  cin >> N;
  
  if( N > 30 || N < 0 ) {
    cout << "Score is not valid.";
  }
  
  else if( N >= 18 ) {
    cout << "Passed";
  }
  else {
    cout << "Failed";
  }
  
  return 0;
  }
