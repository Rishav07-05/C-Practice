# include <stdio.h>
int main(){
    int a , i , n;
    scanf("%d",&a);
    printf("The table of %d : \n",a);
    for(i=1;i<=10;i++){
        n=a*i;
    printf("%d * %d = %d\n",a,i,n);
    }
}