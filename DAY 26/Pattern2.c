
#include <stdio.h>

int main() {
    
    int i,j,x;
    printf("Enter the number :\n");
    scanf("%d",&x);
    for(i=1;i<=x;i++){
        for(j=1;j<=i;j++){
            printf("%d",i);
            
        }
        
        printf("\n");
        
    }
    
    return 0;
}
