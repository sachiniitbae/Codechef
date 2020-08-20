#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    if(T<=50)
    {
        cout << 100 << endl;
    }
    else if(T>50 && T<=100)
    {
        cout << 50 << endl;
    }
    else
        cout << 0 << endl;
}
