#include <stdio.h>

int main() {
    char user02[100];
    printf("Nhap ky tu muon ghi them: ");
    fgets(user02, sizeof(user02), stdin);

    FILE *file = fopen("bt01.txt", "a");
    if (file) {
        fputs(user02, file);
        fclose(file);
        printf("Ghi them thanh cong.\n");
    } else {
        printf("Khong mo duoc file.\n");
    }
    return 0;
}

