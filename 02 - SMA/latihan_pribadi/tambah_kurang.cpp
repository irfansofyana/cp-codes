#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;


int n,i,j,target,x,y;
int A[40],B[40],temp[40];
vector<int> jumlah1,jumlah2;

void jelajah1(int idx,int sum,int banyak){
	int z;
	if (idx==banyak) {
		jumlah1.push_back(sum);
	}
	else {
		for (z = 1 ; z<=2; z++) {
			if (idx==0) {
				jelajah1(idx+1,sum+A[idx],banyak);
				return ;
			}
			else {
				if (z==1) jelajah1(idx+1,sum+A[idx],banyak);
				else if (z==2) jelajah1(idx+1,sum-A[idx],banyak);
			} 
		}
	}
}

void jelajah2(int idx,int sum,int banyak){
	int z;
	if (idx==banyak) {
		jumlah2.push_back(sum);
	}
	else {
		for (z = 1 ; z<=2; z++) {
			if (idx==0) {
				jelajah2(idx+1,sum+B[idx],banyak);
				return;
			}
			else {
				if (z==1) jelajah2(idx+1,sum+B[idx],banyak);
				else if (z==2) jelajah2(idx+1,sum-B[idx],banyak);
			} 
		}
	}
}

bool bs(int awal,int akhir,int nilai){
	int tengah = (awal+akhir)/2;
	if (awal>akhir) return false;
	else if (jumlah2[tengah]==nilai) return true;
	else if (jumlah2[tengah]<nilai) return bs(tengah+1,akhir,nilai);
	else if (jumlah2[tengah]>nilai) return bs(awal,tengah-1,nilai);
}

int main(){
	OPTIMASI
	cin >> n;
	for (i = 0 ; i < n  ; i++) cin >> temp[i];
	cin >> target;
	if (n%2==0) {
		j = 0;
		for (i = 0 ; i < (n/2); i++) {
			A[i] = temp[j];
			j++;
		}
		for (i = 0; i< (n/2) ; i++) {
			B[i] = temp[j];
			j++;
		}
		jelajah1(0,0,(n/2)); jelajah2(0,0,(n/2));
	}
	else {
		j = 0;
		for (i = 0; i<= (n/2); i++) {
			A[i] = temp[j];
			j++;
		}
		for (i = 0; i < (n/2) ; i++) {
			B[i] = temp[j];
			j++;
		}
		jelajah1(0,0,(n/2)+1); jelajah2(0,0,(n/2));
	}
	sort(jumlah1.begin(),jumlah1.end()); sort(jumlah2.begin(),jumlah2.end());
	//for (i = 0 ; i < jumlah1.size(); i++) cout << jumlah1[i] << " ";
	//cout << endl;
	//for (i = 0 ; i < jumlah2.size(); i++) cout << jumlah2[i] << " ";
	//cout << endl;
	for (i = 0 ; i < jumlah1.size() ; i++) {
		x = target-jumlah1[i]; y = jumlah1[i]-target;
		//cout << x << " " << y << endl;
		if ((bs(0,(int)jumlah2.size()-1,x)) || (bs(0,(int)jumlah2.size()-1,y))) {
			puts("ada");
			return 0;
		}
	}
	puts("tidak ada");
	return 0;
}