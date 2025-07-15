#include <iostream>

using namespace std;

int main() {

    char ch; 
    cout << endl << ">>";
    cin  >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        cout << "It's Lower";
    }
    else {
        cout << "It's Upper";
    }
    return 0;


}