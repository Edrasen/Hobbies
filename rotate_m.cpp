#include<stdio.h>
#include <stdlib.h>
#include<time.h>
#include<iostream>

int myArray[20][20];
int myArray2[20][20];

int M = 3;

int N = 2;


int main(){
    srand(time(NULL));

    for(int i = 0; i < M; i++){
        for (int j = 0; j < N; j++)
        {
            myArray[i][j] = rand()%256+1;
        }
    }

    for(int i = 0; i < M; i++){
        printf("\n");
        for (int j = 0; j < N; j++)
        {
            printf("%d\t", myArray[i][j]);
        }
    }

    
    for (int j = 0; j < N; j++)
    {
        for (int i = 0; i < M; i++)
        {
            myArray2[j][i] = myArray[i][N-(j+1)];       
        }
    }


    printf("\n\n\n");
    for(int i = 0; i < N; i++){
        printf("\n");
        for (int j = 0; j < M; j++)
        {
            printf("%d\t", myArray2[i][j]);
        }
    }

    return 0;
}
