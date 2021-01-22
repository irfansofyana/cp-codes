#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,idx;
int main(){
	cin.tie(0);
	cin>>n>>m;
	idx=1;
	for (i=0;i<n;i++){
		if (i%2==0){
			for (j=0;j<m;j++) cout<<'#';
			cout<<endl;
		} 
		else {
			if (idx%2==1) {
				for (j=0;j<m-1;j++) cout<<'.';
				cout<<'#'<<endl;
				idx++;
			}
			else{
				cout<<'#';
				for (j=1;j<m;j++) cout<<'.';
				cout<<endl;
				idx++;
			}
		}
	}
	return 0;
}
