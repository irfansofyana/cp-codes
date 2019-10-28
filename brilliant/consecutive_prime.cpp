#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int used[100010];
vector <int> prima;
void sieve(){
	int k;
	
	for (int i=2;i<=10000;i++){
		if (used[i]==0){
			k=i;
			while ((k*i)<=10000) {
				used[k*i]=1;
				k++;
			}
		}
	}
	for (int i=2;i<=10000;i++){
		if (used[i]==0) prima.push_back(i);
	}
} 

int jumlah_digit(int x){
	int ans=0;
	while (x>0) {
		ans+=x%10;
		x/=10;
	}
	return ans;
}
int main(){
	memset(used,0,sizeof(used));
	sieve();
	for (i=0;i<prima.size()-1;i++){
		if (jumlah_digit(prima[i])==jumlah_digit(prima[i+1])) {
			cout << prima[i] << " " << prima[i+1] << " "<< prima[i]+prima[i+1] << endl;
			break;
		}
	}
	return 0;
}
