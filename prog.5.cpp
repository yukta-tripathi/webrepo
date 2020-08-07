#include<iostream.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b&&a>c)
    {
        cout<<"largest number:"<<a;
    }
    else if(b>a&&b>c)
    {
        cout<<"largest number:"<<b;
    }
    else
    {
        cout<<"largest number:"<<c;
    }
    return 0;

}
