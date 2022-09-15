#include <stdlib.h>
#include <stdio.h>

/*int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
*/
int ft_countDigit(long long n)
{
    if (n == 0)
        return 1;
    int count = 0;
    while (n != 0) {
        n = n / 10;
        ++count;
    }
    return count;
}

int ft_divide_number(int argv)
{
 int number_digits = 0;
 int limit = 1;
 int n;
 char num;
 int    i = 0;
 int digit;

number_digits = ft_countDigit(argv);
while (i < number_digits)
{
        limit = limit * 10;
        i++;
 }
 while (limit)
    {
        digit  = n / limit;
        n = n - (digit * limit);
        limit = limit / 10;
        printf("%d\n",limit);
         
    }



}

int main(int ac, char **argv)
{
    (void)ac;
    (void)argv;
    ft_divide_number(1256);
}