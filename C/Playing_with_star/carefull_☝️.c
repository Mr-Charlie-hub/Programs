#include<stdio.h>

int main(){
    int n;
    printf("ENter the vlaue n: ");
    scanf("%d",&n);
    
for (int i = 1; i <= n; i++) {
    for(int j=1;j<=n;j++){
        if((j==1 && i>n/2)||j==n/2||(j==(n/2)+1 && i<n/2) ||(i==n/2)||(j==n && i>n/2)||(j==n-2 && i>n/2)||i==n)
        printf("*");
          else printf(" ");

    }

    printf("\n");
}
// printf("  b***h");
return 0;

}
