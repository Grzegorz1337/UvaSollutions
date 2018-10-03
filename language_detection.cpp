#include<iostream>

using namespace std;

int main()
{
    string n;
    int c = 1;
    cin>>n;
    while(n[0]!= '#')
    {
        if(n=="HELLO")cout<<"Case "<<c<<": ENGLISH";
        if(n=="HOLA")cout<<"Case "<<c<<": SPANISH";
        if(n=="HALLO")cout<<"Case "<<c<<": GERMAN";
        if(n=="BONJOUR")cout<<"Case "<<c<<": FRENCH";
        if(n=="CIAO")cout<<"Case "<<c<<": ITALIAN";
        if(n=="ZDRAVSTVUJTE")cout<<"Case "<<c<<": RUSSIAN";
        if(n!="ZDRAVSTVUJTE" && n!="CIAO" && n!="BONJOUR" && n!="HALLO" && n!="HOLA" && n!="HELLO")cout<<"Case "<<c<<": UNKNOWN";
        cout<<endl;
        c++;
        cin>>n;
    }
    return 0;
}
