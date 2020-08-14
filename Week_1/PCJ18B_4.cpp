#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int T,i,j,p;
    int sum=0;
    cin >> T;
    int Test[T];
    for (i=0; i<T; i++)
    {
        cin >> Test[i] ;
    }

    for(i=0;i<T;i++)
    {
        sum=0;
        if(Test[i]%2==0)
        {
            for(j=2;j<=Test[i]; j=j+2)
            {
                sum = sum + (j)*(j);
            }
        }
        else if(Test[i]%2 !=0)
        {
            for(j=1;j<=Test[i]; j=j+2)
            {
                sum = sum + (j)*(j);
            }
        }
        cout << sum << endl;
    }

}
