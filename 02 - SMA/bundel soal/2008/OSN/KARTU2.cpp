#include <bits/stdc++.h>
using namespace std;
int n,k,i,j,prev,ans,awal,banyak;
int A[100010];
int get[100010];
char temp; 
bool pertama;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>n;
	cin>>k;
	for (i=1;i<=k;i++){
		cin>>A[i]>>temp;
	} 
	j=1; awal=1; banyak=k;
	while (banyak>0 && j<=n ){
		pertama=true; ans=0;
		while (awal<=k){
			if (pertama) {
				ans++; prev=A[awal]; pertama=false;
				awal++; banyak--;
			}
			else {
				if (A[awal]<prev){
					ans++; awal++; banyak--; break;
				}
				else {
					ans++; prev=A[awal];
					awal++; banyak--;
				}
			}
		}
		get[j]+=ans;
		//cout<<get[j]<<endl;
		j++;
	}
	cout<<get[1]<<endl;
	return 0;
}

