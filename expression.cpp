#include <iostream>
#include <string>
using namespace std;
class expression
{
public:         // TASK 2
    double  a=0;
    double b=0;
    char operation='+';
};
expression convert(string s)
{
    expression y;
    int j=0;
    int error=0;
    const int siz=s.size();
    int r=siz-1;
    char S[r];
    for (int i = 0; i < siz; i++) {
        if (s[i] == ':' or s[i] == '+' or s[i] == '-' or s[i] == '*')
        {
            y.operation = s[i];
            S[j] = ' ';
            j++;
            continue;
        };
        if (isdigit(s[i]) or s[i]==' ')
        {
            S[j] = s[i];
            j++;
            continue;
        }
        cout << "ERROR: you entered the wrong character!" << endl;
        error++;
        break;
    }
    if (error==0)
    {

        char *ptr;
        y.a = strtod(S, &ptr);
        y.b = strtod(p, &ptr);
    }
    return y;
}
double solve()   // 3d task
{
    string s;
    cout << "enter your expression:" << endl;
    getline(cin,s);
    expression x= convert(s);
    switch (x.operation){
        case '-':
            cout  << x.a <<  " " << x.operation << " " << x.b<< " = " << x.a-x.b<<  endl;
            break;
        case '+':
            cout  << x.a <<  " " << x.operation << " " << x.b<< " = " << x.a + x.b<<  endl;
            break;
        case '*':
            cout  << x.a <<  " " << x.operation << " " << x.b<< " = " << x.a*x.b<<  endl;
            break;
        case ':':
            if (x.b==0)
            {
                cout << "error: it is impossible to divide by zero!" << endl;
            }
            else
            {
                cout << x.a << " " << x.operation << " " << x.b << " = " << x.a / x.b << endl;
            }
            break;

    }


}

int main()
{
    solve();
}