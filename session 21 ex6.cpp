#include <stdio.h>

int main() {
    char buffer[100];

    FILE *sourceFile = fopen("bt01.txt", "r");
    if (!sourceFile) {
        printf("Khong mo duoc file bt01.txt\n");
        return 1;
    }

    FILE *destFile = fopen("bt06.txt", "w");
    if (!destFile) {
        printf("Khong mo duoc file bt06.txt\n");
        fclose(sourceFile);
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), sourceFile) != NULL) {
        fputs(buffer, destFile);
    }

    fclose(sourceFile);
    fclose(destFile);

    printf("Da sao chep noi dung tu bt01.txt sang bt06.txt\n");
    return 0;
}

