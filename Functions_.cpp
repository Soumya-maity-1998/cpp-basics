#include <iostream> 

using namespace std;

double cube(double num) {
    double result = num*num*num;
    return result; 
}

int main()
{
    double answer = cube(5.1);
    cout << answer << endl;
    cout << cube(3);
    

    return 0;
}