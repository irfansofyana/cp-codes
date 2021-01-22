#include <bits/stdc++.h>
using namespace std;

int n,i,j,k,asal,it;
string s;
int	A[150];
int nilai[150];
bool ans,udah;
int main(){
	cin>>n>>s;
	for (i=0;i<s.size();i++){
		if (s[i]=='*'){
			A[k]=i+1;
			nilai[i+1]=1;
			k++;
		}
	}
	udah=false;
	for (i=0;i<k-1;i++){
		for (j=i+1;j<k;j++){
			if ((max(A[i],A[j])-min(A[i],A[j]))%4==0){
				asal=max(A[i],A[j]);
				it=1;
				ans=true;
				while (it<=3){
					if (nilai[asal-((max(A[i],A[j])-min(A[i],A[j]))/4)*it]==1) it++;
					else {
						ans=false;
						break;
					}
				}
				if (ans) {
					cout<<"yes"<<endl;
					udah=true;
					break;
				}
			}
		}
		if (ans&&udah) break;
	}
	if (!udah) cout<<"no"<<endl;
	return 0;	
}
