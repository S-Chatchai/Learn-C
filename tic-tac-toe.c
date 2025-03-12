#include <stdio.h>
#include <stdlib.h>

int main()
{

    int array_x[3][3]= {0};

    int turn1 = 1;
    int turn2 = 2;
    int i,j;

    printf("input array[0-2]\n");
    scanf("%d",&i);
    scanf("%d",&j);
    array_x[i][j] = turn1;
    if(array_x[0][0] != 0 && array_x[0][0] == array_x[0][1] && array_x[0][1] == array_x[0][2]){
        printf("you win in first row");
    }else if(array_x[1][0] != 0 && array_x[1][0] == array_x[1][1] && array_x[1][1] == array_x[1][2]){
        printf("you win in second row");
    }else if(array_x[2][0] != 0 && array_x[2][0] == array_x[2][1] && array_x[2][1] == array_x[2][2]){
        printf("you win in third row");
    }

    printf("input array[0-2]\n");
    scanf("%d",&i);
    scanf("%d",&j);
    array_x[i][j] = turn1;
    if(array_x[0][0] != 0 && array_x[0][0] == array_x[0][1] && array_x[0][1] == array_x[0][2]){
        printf("you win in first row");
    }else if(array_x[1][0] != 0 && array_x[1][0] == array_x[1][1] && array_x[1][1] == array_x[1][2]){
        printf("you win in second row");
    }else if(array_x[2][0] != 0 && array_x[2][0] == array_x[2][1] && array_x[2][1] == array_x[2][2]){
        printf("you win in third row");
    }

    printf("input array[0-2]\n");
    scanf("%d",&i);
    scanf("%d",&j);
    array_x[i][j] = turn1;
    if(array_x[0][0] != 0 && array_x[0][0] == array_x[0][1] && array_x[0][1] == array_x[0][2]){
        printf("you win in first row");
    }else if(array_x[1][0] != 0 && array_x[1][0] == array_x[1][1] && array_x[1][1] == array_x[1][2]){
        printf("you win in second row");
    }else if(array_x[2][0] != 0 && array_x[2][0] == array_x[2][1] && array_x[2][1] == array_x[2][2]){
        printf("you win in third row");
    }











    return 0;
}
