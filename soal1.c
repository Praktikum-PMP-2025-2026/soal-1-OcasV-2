#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void operasi(char *arr, int N, int *sum, float *avg, int *max, int *id);

void operasi(char *arr, int N, int *sum, float *avg, int *max, int *id) {
    int next = 0;
    
    max = 0;
    avg = 0;
    id = 0;

    char *trash = strtok(arr, " ");

    for (int i = 0; i < N; i++) {
        next = atoi(strtok(arr, " "));
        if (next > *max) {
            *max = next;
            *id = i + 1;
        }
        *sum += next;
    }

    *avg = *sum/N;
}

int main() {
    char *input;
    int *sum, *max, *id;
    int N;
    float *avg;

    scanf("%s", &input);

    N =  atoi(strtok(input, " "));

    operasi(input, N, sum, avg, max, id);

    printf("SUM %d\n", sum);
    printf("AVG %.2f\n", avg);
    printf("MAX %d\n", max);
    printf("IDX %d\n", id);
}
