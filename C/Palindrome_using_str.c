#include<stdio.h>
#include<string.h>
int main(){
    int a;
    printf("enter the value");
    scanf("%d",&a);
    char str[20];
    
    sprintf(str,"%d",a);
    
    int i=0;
    int j=strlen(str)-1;
    int flag=1;
    
    while(i<j){
        if(str[i]!=str[j]){
            flag=0;
        break;
        }
    
    i++;
    j--;
    }
    if(flag)printf("yes");
    else printf("no");
    return 0;
}
