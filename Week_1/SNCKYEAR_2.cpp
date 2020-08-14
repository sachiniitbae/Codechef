#include <iostream>
using namespace std;

int main() {
    int T,i;
    cin >> T;
    int Test[T];
    for (i=0;i<T;i++)
    {
        cin >> Test[i] ;
    }

    for(i=0;i<T;i++)
    {
        if(Test[i] == 2010 || Test[i] == 2015 || Test[i] == 2016 || Test[i] == 2017 || Test[i] == 2019)
        {
            cout << "HOSTED" << endl;
        }
        else
        {
            cout << "NOT HOSTED" <<endl;
        }
    }

	return 0;
}
