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
	i=n-1;
	prev=belakang[belakang.size()-1];
	while (i>=0) {
		bool found=false;
		j=i;
		while (!found) {
			while (dipakai[j]) j--;
			if (A[j]!=prev) {
				found = true;
				prev=A[j];
				depan.push_back(A[j]);
			}
			else j--;
		}
		i=j-1;
	}
}
