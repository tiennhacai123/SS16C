#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *file;
    char str[100];
    file = fopen("//Users//lemanh//Desktop//bt01.txt", "w");
    if (file == NULL) {
        printf("Khong the mo file.\n");
        return 1; 
    }
    fgets(str, sizeof(str), stdin);
    fprintf(file, "%s", str);
    fclose(file);
    printf("Chuoi da duoc ghi vao file bt01.txt.\n");
    return 0; 
}

