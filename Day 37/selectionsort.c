#include<stdio.h>
int main(){
    int n,j,mindex,temp;
printf("Entert the size of the arrray");
scanf("%d",&n);
int a[n];
printf("Enter the elements");
for(int i=0;i<n;i++)
    {   scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++){
        int min=a[i],mina;
        for(j=i+1;j<n;j++){

            if(a[j]<min){
                 min=a[j] ;
                  mindex=j;}

        }
        temp=a[i];
        a[i]=min;
        a[mindex]=temp;

    }
for(int i=0;i<n;i++)
    printf("%d",a[i]);

return 0;

}
