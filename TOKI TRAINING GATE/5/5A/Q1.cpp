#include <bits/stdc++.h>
using namespace std;

int n,i,j;
vector<string> vi;
char A[200][200];
int r,c,ukuran;
int smt;
void tentukan_ukuran(){
	for (i=0;i<=7;i++){
		if (max(r,c) > (1<<i)) continue;
		else if (max(r,c)<=(1<<i)) {ukuran = (1<<i); break;}
	}
	smt = r;
	for (i=0;i<ukuran-r;i++) {
		for (j=0;j<ukuran;j++)
			A[smt][j] = '0';
		smt++;
	}
	smt = c;
	for (i=0;i<r;i++) {
		smt = c;
		for (j=0;j<ukuran-c;j++){ 
			A[i][smt] = '0';
			smt++;
		}
	}
}
bool cek_homogen(pair<int,int> x,pair<int,int> y){
	char acuan = A[x.first][x.second];
	for (int z=x.first;z<=y.first;z++){
		for (int zz=x.second;zz<=y.second;zz++){
			if (A[z][zz]!=acuan) return false;
		}
	}
	return true;
}
void bagi(int sz,pair<int,int> x,pair<int,int> y,string s){
	pair<int,int> k11,k12,k21,k22,k31,k32,k41,k42;
	string temp = s;
	if (cek_homogen(x,y) || sz==1) {temp = A[x.first][x.second]+temp; vi.push_back(temp);}
	else {		
		sz/=2;
		k11 = x;
		k12 = make_pair((x.first+y.first)/2,(x.second+y.second)/2);
		k21 = make_pair(k12.first-(sz-1),k12.second+1);
		k22 = make_pair(k12.first,k12.second+sz);
		k31 = make_pair(k12.first+1,k12.second-(sz-1));
		k32 = make_pair(k12.first+sz,k12.second);
		k41 = make_pair(k12.first+1,k12.second+1);
		k42 = make_pair(k12.first+sz,k12.second+sz);
		bagi(sz,k11,k12,temp+'0');
		bagi(sz,k21,k22,temp+'1');
		bagi(sz,k31,k32,temp+'2');
		bagi(sz,k41,k42,temp+'3');
	}
}
int main(){
	cin >> r >> c;
	for (i=0;i<r;i++){
		for (j=0;j<c;j++)
			cin>>A[i][j];
	}
	tentukan_ukuran();
	/*for (i=0;i<ukuran;i++){
		for (j=0;j<ukuran;j++)
			cout<<A[i][j]<<" ";
		cout<<"\n";
	}*/
	bagi(ukuran,make_pair(0,0),make_pair(ukuran-1,ukuran-1),"");
	sort(vi.begin(),vi.end());
	for (i=0;i<vi.size();i++) if (vi[i][0]=='1') cout<<vi[i]<<endl;
	cout<<"END"<<endl;
}