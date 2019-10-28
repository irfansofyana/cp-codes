#include <bits/stdc++.h>
using namespace std;
 
struct paket{
    long long maks,nilai;
};
 
const int MAXN = 100000;
long long n,i,ans;
long long d,x,y,lo,hi;
paket A[MAXN+5];
 
bool comp(paket a,paket b){
    return a.nilai < b.nilai;
}
 
int main() {
    cin >> n >> d;
    for (i = 0 ; i < n ; i++) {
        cin >> x >> y;
        A[i].nilai = x; A[i].maks = y;
    }
    sort(A,A+n,comp);
    for (i = 0 ; i < n && d>0 ; i++) {
        if ((d/A[i].nilai)>=A[i].maks) {
			ans += A[i].maks;
			d -= (A[i].nilai)*(A[i].maks);
		}
		else {
			 ans += (d/A[i].nilai);
			 d -= (d/A[i].nilai)*A[i].nilai;
		}
    }
    cout << ans << endl;
    return 0;
}