/*Chef has a bucket having a capacity of
�
K liters. It is already filled with
�
X liters of water.

Find the maximum amount of extra water in liters that Chef can fill in the bucket without overflowing.*/

#include<stdio.h>
int main(){
    int x,y;
printf("Enter the capacity of bucket ");
scanf("%d",&x);
printf("Enter filled level");
scanf("%d",&y);
printf("Maximum water to be filled %d",x-y);
return 0;




}
