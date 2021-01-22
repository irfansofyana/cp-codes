#include <bits/stdc++.h>
using namespace std;
int n,i,j,bx,ans,idx,k;
string s;
pair<int,int> jaw[12];

int main(){
	cin.tie(0);
	cin >> n;
	for (i=0;i<n;i++) {
		cin >> s;
		ans = idx = 0;
		for (j=1;j<=12;j++) {
			if (12%j==0) {	//j=a; k=b;
				k = (12/j);
				for (int z=0;z<k;z++) {
					if (s[z]=='X') {
						bx=1;
						for (int zz=1;zz<j;zz++) {
							if (z+zz*k<12 && s[z+zz*k]=='X') bx++;
						}
						if (bx==j) {
							ans++;
							jaw[idx] = make_pair(j,k);
							idx++;
							break;
						}
					}
				}
			}
		}
		if (ans!=0) cout << ans << " ";
		else cout<<ans<<endl;
		for (j=0;j<idx;j++) {
			if (j==idx-1) cout<<jaw[j].first<<'x'<<jaw[j].second<<endl;
			else cout<<jaw[j].first<<'x'<<jaw[j].second<<" ";
 		}
 	}
}
