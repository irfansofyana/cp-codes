#include <bits/stdc++.h>
using namespace std;

int n,i,j,ans,prev;
int A[100001];
bool dipakai[100001];
vector<int> belakang;
vector<int> depan;

int main(){
	cin >> n;
	for (i=0;i<n;i++)
		cin>>A[i];
	sort(A,A+n);
	i=0;
	memset(dipakai,false,sizeof(dipakai));
	while (i<n) {
		j=i;
		while (A[j]==A[j+1] && j<n-1) j++;
		belakang.push_back(A[j]);
		dipakai[j]=true;
		i=j+1;
	}
//	for (i=0;i<belakang.size();i++) cout<<belakang[i]<<endl;
	prev=belakang[belakang.size()-1];
//	cout << prev << endl;
	i = n-1;
	while (i>=0) {
		bool found=false;
		j=i;
		while (!found) {
			while (dipakai[j] && j>=0) j--;
			if (j<0) break;
			if (A[j]!=prev) {
				found = true;
				prev=A[j];
				depan.push_back(A[j]);
			}
			else j--;
		}
		i=j-1;
	}
	cout << depan.size()+belakang.size() << endl;
	if (depan.size()>=1 && belakang.size()>=1) {
		for (i=depan.size()-1;i>=0;i--) cout<<depan[i]<<" ";
		for (i=belakang.size()-1;i>=0;i--) {
			if (i==0) cout<<belakang[i]<<endl;
			else cout<<belakang[i]<<" ";
		}
	}
	else if (depan.size()==0 && belakang.size()!=0) {
		for (i=belakang.size()-1;i>=0;i--) {
			if (i==0) cout<<belakang[i]<<endl;
			else cout<<belakang[i]<<" ";
		}
	}
	else if (belakang.size()==0 && depan.size()!=0){
		for (i=depan.size()-1;i>=0;i--) {
			if (i==0) cout<<depan[i]<<endl;
			else cout<<depan[i]<<" ";
		}
	}
	return 0;
}
