#include <bits/stdc++.h>
using namespace std;
int t,n,m;
string nama[10000];
int minimal[10000];
int maksimal[10000];
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>t;
	while (t--){
		cin>>n;
		for (int i=0;i<n;i++){
			cin>>nama[i]>>minimal[i]>>maksimal[i];
		}
		cin>>m;
		for (int i=0;i<m;i++){
			int k;
			cin>>k; int banyak=0,ans;
			for (int j=0;j<n;j++){
				if (minimal[j]<=k && k<=maksimal[j]) {
					banyak++; ans=j;
				}
			}
			if (banyak>1 || banyak==0) cout<<"UNDETERMINED"<<endl;
			else cout<<nama[ans]<<endl; 
		}
	}
	return 0;
}
