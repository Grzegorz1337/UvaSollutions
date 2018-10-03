#include<iostream>
#include<math.h>
using namespace std;


long long int pola(long long int n)
{
    long long int wynik = 0;
    for (long long int i = 1;i<=n;i++)
    {
        wynik += pow(i, 2);
    }
    return wynik;
}

int main()
{
    long long int n;
    cin>>n;
    while(n!=0)
    {
        cout<<pola(n)<<endl;;
        cin>>n;
    }

}