#include <stdio.h>
int main(){
    int n,rev=0;
    scanf("%d",&n);
    while(n>0){
        int x = n%10;
        rev=rev*10+x;
        n/=10;
    }
    printf("%d",rev);
}