/*
* Modul     : 2 - Data Manipulation and External File
* Pembuat   : Farras Fuady Hakim (13224047)
* Deskripsi : Program untuk membaca string dan menentukan sum, average, max, dan index dari max.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void operasi(char *arr, int *sum, float *avg, int *max, int *idx) {
    float fsum = 0;
    int fmax = 0;
    int fidx = 0;
    int next = 0;
    float favg = 0;

    printf("%s\n", arr);

    float N = atoi(strtok(arr, " "));

    printf("%s\n", arr);

    for (int i = 0; i < (int)N; i++) {
        next = atoi(strtok(NULL, " "));
        printf("%d\n", next);
        if (next > fmax) {
            fmax = next;
            fidx = i;
        }
        fsum += next;
    }

    printf("1\n");

    favg = fsum/N;

    *sum = fsum;
    *avg = favg;
    printf("2\n");
    *max = fmax;
    *idx = fidx;
    printf("3\n");
}

int main() {
    char input;
    int sum, max, id;
    int N;
    float avg;

    strcpy(&input, "5 7 2 9 9 4");

    printf("%s\n", &input);

    // scanf("%s", &input);

    operasi(&input, &sum, &avg, &max, &id);

    printf("SUM %d\n", sum);
    printf("AVG %.2f\n", avg);
    printf("MAX %d\n", max);
    printf("IDX %d\n", id);

    return 0;
}
