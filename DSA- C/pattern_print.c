#include <stdio.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < 2 * n - 1; i++) {
        for (int j = 0; j < 2 * n - 1; j++) {
            printf("%d ", n - min(min(i, j), min(2 * n - 2 - i, 2 * n - 2 - j)));
        }
        printf("\n");
    }

    return 0;
}
