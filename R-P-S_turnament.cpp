#include <iostream>
#include <stdio.h>
 
using namespace std;
 
int main(){
    int n,k,p1,p2;
    string m1,m2;
    while(1){
        cin >> n;
        if(n==0) break;
        cin >> k;
 
        double w[n+1];
        double l[n+1];
 
        for(int i=1; i<=n; i++){
            w[i]=0;
            l[i]=0;
        }
 
        int t=k*n*(n-1)/2;
        while(t>0){
            cin >> p1 >> m1 >> p2 >> m2;
            if(m1=="rock"){
                if(m2=="paper"){
                    l[p1]++;
                    w[p2]++;
                }
                if(m2=="scissors"){
                    w[p1]++;
                    l[p2]++;
                }
            } else if(m1=="paper"){
                if(m2=="rock"){
                    l[p2]++;
                    w[p1]++;
                }
                if(m2=="scissors"){
                    w[p2]++;
                    l[p1]++;
                }
            } else if(m1=="scissors"){
                if(m2=="paper"){
                    l[p2]++;
                    w[p1]++;
                }
                if(m2=="rock"){
                    w[p2]++;
                    l[p1]++;
                }
            }
 
            t--;
        }
 
        for(int i=1; i<=n; i++){
            if(w[i]+l[i]==0) cout << "-" << endl;
            else {
                double r=w[i]/(w[i]+l[i]);
                printf("%.3lf\n",r);
            }
        }
        cout << endl;
 
 
    }
 
    return 0;
}