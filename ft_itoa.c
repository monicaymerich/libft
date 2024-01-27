#include <stdio.h>

char    *ft_itoa(int n)
{
    int     i;
    int     len;
    char    *num;

    i = 0;
    len = 10;   //Calcular llargada de n en chars
    num = malloc(sizeof(int) * len)
    if (n < 0)
    {
        char[i] = '-';
        n = n * (- 1);
        i++;
    }
    // if (n == MAX); quin es el max?
    if (n > 10)
    {
        *num = ft_itoa(n % 10);
        n = n / 10;
    }
    else if (n < 10)
    {
        num[i] = n + '0';
        i++;
    }
    return (num);
}

int main(void)
{
    int test;
    char result[20];

    test = 980;
    result = ft_itoa(test);
    printf("Resultat en char %s\n Hauria de ser %d\n", result, test);
    return (0);
}