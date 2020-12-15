#include<iostream>
using namespace std;

int main(){
    int num = 1;
    int evens = 0, odds = 0;
    while (num!= 0 ){
        cout << "Enter an integer: ";
        cin >> num;
        if (num%2 == 0 && num !=0){
            evens++;
        }
        if (num%2 == 1 && num !=0){
            odds++;
        }
    }
    cout << "#Even numbers = "<< evens;
    cout << "#Odd numbers = "<< odds;
    return 0;
}
