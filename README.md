# Практична робота 4
Виконав Бурмака Ігор


## Код

```c
#include <stdio.h>

int main() {
    int j;
    int c = 0;

    printf("Enter a number: ");
    scanf("%d", &j);

    if(j>150||j<1){
        printf("Enter the number between 1 and 150");
        return 1;
    }

    for (int i = 1; i <= j; i++) {
        if (j % i == j / i) {
            c++;
        }
    }

    printf("The number of even divisors of a number. %d: %d\n", j, c);

    return 0;
}
