#include<stdio.h>

int main(){
    int n,i,temp;
printf("Enter the size of array");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
for(int j=0;j<n;j++){
for(i=0;i<n-1;i++){
    if(a[i]==0){
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
}

}
for(i=0;i<n;i++)
        printf("%d   ",a[i]);








}
