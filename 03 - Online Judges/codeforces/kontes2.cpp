#include <bits/stdc++.h>
using namespace std;

long long n,l,r,x,j;
long long ans,i,sum,banding,mini;
long long A[20];
int nyala;
vector<long long> vi;
//vector<long long> jaw;
int main(){
	cin.tie(0);
	cin >> n >> l >> r >> x;
	for (i=0;i<n;i++)
		cin >> A[i];
	for (i=1;i<(1<<n);i++) {
		nyala = 0;
		sum  = 0;
		for (j=0;j<n;j++)  {
			if ((i&(1<<j))!=0) 
				nyala++;		
		}
		if (nyala>=2) {
			sum = 0;
			vi.clear();
			for (j=0;j<n;j++) {
				if ((i&(1<<j))!=0) {
					vi.push_back(A[j]);
 					sum += A[j];
				}
			}
			sort(vi.begin(),vi.end());
			//if (i==6) for (i=0;i<vi.size();i++) cout<<vi[i]<<endl;
			if (sum>=l && sum<=r && (vi[vi.size()-1]-vi[0]>=x)) {
				ans++;
			//	jaw.push_back(i);
			}
		}
	}
//	for (i=0;i<jaw.size();i++) cout<<jaw[i]<<" ";
//	cout<<endl;
	cout << ans << endl;	
}
