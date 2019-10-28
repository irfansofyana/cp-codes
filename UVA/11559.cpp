#include <bits/stdc++.h>
using namespace std;

int n,i,j,bayar,temp,minimal;
int budget,biaya;
int hotel,minggu;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	while (cin>>n>>budget>>hotel>>minggu){
		minimal=budget; bool perubahan=false;
		for (i=1;i<=hotel;i++){
			cin>>biaya; bool ada=false;
			for (int j=1;j<=minggu;j++){
				cin>>temp;
				if (temp>=n && !ada){
					ada=true;
					if (biaya*n<minimal) {
						minimal=biaya*n;
						perubahan=true;
					}
				} 
			}
		}
		if (minimal<=budget && perubahan) cout<<minimal<<endl;
		else cout<<"stay home"<<endl;
	}
	return 0;	
}
