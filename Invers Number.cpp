/*  input an positif integer N, print the value N-Ninv, where Ninv is a integer
    that obtained from invers digits of N.
*/

#include <iostream>
using namespace std;

int main(){
    
    int N, result, x, temp, Ninv = 0;
    
    cin >> N;
    x = N;
    while ( N != 0 ) {
        temp = N % 10;
        Ninv = Ninv * 10 + temp;
        N = N / 10;
    }
    
    result = x - Ninv;
    cout << x << " - " << Ninv << " = " << result;
  
  return 0;
}
