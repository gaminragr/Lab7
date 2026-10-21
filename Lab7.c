#include <stdio.h>
#include <locale.h>
#include <math.h>

int task1()
{
    char c;

    printf("Введите символ: ");
    scanf(" %c", &c);

    switch (c) 
    {
        case '0': case '1': case '2': case '3': case '4':
        case '5': case '6': case '7': case '8': case '9':
            printf("Это цифра\n");
            break;

        default:
            if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
                {
                printf("Это буква\n");
            } 
            else 
            {
                printf("Это не буква и не цифра\n");
            }
    }

    return 0;
}
int task2()
{
    float x, y;
    char c;

    printf("Введите первое число, операцию (+, -, *, /, ^) и второе число: ");
    scanf("%f%c%f", &x, &c, &y);

    switch (c) 
    {
        case '+':
            printf("Результат: %f\n", x + y);
            break;

        case '-':
            printf("Результат: %f\n", x - y);
            break;

        case '*':
            printf("Результат: %f\n", x * y);
            break;

        case '/':
            if (y != 0) 
            {
                printf("Результат: %f\n", x / y);
            } 
            else 
            {
                printf("Ошибка: деление на ноль!\n");
            }
            break;

        case '^':
            printf("Результат: %f\n", pow(x, y));
            break;

        default:
            printf("Ошибка: неизвестная операция!\n");
    }

    return 0;
}
int task3()
{
    int n;

    printf("Введите цифру (0-9): ");
    scanf("%d", &n);

    switch (n) {
        case 0:
            printf("zero\n");
            break;
        case 1:
            printf("one\n");
            break;
        case 2:
            printf("two\n");
            break;
        case 3:
            printf("three\n");
            break;
        case 4:
            printf("four\n");
            break;
        case 5:
            printf("five\n");
            break;
        case 6:
            printf("six\n");
            break;
        case 7:
            printf("seven\n");
            break;
        case 8:
            printf("eight\n");
            break;
        case 9:
            printf("nine\n");
            break;
        default:
            printf("Ошибка: введена не цифра от 0 до 9\n");
    }

    return 0;
}

int main()
{
    setlocale(LC_ALL, "RUS");
    task1(); task2(); task3();
} 