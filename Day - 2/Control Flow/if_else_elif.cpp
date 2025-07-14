#include <iostream>

using namespace std;

int main() {
    float age;
    cout << "<<To Make Your Vote Card (fake one) We Needed Your Age First In This Section" << endl << ">>";
    cin >> age;
    if (age>= 18)
    {
        cout << "Go Forward For Other Steps You Can Make Your Card . Age Sucessflly Verified . ";
    }
    else if (age<=18)
    {
        cout << "Sorry You Can't";
    }
    else{
        cout << "Enter A Valid Age!";
    }
    
    
    
    return 0;


}