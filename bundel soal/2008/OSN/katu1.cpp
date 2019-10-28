#include <bits/stdc++.h>
using namespace std;
int main(){
    int maks,n,i,j;
    int x,ayam=0,bebek=0;
    char c;
     
    for (i=1;i<=6;i++){
        cin>>x>>c;
        if (c=='A')
            ayam++;
        else if (c=='B')
            bebek++;
    }
    if (bebek>=3)
        maks=100;
    else if (bebek==2)
        maks=70;
    else if (bebek==2 && ayam>=1)
        maks=50;
    else if (ayam>=1 && bebek>=1)
        maks=40;
    else if (ayam==2 && bebek>=1)
        maks=25;
    else if (ayam>=3)
        maks=20;
    else if (bebek>=1)
        maks=5;
    else
        maks=2;
    cout<<maks<<endl;
}
