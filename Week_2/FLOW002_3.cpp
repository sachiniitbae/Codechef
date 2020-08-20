#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main() {
    int T,i;
    int remd;
    cin >> T;
    int Test1[T]; int Test2[T];
    for (i=0; i<T; i++)
    {
        cin >> Test1[i] >> Test2[i] ;
    }

    for(i=0;i<T;i++)
    {
        remd = Test1[i] % Test2[i] ;
        cout << remd << endl;
    }
}
