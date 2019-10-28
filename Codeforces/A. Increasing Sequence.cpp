#include<bits/stdc++.h>
using namespace std;

int n,d,x,i,banyak;
vector<int> vi;

int main(){
	cin.tie(0);
	cin>>n>>d;
	for (i=0;i<n;i++){
		cin>>x;
		vi.push_back(x);
	}
	i=0; banyak=0;
	/*for (i=0;i<n;i++) cout<<vi[i]<<" ";
	cout<<endl;*/
	while (i<n-1){
		if (vi[i]<vi[i+1]) i++;
		else if (vi[i]==vi[i+1]){
			vi[i+1]+=d;
			banyak++; i++;
		}
		else if (vi[i]>vi[i+1]){
			banyak+=((vi[i]-vi[i+1])/d)+1;
			vi[i+1]+=(((vi[i]-vi[i+1])/d)+1)*d;
		}
		/*for (int j=0;j<n;j++) cout<<vi[j]<<" ";
		cout<<endl; */
	}
	cout<<banyak<<endl;
}
