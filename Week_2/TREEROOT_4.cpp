#include <iostream>
using namespace std;

int main() {
    int T,i,j,id,root;
    int sum=0;
    cin >> T;
    int Test[T];
    for (i=0; i<T; i++)
    {
        root = 0;
        cin >> Test[i] ;
        for(j=0;j<Test[i];j++)
        {
            cin >> id >> sum;
            root = root + id - sum;
        }
        cout << root << endl;
    }
}
