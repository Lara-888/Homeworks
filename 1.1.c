#include <stdio.h>

int check_number(int num) {
    
    int is_even = (num % 2 == 0);
    
    
    int in_range = (num >= 0 && num <= 20) || (num > 100 && num < 200);
    
    return is_even && in_range;
}

int main() {
    int number;

    printf("your number: ");
    if (scanf("%d", &number) != 1) {
        printf("error.\n");
        return 1; // Завершаем программу с кодом ошибки
    }

    if (check_number(number)) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

    return 0;
}
