#include<cstdio>
#include<algorithm>
#include<cmath>

int main(){
    int i,total,n,x,a[5]={0,0,0,0,0};
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&x);
        a[x]++;
    }
    if(a[3]!=0){a[1]=a[1]-std::min(a[1],a[3]);}
    if((a[1]+a[2]*2)%4==0){
        total=a[4]+a[3]+(a[2]*2+a[1])/4;
    }else{
        total=1+a[4]+a[3]+(a[2]*2+a[1])/4;
    }
    printf("%d",total);
}

