 #include <stdio.h>
int main(){
    int n,i,min=100000,temp;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
        printf("%d",min);
}