#include<stdio.h>

int sum_of_digits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
int reduce_single_digit(int num) {
    while (num >= 10) {
        num = sum_of_digits(num);
    }
    return num;
}

int main() {
    int number;
    scanf("%d", &number);
    if (number < 0) {
        return 0;
    }

    int single_digit = reduce_single_digit(number);
    if (single_digit == 9) {
        printf("Lucky\n");
    } else {
        printf("Not Lucky\n");
    }

    return 0;
}
