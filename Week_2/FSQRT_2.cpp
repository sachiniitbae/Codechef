#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main() {
    int T,i,j;
    int sqrt;
    cin >> T;
    int Test[T];
    for (i=0; i<T; i++)
    {
        cin >> Test[i] ;
    }

    for(i=0;i<T;i++)
    {
        sqrt = pow(Test[i],0.5);
        cout << sqrt << endl;
    }
}
