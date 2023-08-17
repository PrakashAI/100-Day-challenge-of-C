/*
In computing, the collection of four bits is called a nibble.

Chef defines a program as:

Good, if it takes exactly
�
X nibbles of memory, where
�
X is a positive integer.
Not Good, otherwise.
Given a program which takes
�
N bits of memory, determine whether it is Good or Not Good.*/
#include<stdio.h>
int main(){

int x;
    printf("Enter the number");
    scanf("%d",&x);
	    if(x%4==0)

	        printf("Good\n");
	   else
	        printf("Not Good\n");
return 0;
    }
