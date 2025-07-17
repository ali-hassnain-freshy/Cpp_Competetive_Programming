#include <iostream>

using namespace std;

int main() {
    int sum = 0;
    int n;
    cin>>n;
    cout<<"the value you entered is " << n << endl;
    for (int   i = 1; i <= n; i++){
        if (i%2 != 0)
        {
            sum += i;
        }
        
    }
    
    cout<<sum;

    return 0;


}