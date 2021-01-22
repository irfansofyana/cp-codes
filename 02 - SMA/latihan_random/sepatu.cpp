#include <bits/stdc++.h>
using namespace std;
int n,m,i,j,temp;
int bebek[1010];
int sepatu[10100];
int ans;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>n>>m;
	for (i=0;i<n;i++) cin>>bebek[i];
	sort(bebek,bebek+n);
	for (j=0;j<m;j++){
		cin>>temp;
		sepatu[temp]++;
	}
	for (i=0;i<n;i++){
		if (sepatu[bebek[i]]==0){
			if (sepatu[bebek[i]+1]!=0) {
				ans++;
				sepatu[bebek[i]+1]--;
			}
		}
		else {
			ans++;
			sepatu[bebek[i]]--;
		}
	}
	cout<<ans<<endl;
}
