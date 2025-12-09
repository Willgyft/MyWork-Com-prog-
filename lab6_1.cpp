#include<iostream>
using namespace std;

int main(){
    int x = 1;
    int i = 0;
    int j = 0;
    while ( x != 0 ){
    cout << "Enter an integer: ";
    cin >> x ;
    if(x == 0){
        break;
    }
    if (x % 2 == 0){
            i++;
    }
    if(x % 2 != 0){
            j++;
    }
    }
    cout << "#Even numbers = "  << i << endl;
    cout << "#Odd numbers = "<< j << endl;
    return 0;
}
