#include <iostream>
using namespace std; 

/*
    cout << "Age:" << &age << endl; 
    ...

*/

int main() {

    int age = 19; 
    int *pAge = &age; 
    double gpa = 2.7; 
    double *pGpa = &gpa; 
    string name = "Mike";
    string *pName = &name;  

    cout << &age << endl; // Prints out memory address.
    cout << "Age:" << &age << endl;
    cout << "gpa:" << &gpa << endl;
    cout << "name:" << &name << endl;

    cout << pAge << endl;
    cout << *pAge << endl;


    return 0; 
}