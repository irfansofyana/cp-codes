#include <bits/stdc++.h>
using namespace std;
int n,i,j,idx;
string temp;
bool cek=true;
int main(){
	char A[1000][1000];
	cin>>temp;
	i=1;
	while (cek){
		if (i*i<=temp.length() && (i+1)*(i+1)>temp.length()){
			if (i*i==temp.length()) n=i;
			else n=i+1;
			cek=false;
		}
		else i++;
	}
	idx=0;
	for (i=0;i<n;i++){
		if (i%2==0){
			for (j=0;j<n;j++){
				if (idx<=temp.length()-1)
					A[i][j]=temp[idx];
				else A[i][j]='.';
				idx++;
			}
		}
		else{
			for (j=n-1;j>=0;j=j-1){
				if (idx<=temp.length()-1)
					A[i][j]=temp[idx];
				else A[i][j]='.';
				idx++;
			}
		}
	}
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			if (j!=n-1) cout<<A[i][j];
			else cout<<A[i][j]<<endl;
		} 
	}
	return 0;
}
