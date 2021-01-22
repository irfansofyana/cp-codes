#include <bits/stdc++.h>
using namespace std;
int n,s,t,i,posisi;
int A[100010];
int ans;
bool belum=false;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>n>>s>>t;
	for (i=1;i<=n;i++) cin>>A[i];
	if (s==t) cout<<0<<endl;
	else { 
		ans=0; posisi=s;
		while (!belum){
			ans++;
			posisi=A[posisi];
			if (posisi==t) {
				belum=true;	
			}
			else {
				if (ans>n) {
					ans=-1;
					belum=true;
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
