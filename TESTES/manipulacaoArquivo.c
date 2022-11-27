#include <stdio.h>
#include <stdlib.h>

void tocopy(void) {
    int k;
    for (k = 0; k < 100; k++) {
        char filename[100];
        FILE *file;
        sprintf(filename, "Teste-%02d.txt", k); /* Teste-00.txt; Teste-01.txt; ...; Teste-99.txt */
        file = fopen(filename, "w");
        if (file != NULL) {
            fclose(file);
        } else {
            perror(filename);
            exit(EXIT_FAILURE);
        }
    }
}