#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *file1, *file2, *file5;
    char str;
    file1 = fopen("//Users//lemanh//Desktop//bt01.txt", "r");
    if (file1 == NULL) {
        printf("Khong the mo file bt01.txt.\n");
        return 1;
    }
    file2 = fopen("//Users//lemanh//Desktop//bt3.txt", "r");
    if (file2 == NULL) {
        printf("Khong the mo file bt3.txt.\n");
        fclose(file1);
        return 1; 
    }
    file5 = fopen("//Users//lemanh//Desktop//bt5.txt", "w");
    if (file5 == NULL) {
        printf("Khong the mo hoac tao file bt5.txt.\n");
        fclose(file1);
        fclose(file2);
        return 1; 
    }
    while ((str = fgetc(file1)) != EOF) {
        fputc(str, file5);
    }
    while ((str = fgetc(file2)) != EOF) {
        fputc(str, file5);
    }
    fclose(file1);
    fclose(file2);
    fclose(file5);
    printf("Sao chep thanh cong\n");
    return 0; 
}

