#include <bits/stdc++.h>
using namespace std;
int n;
int asal1,asal2,x,y;

int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	while (cin>>n && n!=0){
		cin>>asal1>>asal2;
		for (int i=1;i<=n;i++) {
			cin>>x>>y;
			if (x==asal1 || y==asal2) cout<<"divisa"<<endl;
			else if (x>asal1 && y>asal2) cout<<"NE"<<endl;
			else if (x<asal1 && y>asal2) cout<<"NO"<<endl;
			else if (x<asal1 && y<asal2) cout<<"SO"<<endl;
			else if (x>asal1 && y<asal2) cout<<"SE"<<endl;
		}
	}
	return 0;
}

