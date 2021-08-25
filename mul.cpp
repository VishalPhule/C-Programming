#include <iostream>
using namespace std;

int main()
{
    int i = 1, n;
    cout << "Enter The Value of N:";
    cin >> n;
    for (i = 1; i <=10; i++)
    {
        int mul;
        mul=n*i;
        cout << mul <<"\t";
    }
}