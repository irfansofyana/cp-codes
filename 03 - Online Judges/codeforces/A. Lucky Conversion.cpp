#include <bits/stdc++.h>
using namespace std;

string a,b;
int n,i,j,banyak,beda;
int A[10000];
char temp;
int main(){
	cin>>a;
	cin>>b;
	i=0;
	banyak=0;beda=0;
	j=0;
	for (i=0;i<a.length();i++){
		if (a[i]!=b[i]){
			A[beda]=i;
			beda++;	
		}
	}
	for (i=0;i<beda;i++){
		j=A[i];
		if (j==0 && a[j]!=b[j]){
			if (a[j+1]==b[j] && a[j+1]!=b[j+1]){
				banyak++;
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
			else banyak++;
		}
		else if (j==a.length()-1 && a[j]!=b[j]){
			if (a[j-1]==b[j] && a[j-1]!=b[j-1]){
				banyak++;
				temp=a[j-1];
				a[j-1]=a[j];
				a[j]=temp;
			}
			else banyak++;
		}
		else if (a[j]!=b[j]){
			if (a[j-1]==b[j] && a[j-1]!=b[j-1]){
				banyak++;
				temp=a[j-1];
				a[j-1]=a[j];
				a[j]=temp;
			}
			else if (a[j+1]==b[j] && a[j+1]!=b[j+1]){
				banyak++;
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
			else banyak++;
		}
	}
	if (banyak>beda) cout<<beda<<endl;
	else cout<<banyak<<endl;
}
