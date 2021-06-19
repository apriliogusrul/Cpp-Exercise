/*  Input an integer N, print the string "YES" if all the digits of N are not 0.
    Otherwise, print "YES".
    
    Example: if N equal to 4782967, print "YES".
             if N equal to 40999, print "NO".
             if N equal to 0, print "NO".
*/

#include <iostream>
using namespace std;

int main(){
    int N, temp, flag = 0;
    
    cin >> N;
    if ( N == 0 ){
        cout << "NO";
        return 0;
    }
    
    while( N != 0 ){
        temp = N % 10;
        N = N /10;
        if ( temp == 0 ) {
            flag++;
        }
    }
    
    if ( flag == 0 )
        cout << "YES";
    else 
        cout << "NO";
        
    return 0;
}              
