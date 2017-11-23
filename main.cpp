#include <iostream>

using namespace std;

int kalkulator(char znak, int a, int b)
{
    switch(znak)
    {
    case '+':
        cout << a+b << endl;
        break;
    case '-':
        cout << a-b << endl;
        break;
    case '*':
        cout << a*b << endl;
        break;
    case '/':
        cout << a/b << endl;
        break;
    case '%':
        cout << a%b << endl;
        break;
    }
    return 0;
}

int main()
{
    char znak;
    int a, b;
    while (cin >> znak >> a >> b)
    {
        kalkulator(znak, a, b);
    }

    return 0;
}
