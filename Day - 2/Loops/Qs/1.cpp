#include <iostream>

using namespace std;

int main() {
    float sum = 0;
    float  n;
    cin >> n;
    cout << "the value you entered is " << n << endl;
    for (float  i = 1; i <= n; i++){
        sum+=i;
    }
    
    cout << sum;

    return 0;


}