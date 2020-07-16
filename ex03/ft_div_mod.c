cd De
#include<stdio.h>
#include<unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int p = 0;
	if (p != '\0')
	{
		*div = a / b;
		*mod = a % b;
	
	}

}
int main(void)
{
	int x;
	int y;
	int a;
	int b;

	x = 6;
	y = 3;
	ft_div_mod(x, y, &a, &b);
    printf("x = %i and y = %i\n", x, y);
		printf("div = %i and mod = %i\n" ,a ,b);}

