#include<iostream>

using namespace std;

int main()
{
    int n, s1, s2;
    string k1, k2, k3, k4, nr;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>k1>>k2>>k3>>k4;
        nr="" + k1 + k2 + k3 + k4;
        s1=0;
        s2=0;
        for(int j=0;j<16;j++)
        {
            if(j%2==0)
            {
                if((int)(nr[j]-'0') * 2 > 9)
                {
                    s1+= (((int)(nr[j]-'0')) * 2)/10;
                    s1+= (((int)(nr[j]-'0')) * 2)%10;
                }
                else
                {
                    s1= s1+ ((int)(nr[j]-'0')) * 2;
                }

            }
            else
            {
                s2= s2+ (int)(nr[j]-'0');
            }
        }
        if((s1+s2)%10 == 0)
        {
            cout<<"Valid"<<endl;
        }
        else
        {
            cout<<"Invalid"<<endl;
        }
    }
}
