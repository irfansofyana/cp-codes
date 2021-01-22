#include <bits/stdc++.h>
using namespace std;
int n,i,k,banyak;
string s;
int A[12];
bool tanda;

int main(){
	cin.tie(0);
	cin>>n>>k;
	banyak=0;
	for (i=1;i<=n;i++){
		cin>>s;tanda=true;
		for (int j=0;j<=k;j++) A[j]=j;
		for (int j=0;j<s.length();j++){
			for (int l=0;l<=k;l++){
				if (int(s[j])-48==A[l]){
					A[l]=-1;
				}
			}
		}
		for (int j=0;j<=k;j++){
			if (A[j]!=-1) tanda=false;
		}
		if (tanda) banyak++;
	}
	cout<<banyak<<endl;
}
