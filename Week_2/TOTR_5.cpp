#include <iostream>
#include<cstring>
#include <algorithm>
using namespace std;

int main() {
    int T,i,j,k;
    string code;
    string english = "abcdefghijklmnopqrstuvwxyz.!?,ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string translate;
    cin >> T  >> code;
    string Code;
    Code = code;
    transform(Code.begin(), Code.end(), Code.begin(), ::toupper);
    code = code + ".!?," + Code  ;
    string Test[T];
    for (i=0; i<T; i++)
    {
        cin >> Test[i];
    }

    for(i=0;i<T;i++)
    {
        translate = "";
        for(j=0;j<(Test[i].length());j++)
        {
            if(Test[i][j] == '_')
            {
              translate = translate + " ";
            }
            for(k=0;k<code.length();k++)
            {
                if(Test[i][j] == english[k] )
                {
                    translate = translate + code[k];
                }
            }
        }
        cout << translate << endl;
    }
}
