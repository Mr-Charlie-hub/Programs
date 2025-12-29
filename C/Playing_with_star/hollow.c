#include<stdio.h>

int main(){
    int n;
    printf("Enter the vlaue for n: ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
            if(i==1)printf("*");
            else if(k==1||k==2*i-1)printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    for(int i=n-1;i>0;i--){
        for(int k=i;k<=n;k++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            if(i==1)printf("*");
            else if(j==1||j==2*i-1)printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
