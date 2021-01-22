#include <bits/stdc++.h>
using namespace std;

int n,i,j,idx;
map < string , int> mep;
string ans[100010],temp;

string ubah(int k){
	stringstream ss;
	ss<<k;
	return ss.str();
}

int main(){
	cin.tie(0);
	cin>>n;
	for (i=0;i<n;i++){
		cin>>temp;
		mep[temp]++;
		if (mep[temp]>=2) {
			ans[i]=temp+ubah(mep[temp]-1);
		}
		else ans[i]="OK";
	}
	for (i=0;i<n;i++) cout<<ans[i]<<endl;
	return 0;
}
