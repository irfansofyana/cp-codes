#include <bits/stdc++.h>
#define INF 2000000000

using namespace std;
long long b,p,m;

long long sqr(long long x) {
    return x*x;
}

long long big_mod(long long a,long long b,long long c){
    if (b==0) return 1;
    else if (b==1) return (a%c);
    else if (b%2==1)   return  (a*sqr((big_mod(a,(b-1)/2,c)%c)%c))%c;
    else if (b%2==0) return (sqr(big_mod(a,b/2,c)%c)%c);
}

int main(){
    cin.tie(0); ios_base::sync_with_stdio(0);
    while (cin >> b >> p >> m) {
        cout << big_mod(b,p,m) << endl;
    }
    return 0;
}
