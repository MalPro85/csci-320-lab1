/*
 * Implement your solution in thi file
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <tgmath.h>
#include "lab1.h"

char* readString(char* fileName){
    FILE *fp = fopen(fileName, "r");
    char *buffer = calloc(MAX_LINE_LEN, sizeof(char));
    fgets(buffer, MAX_LINE_LEN, fp);
    // printf("%s\n", buffer);
    buffer[strcspn(buffer, "\n")] = 0;
    printf("%s\n", buffer);
    fclose(fp);

    return buffer;
}

