/*  Input a positif integer number N, print on the standard output the string "YES"
    if N is a prime number. Otherwise, print "NO".
*/

#include <iostream>
using namespace std;

int main(){
    int N, flag = 0;
    cin >> N;
    
    for ( int i = 2; i <= N; i++ )
        if ( N % i == 0 )
            flag++;
        if ( flag == 1 )
            cout << "YES";
            else
                cout << "NO";
}
