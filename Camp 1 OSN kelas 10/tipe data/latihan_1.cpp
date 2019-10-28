#include <bits/stdc++.h>
using namespace std;
struct data{
	int nomor;
	string siswa;
};
data A[1000];
int n,i,no,k;
int m;
string temp;

int main(){
	cin>>n;
	for (i=1;i<=n;i++){
		cin>>no;
		cin.ignore();getline(cin,temp);
		A[no].siswa=temp;
	}
	cin>>m;
	for (i=1;i<=m;i++){
		cin>>k;
		if (A[k].siswa!="")
			cout<<A[k].siswa<<endl;
		else
			cout<<"Tidak ada"<<endl;
	}			
}
