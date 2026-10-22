#define  _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>

int e0()
{
    int n = 10;
    char c = '*';
    printf("+");
    for (int i = 0; i < n; i++) putchar(c);
    printf("+\n");
    for (int i = 0; i < n; i++) putchar(i < n / 2 ? c : '!');
    printf("\n");
    for (int i = 0; i < n; i++) printf("%c!", c);
    printf("\n");

    return 0;
}
int e1()
{
    int n = 0;
    int m = 0;
    int k = 0;
    int s = 0;
    printf("Введите начальное число m:\n");
    scanf("%d", &m);
    printf("Введите начальное значение n:\n");
    scanf("%d", &n);
    for (int i = m; i >= n; i--)
    {
        s += i;
        k++;
        printf("выполнено %d раз\n", k);
    }
    printf("результат %d\n", s);
    return 0;
}
int e2()
{
    int n = 0;
    float step = 1.0;
    int m = 0;
    printf("Введите степень n: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        printf("2^%d  =  %d\n", i, step);
        step = step * 2;
    }
    step = step / 2;
    printf("\nРезультат: %.1fК\n", step / 1024.0);

    printf("\n\nВведите число m: ");
    scanf("%d", &m);

    for (int step = 0; step <= m; step++) {
        printf("2^%d = %.0f\n", step, step);
        step *= 2;
    }
    printf("Результат: %.1fК\n", (step / 2) / 1024.0);
}
int e3()
{
    double x = 0;
    double shag = 0;
    printf("Функция: y = x^2 + sin(5x)\n");
    printf("Введите шаг: ");
    scanf("%lf", &shag);
    printf("\n   x   |  f(x)\n");
    printf("----------------\n");
    for (x = 0.1; x <= 2.11; x += shag)
    {
        printf(" %5.2f | %5.2f\n", x, (x * x) + sin(5 * x));

    }
    return 0;
}
int e4()
{
    int N = 0;
    double sum = 0.0;
    printf("Введите число N: ");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        sum = sum + pow(i, i);
    }
    printf("Сумма: %.0f\n", sum);
    return 0;
}

int main()
{
    setlocale(LC_CTYPE, "ru_RU.UTF-8");
    // e0();
   //  e1();
  //   e2();
 //   e3();
    e4();
}