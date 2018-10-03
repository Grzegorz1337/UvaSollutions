#include<iostream>

using namespace std;

int main()
{
    int k;
    cin>>k;
    for(int i = 0;i<k;i++)
    {
        long long int x, y , z;
        cin>>x>>y>>z;
        double b = y*z - x - y;
        b = b*12;
        b = b / (-z +1);
        b-=0.5;
        cout<<(int)-b<<endl;

    }
    return 0;
}
