#include <stdio.h>

int main(void){
    int set, one;
    int max = 0;
    int min = 0;
    int i = 0;
    int suma = 0;
    float arifmetic = 0;
    printf("Введите количество чисел: ");
    scanf("%d", &set);  //  считыватель массив чисел
    if (set == 1){
        printf("Введите число: ");
        scanf("%d", &one);
        printf("Максимальное число: %d\n", one);
        printf("Минимальное число: %d\n", one);
        printf("Сумма всех чисел: %d\n", one);
        printf("Среднее арифметическое: %.d\n", one);
        return 0;
    }
    int array[set+1];
    printf("Введите числa:\n");
    for (i = 1; i<set+1; i++){
        scanf("%d", &array[i]);  //  считыватель чисел
        if (i == 1){
            min = array[i];
        }
        if (array[i] > max) { //  Максимальный счетчик
            max = array[i];
        }
        if (array[i] < min) {  //  Минимальный счетчик
            min = array[i];
        }
        suma = suma + array[i];
        if (i == set){
            arifmetic = suma / i;
        }
    }
    printf("Максимальное число: %d\n", max);
    printf("Минимальное число: %d\n", min);
    printf("Сумма всех чисел: %d\n", suma);
    printf("Среднее арифметическое: %.2f\n", arifmetic);
    return 0;
}
