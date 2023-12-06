#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *file;
    char line[100];
    int numLines;
    file = fopen("bt3.txt", "w");
    if (file == NULL) {
        printf("Khong the mo file.\n");
        return 1; 
    }

    printf("Nhap so dong: ");
    scanf("%d", &numLines);
    getchar(); 
    for (int i = 0; i < numLines; i++) {
        printf("Nhap noi dung dong %d: ", i + 1);
        fgets(line, sizeof(line), stdin);
        fprintf(file, "%s", line);
    }

    fclose(file);

    file = fopen("bt3.txt", "r");

    if (file == NULL) {
        printf("Khong the mo file.\n");
        return 1; 
    }

    printf("\nNoi dung file bt3.txt:\n");
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }
    fclose(file);
    return 0; 
}

