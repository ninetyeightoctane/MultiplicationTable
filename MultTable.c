#include <stdio.h>

int main() {

    int input;

    printf("Please input how many row/columns you want: ");
    scanf("%d", &input);

    for(int i =1; i<=input; i++){
        printf("\t %-3d", i);
    }

    printf("\n");
    printf("+ ----------------------------------------------------------------------------------------------- \n");

    for(int i =1; i<=input; i++){

        printf("%d |", i);

        for(int j =1; j<=input; j++){
            printf("\t %-3d", i*j);
        }

        printf("\n");

    }
}