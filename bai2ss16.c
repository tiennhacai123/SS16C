#include<stdio.h>
int main(){
    FILE *filePointer;
    char buffer[100];
    filePointer = fopen("//Users//lemanh//Desktop//bt01.txt","r");
    fread(buffer,sizeof(char),sizeof(buffer),filePointer);
    printf("Hien thi ra toan bo noi dung %s",buffer);
    fclose(filePointer);
    return 0;
}
