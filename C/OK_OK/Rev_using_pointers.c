#include<stdio.h>
int main(){
    int n;
    printf("enter");
    scanf("%d",&n);
    int arr[n];
       printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int *p,*p1;
    int temp;
    p=arr;
    p1=arr+(n-1);
    // for(int i=0;i<n/2;i++){
        // temp=*(p+i);
        while(p<p1){
        temp=*(p);
        *p=*p1;
        *(p1)=temp;
        
        p++;
        p1--;
        }

     printf("Reversed array:\n");
    for (int i = 0; i < n; i++) {
            printf("%d \t",arr[i]);}
return 0;
}
