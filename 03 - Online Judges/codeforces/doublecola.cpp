#include <cstdio>
int main(){
    char x[5][10]={"Sheldon","Leonard","Penny","Rajesh","Howard"};
    int n;
    scanf("%d",&n);
    n=n-1;
    while (n>=5){
    n-=5;
    n/=2;
    }
    printf("%s",x[n]);
}