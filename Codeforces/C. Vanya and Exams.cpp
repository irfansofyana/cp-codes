#include <bits/stdc++.h>
using namespace std;

struct paket{
    long long nilai,bonus;
};

long long n,r,avg,j;
long long i,perlu,tempn,tempb;
long long jumlah,banyak,jawaban;
paket A[100010];

bool comp(paket a,paket b){
    bool urut=false;
    if (a.bonus<b.bonus) urut=true;
    else if (a.bonus==b.bonus && a.nilai<b.nilai) urut=true;
    return urut;
}
int main(){
    cin.tie(0); ios_base::sync_with_stdio(0);
    cin>>n>>r>>avg; jumlah=0;
    for (i=0;i<n;i++){
        cin>>tempn>>tempb;
        A[i].nilai=tempn;
        A[i].bonus=tempb;
        jumlah+=tempn;
    }
    if (double(jumlah)/n>=double(avg)) cout<<0<<endl;
    else{
        sort(A,A+n,comp);
        /*for (i=0;i<n;i++) cout<<A[i].nilai<<" "<<A[i].bonus<<endl;*/
        perlu=n*avg-jumlah;
        i=0; banyak=0; jawaban=0;
        while (jumlah<n*avg){
        	while (A[i].nilai>=r) i++;
        	if (perlu>=(r-A[i].nilai)) banyak=r-A[i].nilai;
        	else banyak=perlu;
        	jumlah+=banyak;
        	jawaban+=banyak*A[i].bonus;
        	i++;
        	perlu=n*avg-jumlah;
        }
        cout<<jawaban<<endl;
    }
    return 0;
}
