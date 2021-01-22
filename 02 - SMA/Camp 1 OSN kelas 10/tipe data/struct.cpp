#include <bits/stdc++.h>
using namespace std;
struct siswa{
	int nilai,absen;
	string nama;
};

siswa data[1000];
int n,i,j;
string temp;
int nilai,no;
int main(){
	cin>>n;
	for (i=1;i<=n;i++){
		cin>>no>>nilai;
		cin.ignore();getline(cin,temp);
		data[i].nama=temp;
		data[i].absen=no;
		data[i].nilai=nilai;	
	}
	for (i=1;i<=n;i++){
		cout<<data[i].absen<<" "<<data[i].nama<<" "<<data[i].nilai<<endl;
	}
}
