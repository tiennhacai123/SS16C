#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *file;
    char line[100];
    int numLines = 0;
    file = fopen("//Users//lemanh//Desktop//bt3.txt", "r");
    if (file == NULL) {
        printf("Khong the mo file.\n");
        return 1; 
    }
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
        numLines++;
    }
    fclose(file);
    printf("\nSo dong trong file: %d\n", numLines);
    return 0; 
}

