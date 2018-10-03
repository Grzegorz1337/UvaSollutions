#include<iostream>

using namespace std;

int main()
{
    bool maxi = false;
    long long int casy=1;
    long long int n;
    while(cin>>n)
    {
        if(casy<1000) cout<<" ";
        if(casy<100) cout<<" ";
        if(casy<10) cout<<" ";
        cout<<casy<<".";
        maxi = false;
        if(n==0) cout<<" 0";
        else
        {
        if(n/100000000000000>=1)
        {
            cout<<" "<<n/100000000000000<<" kuti";
            maxi=true;
        }
        n=n%100000000000000;
        if(n/1000000000000>=1)
        {
            cout<<" "<<n/1000000000000<<" lakh";
            maxi=true;
        }
        n=n%1000000000000;
        if(n/10000000000>=1)
        {
            cout<<" "<<n/10000000000<<" hajar";
            maxi=true;
        }
        n=n%10000000000;
        if(n/1000000000>=1)
        {
            cout<<" "<<n/1000000000<<" shata";
            maxi=true;
        }
        n=n%1000000000;
        if(n/10000000>=1)
        {
            cout<<" "<<n/10000000<<" kuti";
        }
        else
        {
            if(maxi) cout<<" kuti";
        }
        n=n%10000000;
        if(n/100000>=1)
        {
            cout<<" "<<n/100000<<" lakh";
        }
        n=n%100000;
        if(n/1000>=1)
        {
            cout<<" "<<n/1000<<" hajar";
        }
        n=n%1000;
        if(n/100>=1)
        {
            cout<<" "<<n/100<<" shata";
        }
        n=n%100;
        if(n>=1)
        {
            cout<<" "<<n;
        }
        }
        cout<<endl;
        casy++;
    }
    cout<<endl;
    return 0;
}
