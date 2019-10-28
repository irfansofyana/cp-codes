#include <bits/stdc++.h>
using namespace std;
 
int r,c,i,j,k,sz,udah,smt;
int A[200][200];
string temp;
vector<string> s;
 
void tentukan_ukuran(){
    for (int i=0;i<r;i++)
        for (int j=0;j<c;j++)
            A[i][j] = 0;
    for (int i=0;i<=7;i++) 
        if ((1<<i)>=max(r,c)){
            sz = (1<<i);
            break;
        } 
    for (int i=r;i<sz;i++) 
        for (int j=0;j<sz;j++)
            A[i][j] = 0;
    for (int i=0;i<r;i++) 
        for (int j=c;j<sz;j++)
            A[i][j] = 0;
}
 
void isi(int posisi,string st,int idx,pair<int,int> x,pair<int,int> y){
    pair<int,int> k11,k12,k21,k22,k31,k32,k41,k42,temp1,temp2;
    posisi/=2;
    k11 = x;
    k12 = make_pair((x.first+y.first)/2,(x.second+y.second)/2);
    k21 = make_pair(k12.first-(posisi-1),k12.second+1);
    k22 = make_pair(k12.first,k12.second+posisi);
    k31 = make_pair(k12.first+1,k12.second-(posisi-1));
    k32 = make_pair(k12.first+posisi,k12.second);
    k41 = make_pair(k12.first+1,k12.second+1);
    k42 = make_pair(k12.first+posisi,k12.second+posisi);
    if (idx==st.length()-1) {
        if (st[idx] == '0') {
            temp1 = k11;
            temp2 = k12;
        }
        else if (st[idx]=='1') {
            temp1 = k21;
            temp2 = k22;
        } 
        else if (st[idx]=='2'){
            temp1 = k31;
            temp2 = k32;
        } 
        else if (st[idx]=='3') {
            temp1 = k41;
            temp2 = k42;
        }
        for (int M=temp1.first;M<=temp2.first;M++){
            for (int N=temp1.second;N<=temp2.second;N++)
                A[M][N] = 1;
        }
        return ;
    }
    else {
        if (st[idx] == '0'){
            idx++;
            isi(posisi,st,idx,k11,k12); 
        } 
        else if (st[idx]=='1') {
            idx++;
            isi(posisi,st,idx,k21,k22); 
        }
        else if (st[idx]=='2') {
            idx++;
            isi(posisi,st,idx,k31,k32);
        }
        else if (st[idx]=='3') {
            idx++;
            isi(posisi,st,idx,k41,k42);
        }
    }
}
int main(){ 
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int uu;
	cin >> uu;
	while (uu--) {
		cin >> temp;
		s.push_back(temp);
	}
    cin >> r >> c;
    tentukan_ukuran();
//  for (i=0;i<s.size();i++) cout<<s[i]<<endl;
    for (i=0;i<s.size();i++) {
        temp = s[i];
        udah = 1;
        smt = sz;
    //  cout<<s[i]<<endl;
        if (temp.size()!=1) isi(smt,temp,udah,make_pair(0,0),make_pair(sz-1,sz-1));
        else {
            for (int z=0;z<sz;z++){
                for (int v=0;v<sz;v++)
                    A[z][v] = 1;
            }
        }
    }
    for (i=0;i<r;i++){
        for (j=0;j<c;j++){
            if (j==c-1) cout<<A[i][j];
            else cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
