#include <iostream> 
#include <cmath>

using namespace std; 

int main()
{

    string name; // string input
    cout << " Enter your name: "; 
    getline(cin, name); // for a line input  

    cout << "Hello " << name;
    return 0; 
}