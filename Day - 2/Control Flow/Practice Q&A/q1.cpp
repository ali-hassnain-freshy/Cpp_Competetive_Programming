#include <iostream>

using namespace std;

int main() {
    char letter;
    cin >> letter;
    
    if (letter <= 'z' && letter >= 'a')
    {
        cout << "Lower";
    }
    else{
        cout<< "Upper";
    }
    
    
    return 0;


}