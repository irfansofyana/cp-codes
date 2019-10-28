#include <bits/stdc++.h>
using namespace std;

string soal,s;
int nomor;
int n,q,i,j,k;
int bil;
vector<int> A;

void binser(int l,int r){
	int mid = (l+r)/2;
	if (l > r) return;
	cout << "1 " << mid  << '\n';
	fflush(stdout);
	cin >> s;
	if (s=="bisajadi") {
		bil = mid;
		binser(mid+1,r);
	} 
	else if (s=="tidak"){
		binser(l,mid-1);
	}
	else if (s=="ya") exit(0);
}

int main(){
	cin >> soal >> nomor;
	cin >> n >> k >> q;
	if (nomor==0) {
		cout << "3 2 5 6\n";
		fflush(stdout);
		cin >> s;
		if (s=="ya") return 0;
	}
	else if (nomor == 1 || nomor == 2 || nomor == 3) {
		for (i = 0 ; i < (1 << n); i++){
			vector<int> temp;
			for (j = 0 ; j < n ; j++) {
				if ((i&(1<<j)) > 0) {
					temp.push_back(j);
				}
			}
			if (temp.size() >= k){
				cout << (int)temp.size() << " ";
				for (j = 0 ; j < temp.size(); j++){
					cout << temp[j] + 1;
					cout << (j==(int)temp.size()-1 ? '\n' : ' ');
				}
				fflush(stdout);
				cin >> s;
				if (s=="ya") {return 0;}
			}
		}
	}
	else if (nomor == 4) {
		vector<int> temp;
		for (i = 1 ; i <= n ; i++) {
			cout << 1 << " " << i << '\n';
			fflush(stdout);
			cin >> s;
			if (s=="bisajadi") {
				temp.push_back(i);
			}
			else if (s=="ya"){return 0;}
		}
		cout << (int)temp.size() << " ";
		for (i = 0 ; i < temp.size(); i++){
			cout << temp[i];
			cout << (i==(int)temp.size()-1 ? '\n' : ' ');
		}
		fflush(stdout);
		cin >> s;
		if (s=="ya") return 0;
	}
	else if (nomor == 5){
		binser(1,n);
		cout << bil << " ";
		for (i = 1 ; i <= bil ; i++) {
			cout << i;
			cout << (i==bil ? '\n' : ' ');
		}
		fflush(stdout);
		cin >> s;
		if (s=="ya") return 0;
	}
	else {
		vector<int> temp;
		bool bil[105];
		memset(bil,true,sizeof bil);
		for (i = 1 ; i <= n ; i++) {
			for (j = i+1 ; j <= n ; j++) {
				cout << "2 " << i << " " << j << '\n';
				fflush(stdout);
				cin >> s;
				if (s=="ya") return 0;
				else if (s=="tidak") {
					bil[i] = false; bil[j] = false;
				}
			}
		}
		for (i = 1; i <= n ; i++) {
			if (bil[i]) temp.push_back(i);
		}
		cout << (int)temp.size() << " ";
		for (i = 0 ; i < temp.size(); i++){
			cout << temp[i];
			cout << (i==(int)temp.size()-1 ? '\n' : ' ');
		}
		fflush(stdout);
		cin >> s;
		if (s=="ya") return 0;
		else if (s=="tidak") {
			for (i = 0 ; i < temp.size(); i++){
				vector<int> bantu;
				bantu = temp;
				bantu.erase(bantu.begin() + i);
				cout << (int)bantu.size() << " ";
				for (j = 0 ; j < bantu.size(); j++){
					cout << bantu[j] ;
					cout << (j==(int)bantu.size()-1 ? '\n' : ' ');
				}
				fflush(stdout);
				cin >> s;
				if (s=="ya") return 0;
			}
		}
	}
	return 0;
}