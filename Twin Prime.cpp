/*  Input two natural numbers, verify that the two numbers are twin prime or not.
    Two natural number M and N are twin prime if both are prime, and | M - N | = 2.
 
    Example: 5 and 7, 11 and 13 are twin number.
    
    if M and N are prime, and | M - N | != 2, output will be "Not Twin".
    Otherwise, if M and N are prime, and | M - N | = 2, output will be "Twin".
    
*/

#include <iostream>
using namespace std;


bool prime(int n){
 
 for(int i = 2; i < n; i++ ){
     if( n % i == 0){
        return false;
     }
    return true;
}   
}

bool twin(int a, int b){
    if ( a - b == 2 || b - a == 2 )
        return true;
    return false;
}
int main(){
    int N, M;
    cin >> N >> M;
    if( prime(N) && prime(M) )
        if(twin(N,M)){
            cout << "Twin Prime";
        }
        else {
            cout << "Prime";
        }
    else 
        cout << "Both are not prime";
        
    
}
    
