#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int a, b, c, d;
    string s;
    cin >> a >> b >> c;
    cin >> s;
    d=0;
    while(a>=0 && a%c!=0){
        a=a-b;
        d++;
    }
    if(a<0){
        cout << -1;
    } else {
        cout << d+a/c << endl;
        for(int i=0; i<d; i++){
            for(int j=0; j<b; j++){
                cout << s[d*i+j];
            }
            cout << endl;
        }
        for(int i=0; i<a/c; i++){
            for(int j=0; j<c; j++){
                cout << s[d*b+i*c+j];
            }
            cout << endl;
        }
    }
}