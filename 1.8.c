#include <stdio.h>

int main() {
    int a, b, c;

    printf("enter a: ");
    scanf("%d", &a);
    printf("enter b: ");
    scanf("%d", &b);
    printf("enter c: ");
    scanf("%d", &c);

    if (a > b) {
        printf("error..\n");
        return 1;
    }

    printf("numbers from [%d, %d] for %d:\n", a, b, c);
    
    for (int i = a; i <= b; i++) {
        if (i % c == 0) {
            printf("%d ", i);
        }
    }
    
    printf("\n"); 
    return 0;
}
