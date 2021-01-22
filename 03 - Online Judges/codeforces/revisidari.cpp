#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    int m,k;
    int n,i,j;
    string s;
    cin>>n;
    getline(cin,s);
    for (i=1;i<=n;i++){
        getline(cin,s);
        m=s.find("miao.");
        k=s.find("lala.");
        if ((m>=0 && m<s.length()) && (k>=0 && k<s.length()))
            cout<<"OMG>.< I don't know!"<<endl;
        else if (m>=0 && m<s.length())
            cout<<"Rainbow's"<<endl;
        else if (k>=0 && k<s.length())
            cout<<"Freda's"<<endl;
        else
            cout<<"OMG>.< I don't know!"<<endl;
    }
}
