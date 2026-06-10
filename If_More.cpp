#include <iostream>
using namespace std; 

int getMax(int number1, int number2){
    int result; 

    if (number1 > number2){
        result = number1; 
    } else {
        result = number2; 
    }

    return result;
}

int main()
{
    cout << getMax(2, 5);
    return 0;
}