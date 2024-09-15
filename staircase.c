// first read the Readme file to have more clarity
#include <stdio.h>

void staircase(int n){
    int i,j,k;
    for(i=1;i<n+1;i++){
        for(k=1;k<=n-i;k++){
            printf(" ");  
        }
        for(j=i;j>0;j--){
            printf("#");
        }
    printf("\n");
    }
}

int main() {
    
    int n;
    printf("Enter the size of staircase(n) : ");
    scanf("%d",&n);
    staircase(n);
    return 0;
    
}