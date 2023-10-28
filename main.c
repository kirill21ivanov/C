#include <stdio.h>
#include <math.h>

int main() {
    float a = 0;
    printf("Переводчик чисел в Пи");
    printf("Добро пожаловать! Введите число: ");
    scanf("%f", &a);
    printf("Вы ввели число: %.0f\n", a * M_PI);
    return 0;
}
