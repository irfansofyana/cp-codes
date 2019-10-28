#include <bits/stdc++.h>
using namespace std;
int A[1000],n,m,pos;
string temp;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>n;
	while (n--){
		cin>>m; pos=0;
		for (int i=1;i<=m;i++){
			cin>>temp;
			if (temp=="LEFT"){
				A[i]=-1;
				pos--;
			}
			else if (temp=="RIGHT") {
				A[i]=1;
				pos++;
			}
			else {
				int k;
				cin>>temp>>k; 	A[i]=A[k];
				if (A[k]==-1) pos--;
				else if (A[k]==1) pos++;
			}
		}
		cout<<pos<<endl;
	}
}
