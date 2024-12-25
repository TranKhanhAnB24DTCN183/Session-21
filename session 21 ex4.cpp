#include <stdio.h>

int main() {
    char firstLine[100];

    FILE *file = fopen("bt01.txt", "r");
    if (file) {
        if (fgets(firstLine, sizeof(firstLine), file) != NULL) {
            printf("Dong dau tien: %s", firstLine);
        } else {
            printf("File khong co noi dung.\n");
        }
        fclose(file);
    } else {
        printf("Khong mo duoc file.\n");
    }

    return 0;
}

