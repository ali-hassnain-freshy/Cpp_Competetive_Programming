#include <iostream>

using namespace std;

int main() {

    int age;
    cout << "Enter Your Age:" << endl << ">>";
    cin >> age;

    cout << (age>=18 ? "Can Make International Id Card":"Can't Make International Id Card");

    return 0;


}