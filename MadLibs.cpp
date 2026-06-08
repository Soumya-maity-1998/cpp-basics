#include <iostream>

using namespace std; 

int main()
{
    string colour, PluralNoun, Celebrity; 

    cout << "Enter a colour: "; 
    getline(cin, colour); 
    cout << "Enter a plural noun: ";
    getline(cin, PluralNoun);
    cout << "Enter a celebrity: ";
    getline(cin, Celebrity);

    cout << "Roses are " << colour << endl;
    cout << PluralNoun << " are blue." << endl; 
    cout << "I love " << Celebrity << endl; 

    return 0;
}