#include <iostream>

using namespace std; 

void sayHi() // does not return any value
{
    cout << "Hello Soumyadip" << endl; 
}

void sayHiAgain(string name, int age)
{
    cout << "Hello " << name << " you are " << age << endl; 
}

int main()
{
    sayHi(); 

    sayHiAgain("Soumi", 22); 
    return 0;
}