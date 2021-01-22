#include <bits/stdc++.h>
using namespace std;

string a,b;
int n,i,j,mini=1000000,k;

int main(){
	cin >> a >> b;
	for (i=0;i<b.size()-a.size()+1;i++){
		int temp=0;
		k=i;
		for (j=0;j<a.size();j++){
			if (a[j]!=b[k]) temp++; 
			k++;
		}
		if (temp<mini) mini=temp;
	}
	cout<<mini<<endl;
}
