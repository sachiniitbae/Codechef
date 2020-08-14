#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int T,i,j;
    int sum=0;
    cin >> T;
    string Test[T];
    for (i=0; i<T; i++)
    {
        cin >> Test[i] ;
    }

    for(i=0;i<T;i++)
    {
        sum = 0;
        for(j=0;j<(Test[i].length());j++)
        {
            if(Test[i][j] == '4')
            {
                sum += 1;
            }
            else
                continue;
        }
        cout << sum << endl;
    }

}
