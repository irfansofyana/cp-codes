#include <bits/stdc++.h>
using namespace std;
struct apa{
	int panjang;
	string kalimat;
};
apa data[10010];
int n,i,j,k;
string temp;

bool comp(apa a,apa b){
	if (a.panjang>b.panjang) return true;
	else return false;
}
int main(){
	cin>>n;
	for (i=1;i<=n;i++){
		cin>>temp;
		data[i].panjang=temp.length();
		data[i].kalimat=temp;
	}
	sort(data,data+n,comp);
	for (i=1;i<=n;i++)
		cout<<data[i].kalimat<<endl;
}
