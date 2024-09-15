int main() {
    int number;

    // Считываем число с клавиатуры
    printf("Enter your number: ");
    scanf("%d", &number);

    // Выводим число, его квадрат и куб
    printf("%d -> %d -> %d\n", number, number * number, number * number * number);

    return 0;
}
