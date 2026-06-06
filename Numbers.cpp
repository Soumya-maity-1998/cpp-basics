#include <iostream> 
#include <cmath> 

using namespace std; 

int main(){

    int wnum = 5; 
    double dnum = 5.2; 
    
    wnum++; // increments wnum with 1. 
    cout << wnum << endl; 

    cout << (5.5 + 6); // returns 11.5 

    cout << pow(2, 5) << endl; 
    cout << sqrt(2) << endl;
    cout << round(4.6) << endl; 

    cout << fmax(2, 5) << endl; 
    cout << fmin(2, 5) << endl;

    return 0; 
}