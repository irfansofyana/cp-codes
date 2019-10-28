	#include <bits/stdc++.h>
	using namespace std;
	char A[1000][1000],c;
	int n,m,i,j;
	bool cek=true;
	int main(){
		cin.tie(0);
		cin>>n>>m;
		for (i=0;i<n;i++){
			cin>>c;
			A[i][0]=c;
			for (j=1;j<m;j++){
				cin>>A[i][j];
				if (A[i][j]!=c) cek=false;
			}
		}
		if (!cek) cout<<"NO"<<endl;
		else{
			i=0;
			while (i<n-1) {
				if (A[i][0]==A[i+1][0]){
					cek=false;
					break;
				}
				else i++;
			}
			if (!cek) cout<<"NO"<<endl;
			else cout<<"YES"<<endl;
		}
		return 0;
	}
