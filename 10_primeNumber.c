# include <stdio.h>
int main(){
    int n ,c=0;
    scanf("%d",&n);
    for(int i = 2; i<=n;i++){
        if(n%i==0){
            c++;
        }
    }
    if(c<3){
        printf("Prime Number");
    }
    else{
        printf("Not Prime\n");
    }
}