/* Input an integer N, then verify if N is even or odd.
  if N is 2, print EVEN.
  if N is 3, print ODD.
*/

#include <iostream>
using namespace std;

int main(){

    int N;

    cin >> N;


    if(N%2==0){
        cout<<"EVEN";}
        else{
            cout<<"ODD";}
    return 0;
}
