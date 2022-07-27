#include "libft.h"

static long	max_min_cntrl(long res, int sign)
{
	res = res * sign;
	if (res >= -2147483648 && res <= 2147483647)
		return (res);
	if (sign == -1)
		return (0);
	return (-1);
}

int	ft_atoi(const char *str)
{
	long	num;
	int		sign;

	num = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while ((*str <= '9' && *str >= '0'))
	{
		num = (num * 10) + (*str - 48);
		str++;
	}
	num = max_min_cntrl(num, sign);
	return (num);
}

/*int main()
{
	char *arr="   \n\t    -123 \t  55";
	int a=ft_atoi(arr);
	printf("%d",a);	
}*/