#include<iostream.h>
using namespace std;
int main()
{
    int n,r,temp,sum=0;
    cout<<"enter a number:";
    cin>>n;
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(temp==sum)
        cout<<"number is palindrome";
    else
        cout<<"number is not a palindrome";\
        return 0;
}
