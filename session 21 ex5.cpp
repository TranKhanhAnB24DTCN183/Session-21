#include <stdio.h>

int main() {
    int numLines;
    char lineContent[100];

    FILE *file = fopen("bt05.txt", "w");
    if (!file) {
        printf("Khong mo duoc file.\n");
        return 1;
    }

    printf("Nhap so dong: ");
    scanf("%d", &numLines);
    getchar();

    for (int i = 0; i < numLines; ++i) {
        printf("Nhap noi dung dong %d: ", i + 1);
        fgets(lineContent, sizeof(lineContent), stdin);
        fputs(lineContent, file);
    }

    fclose(file);

    file = fopen("bt05.txt", "r");
    if (!file) {
        printf("Khong mo duoc file de doc.\n");
        return 1;
    }

    printf("\nNoi dung trong file bt05.txt:\n");
    while (fgets(lineContent, sizeof(lineContent), file) != NULL) {
        printf("%s", lineContent);
    }

    fclose(file);
    return 0;
}

