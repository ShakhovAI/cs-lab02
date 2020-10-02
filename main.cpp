#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Enter A and B: ";
    cin >> a >> b;
    cout << "A + B = " << a + b << '\n';
    cout << "A - B = " << a - b << '\n';
    cout << "A * B = " << a * b << '\n';
    cout << "A / B = " << a / b << '\n';
    if (a>b)
        cout << "Maximum "<< a;
    if (b>a)
        cout << "Maximum "<< b;
    return 0;
}
