#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int T,i,j;
    int sum=0;
    int value;
    cin >> T;
    int Test1[T]; int Test2[T];
    for (i=0; i<T; i++)
    {
        cin >> Test1[i] >> Test2[i];
    }

    for(i=0;i<T;i++)
    {
        value = 0;
        for(j=Test1[i];j<=Test2[i];j++)
        {
            if(j%10 == 2 || j%10 == 3 || j%10 == 9)
            {
                value += 1;
            }
        }
        cout << value << endl;
    }
}
