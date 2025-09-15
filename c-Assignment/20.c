#include <stdio.h>

int main() {

    int c;
    scanf("%d", &c);
    char num = 'A';

    for(int i = 1; i <= c; i++){
        for (int j = 1; j <= i; j++)
        {
            printf("%c",num);
            num++;
        }
        printf("\n");
        
    }

    return 0;
}