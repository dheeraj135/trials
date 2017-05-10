/*
 This program finds the required number of factors of any number.
*/

#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main()
{
    long long n,k,i,num=0;
    cout<<"Enter the number to be factorized: ";cin>>n;
refresh:
    cout<<"Enter number of factors required:(-1 for all): ";cin>>k;
   if(k==-1) k=LONG_MAX;
   if(k==1) {cout<<"Required factor: "<<n;exit(0);}
   if(k<-1) {cout<<"illegal data!!!"<<endl;goto refresh;}
   cout<<"Required factors:"<<endl;
    for(i=2;i<=sqrt(n);i++)
    {
        if(!(n%i))
        {
            n/=i;
            cout<<i<<" ";
            i=1;
            num++;
            if(num==k-1)
            {
                cout<<n<<" ";
                num++;
                break;
            }
        }
    }
    if(n!=1&&num<k)
    {
        cout<<n<<" ";
        num++;
    }
    if(num!=k)
    {
        cout<<endl<<"The given number have only "<<num<<" factors. "<<endl;
    }
    return 0;
}
