#include<stdio.h>
void bubbleSort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]<arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;}
        }
    }
// printf("%d",arr)
}
int binary(int arr[],int low,int high,int t){
    // int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
    
    if(t==arr[mid]){
        return 1;
    }
    else if(t>arr[mid]){
        binary(arr,mid+1,high,t);
    }
    else binary(arr,low,mid-1,t);
    }
    return 0;
}
int main(){
    int n,t;
    printf("enter");
    scanf("%d",&n);
    printf("enter");
    scanf("%d",&t);
    int arr[n];
    printf("Enter the array");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr,n);
    int k=binary(arr,0,n-1,t);
    for(int i=0;i<n;i++)
    printf("%d \t",arr[i]);
    if(k) printf("yes");
    else printf("no");
    return 0;
}
