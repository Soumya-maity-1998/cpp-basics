#include <iostream>

using namespace std; 

int main()
{
    string phrase = "Soumi Maity";
    cout << "Soumyadip Maity\n";
    cout << phrase << endl;
    cout << "Sanchita Chakraborty" << endl; 
    cout << phrase.length() << endl;
    cout << phrase[3] << endl;

    phrase[4] = 'I';
    cout << phrase << endl;

    cout << phrase.find("Maity", 0) << endl;

    cout << phrase.substr(8, 3);

    return 0;
}