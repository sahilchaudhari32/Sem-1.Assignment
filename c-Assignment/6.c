#include <stdio.h>

int main() {

    char row;
    scanf("%d",&row);

    for (int i = 0; i < row; i++){
        for (int j = 0; j < row; j++){
            printf("%c",'A'+j);
        }
        
        printf("\n");

    }
    
    return 0;
}