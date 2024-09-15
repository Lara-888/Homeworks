#include <stdio.h>

void cs(int a, int b, int c) {
    if (a + 1 == b && b + 1 == c) {
        printf("consecutive increasing\n");
    } else if (a - 1 == b && b - 1 == c) {
        printf("consecutive decreasing\n");
    } else if (a < b && b < c) {
        printf("increasing\n");
    } else if (a > b && b > c) {
        printf("decreasing\n");
    } else if (a == b && b == c && a==c) {
        printf("equal\n");
    } else {
        printf("none\n");
    }
}

int main() {
    int a, b, c;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);

    cs(a, b, c);

    return 0;
}