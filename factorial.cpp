// Program for finding factorial of given number;

#include<iostream>
using namespace std;
int main(){
    int n ,i=1,fact=1;
    ;
    cout<<"Enter the Number:";
    cin>>n;
    while(i<=n){
        //fact=fact*i;
        fact*=i;
        i=i+1;
    }
    cout<<"Factorial Of Number: "<<n<<" is  "<<fact;
    return 0;
}