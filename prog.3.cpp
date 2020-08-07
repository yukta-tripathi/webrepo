#include<iostream.h>

using namespace std;
int main()
{
    int num, flag=0,i=2;
    cout<<"enter any number:";
    cin>>num;


        if(num%i==0)
        {
            flag=1;
            break;
        }


    if(flag==0)
    cout<<"\n"<<num<<"is  a prime";
    else
    cout<<"\n"<<num<<"is not a prime number";
    return 0;


}
