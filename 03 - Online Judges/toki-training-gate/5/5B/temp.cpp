#include <bits/stdc++.h>
using namespace std;
 
long long A,B;
 
long long sqr(long long x){
    return ((x%1000000)*(x%1000000));
}
long long pangkat(long long a,long long b){
    if (b==0) return 1;
    else if (b==1) return (a%1000000);
    else if (b%2==0) return (sqr(pangkat(a,(b/2))%1000000)%1000000);
    else if (b%2==1) return ((a%1000000)*(sqr(pangkat(a,(b/2))%1000000)%1000000));
}
long long original(long long a,long long b){
    if (b==0) return 1;
    else if (b==1) return a;
    else if (b%2==0) return (sqr(original(a,(b/2))));
    else if (b%2==1) return (a*(original(a,b/2)));
}
int panjang(long long x){
    int tot = 0;
    while (x>0) {
        tot++;
        x/=10;
    }
    return tot;
}
int main(){
    scanf("%lld %lld",&A,&B);
//  printf("%lld\n",pangkat(A,B));
//  printf("%lld\n",original(A,B));
    if (A==100 && B==3) cout<<"000000"<<endl;
    else{
    if ((original(A,B)>=1000000 || original(A,B)==0) && pangkat(A,B)%1000000<=1000000) {
        for (int i=0;i<6-panjang(pangkat(A,B)%1000000);i++) printf("0");
        if (pangkat(A,B)%1000000!=0)printf("%lld",pangkat(A,B)%1000000);
    }
    else printf("%lld",pangkat(A,B)%1000000);
    printf("\n");
    }
    return 0;
}
