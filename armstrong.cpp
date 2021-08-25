// Check  the  number is Armstrong or not

#include <iostream>
using namespace std;

int main()
{
    int n, sum=0, r,m;
    cout << "enter the number:";
    cin >> n;
    m=n;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
       sum=sum+r*r*r;
      
    }
    if(sum==m)
    cout<<"Armstrong Number";
    else cout<<"not armstrong number";
    return 0;
}