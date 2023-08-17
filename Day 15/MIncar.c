/*
A single car can accommodate at most
4
4 people.

�
N friends want to go to a restaurant for a party. Find the minimum number of cars required to accommodate all the friends.*/

#include<stdio.h>
int main(){

    int x;
    printf("Enter the total number of friends : ");
    scanf("%d",&x);

         if(x%4==0)
	        printf("Minimum car required %d",x/4);
	    else
	        printf("Minimum car required %d",(x/4)+1);

        return 0;













}
