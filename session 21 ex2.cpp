#include <stdio.h>

int main() {
    FILE *file = fopen("bt01.txt", "r");
    if (file) {
        char firstChar = fgetc(file);
        if (firstChar != EOF) {
            printf("Ky tu dau tien: %c\n", firstChar);
        } else {
            printf("File khong co\n");
        }
        fclose(file);
    } else {
        printf("Khong mo duoc file.\n");
    }
    return 0;
}

