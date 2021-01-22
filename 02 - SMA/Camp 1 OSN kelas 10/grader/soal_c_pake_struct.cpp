#include <bits/stdc++.h>
using namespace std;

struct kotaksuara{
	int jumlah,nopartai;
};
kotaksuara data[110];
int n,m,tmp;

bool comp(kotaksuara a,kotaksuara b){
	if(a.jumlah > b.jumlah)return true;
	else return false;
}

int main(){
	cin >> n >> m;
	for(int x = 1; x <= n; x++){
		cin >> tmp;
		data[tmp].jumlah++;
		data[tmp].nopartai = tmp;
	}
	sort(data,data+m+1,comp);
	f(data[1].jumlah == data[2].jumlah)cout << "Waspada Koalisi\n";
	else cout << data[1].nopartai << endl;
	return 0;
}
