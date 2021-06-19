/*  Input a sequence of number that terminated by 5. Print the string "NO" if in sequence there is no number that multiple by 5.
    Otherwise, print "YES".
    
    Ex: Given the sequence -3 42 37 28 5, program should print "NO", because there is no number that multiple by 5.
        -3 40 37 2 -8 5, program should print "YES", because there is number that multiple by 5 ( 40 ).
        If the sequence only 5, print "NO" either.
        
*/

#include <iostream>
using namespace std;

int main(){
   int N, total = 0;
  
    cin >> N;
  
  while( N != 5 ){
    cin >> N;
    
    if ( N % 5 == 0 )
      total++;
    }
    
   if ( total > 1 )
     cout << "YES";
  else 
      cout << "NO";
}
