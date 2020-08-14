#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int T,i,j,k;
    int sum=0;
    int value;
    string sum_string;
    int stick[10] = {6,2,5,5,4,5,6,3,7,6};
    string match = "0123456789";
    cin >> T;
    int Test1[T]; int Test2[T];
    for (i=0; i<T; i++)
    {
        cin >> Test1[i] >> Test2[i];
    }

    for(i=0;i<T;i++)
    {
        value = 0;
        sum = Test1[i] + Test2[i];
        sum_string = to_string(sum);
        for (j=0;j < sum_string.length();j++)
        {
            for(k=0;k<match.length();k++)
            {
                if(sum_string[j] == match[k])
                {
                   value = value + stick[k];
                }
                else
                    continue;
            }
        }
        cout << value << endl;
    }
}
