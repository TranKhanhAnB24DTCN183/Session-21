#include <stdio.h>

int main() {
    char user01[100];
    printf("Nhap ky tu ban muon: ");
    fgets(user01, sizeof(user01), stdin);

    FILE *file = fopen("bt01.txt", "w");
    if (file) {
        fputs(user01, file);
        fclose(file);
    }
    return 0;
}

