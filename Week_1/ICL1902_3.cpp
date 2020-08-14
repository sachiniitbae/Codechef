// ICL1902  C++


#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int T,i,j,p;
    int sum;
    int counter=0;
    cin >> T;
    int Test[T];
    for (i=0; i<T; i++)
    {
        cin >> Test[i] ;
    }

    for(i = 0; i < T; i++)
    {
        counter=0;
        sum = Test[i];
        for(j=0; j<1000; j++)
        {
            counter = counter + 1;
            p = sqrt(sum) ;
            sum = sum - p*p;
            if(sum == 0)
                break;

        }
        cout << counter << endl;
    }
	return 0;
}
