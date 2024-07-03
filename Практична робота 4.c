#include <stdio.h>

int main() {
    int n;
    int count = 0;

    printf("Введіть натуральне число n: ");
    scanf("%d", &n);

    if(n>150 || n<1){
        printf("Введіть число від 1 до 150");
        return 23;
    }

    for (int i = 1; i <= n; i++) {
        if (n % i == n / i) {
            count++;
        }
    }

    printf("Кількість рівних дільників числа %d: %d\n", n, count);

    return 0;
}
