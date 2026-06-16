#include <iostream>
using namespace std; 


int power(int Base, int Power){
    int result = 1; 
    for (int i = 0; i < Power; i++){
         result = result*Base; 
    }
    return result;

}

int main()
{
    cout << power(2, 3) << endl; 


    return 0;
}