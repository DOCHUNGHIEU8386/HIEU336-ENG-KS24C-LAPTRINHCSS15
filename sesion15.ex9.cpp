#include <stdio.h>

int main() {
    char str[] = "hello world", ch;
    printf("Nhap ky tu can xoa: ");
    scanf("%c", &ch);

    for (int i = 0, j = 0; str[i] != '\0'; i++) {
        if (str[i] != ch) str[j++] = str[i];
        str[j] = '\0';
    }

    printf("Ket qua: %s\n", str);
    return 0;
}

