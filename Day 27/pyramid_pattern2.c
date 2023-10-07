// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int x,i,j,l;
    printf("Enter the value :");
    scanf("%d",&x);
    for(i=x;i>=0;i--){

        for(l=x-i;l>0;l--){
                          printf(" ");}

         for(j=1;j<=(2*i)-1;j++)
         {


            printf("*"); }

            printf("\n");
        }

        return 0;
}
