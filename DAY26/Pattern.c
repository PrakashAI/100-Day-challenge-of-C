// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int i,j,x;
    printf("Enter the number :\n");
    scanf("%d",&x);
    for(i=1;i<=x;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
            
        }
        
        printf("\n");
        
    }
    
    return 0;
}
