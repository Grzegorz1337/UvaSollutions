#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> tablica;
    int x;
    int srodek;
    float s1, s2;
    while(cin>>x)
    {
        tablica.push_back(x);
        int pomocnicza;
        for(int i = tablica.size()-1;i>0;i--)
        {
            if(tablica[i]>tablica[i-1])
            {
                pomocnicza = tablica[i];
                tablica[i] = tablica[i-1];
                tablica[i-1] = pomocnicza;
            }
        }
        if(tablica.size()%2 == 1)
        {
            srodek = tablica.size()/2;
            cout<<tablica[srodek]<<endl;;
        }
        else
        {
            s1 = tablica.size()/2;
            s2 = tablica.size()/2 - 1;
            cout<<(tablica[s1] + tablica[s2])/2<<endl;
        }
    }
}
