#include <iostream>
using namespace std;
int main()
{
    char b = 0;
    char a = 0;
    cout << "      0     1     2     3     4     5     6     7     8     9     A     B     C     D     E     F" << endl;
    for(int i = 1; i<16; i++){
        b = i + 55;
        if (i<10)
            cout << i << "     ";
        else
            cout << b << "     ";
        for(int j = 0; j<16; j++){
            a = i*16 + j;
            cout << a;
            if(a/100 == 0){
                cout << "     ";
            }
            else{
                cout << "     ";
            }
        }
        cout << endl;
    }
}