#include<iostream>
#include<string.h>
using namespace std;


int suma_cyfr(string n)
{
    int suma = 0;
    int l = n.length();
    for(int i = 0;i<l;i++)
    {
        suma = suma + ((int)n[i] - 48);
    }
    if(suma>=10)
    {
        suma = suma%10 + (suma/10);
        if(suma>=10)
        {
            suma = suma%10 + (suma/10);
        }
    }
    return suma;
}

int main()
{
    string n = "0";
    cin>>n;
    while(n != "0")
    {
        cout<<suma_cyfr(n)<<endl;
        cin>>n;
    }
    return 0;
}
