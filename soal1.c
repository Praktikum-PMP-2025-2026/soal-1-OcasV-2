/*
* Modul     : 2 - Data Manipulation and External File
* Pembuat   : Farras Fuady Hakim (13224047)
* Deskripsi : Program untuk membaca string dan menentukan sum, average, max, dan index dari max.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void operasi(int *arr, int N, int *sum, float *avg, int *max, int *idx) {
    float fsum = 0;
    int fmax = 0;
    int fidx = 0;
    int next = 0;
    float favg = 0;


    for (int i = 0; i < N; i++) {
        next = arr[i];
        if (next > fmax) {
            fmax = next;
            fidx = i;
        }
        fsum += next;
    }


    favg = fsum/N;

    *sum = fsum;
    *avg = favg;
    *max = fmax;
    *idx = fidx;
}

int main() {
    int sum, max, id;
    int N;
    float avg;

    scanf("%d", &N);

    int input[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &input[i]);
    }

    operasi(input, N, &sum, &avg, &max, &id);

    printf("SUM %d\n", sum);
    printf("AVG %.2f\n", avg);
    printf("MAX %d\n", max);
    printf("IDX %d\n", id);

    return 0;
}
