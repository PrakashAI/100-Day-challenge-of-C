
#include <stdio.h>

int main() {
    
    int i,j,x;
    printf("Enter the number :\n");
    scanf("%d",&x);
    for(i=x;i>0;i--){
        for(j=1;j<=i;j++){
            printf("%d",j);
            
        }
        
        printf("\n");
        
    }
    
    return 0;
}
