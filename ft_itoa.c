#include "libft.h"

/*
PROTOTYPE
---------

```
	char *ft_itoa(int n)
```

## RETURNS

```
	A newly allocated string containing the decimal representation
	of the integer 'n'.
	NULL if the allocation fails.
```

## DESCRIPTION

```
	Converts the integer 'n' into a newly allocated string
	containing its decimal representation.

	The returned string contains the digits of 'n' in the correct
	order and handles both positive and negative numbers.

	The returned string is independent of the original integer.
```

*/
char *ft_itoa(int n)
{
	char *str;
	long temp;
	int nbr_len;

	temp = n;
	nbr_len = get_digits(temp);

	str = malloc(sizeof(char) * (nbr_len + 1));
	if (!str)
		return NULL;

	str[nbr_len] = '\0';

	if (temp < 0)
	{
		str[0] = '-';
		temp *= -1;
	}

	if (temp == 0)
		str[0] = '0';

	while (temp > 0)
		{
			str[nbr_len - 1] = (temp % 10) + '0';
			temp /= 10;
			nbr_len--;
		}
	return (str);
}

int get_digits(long n)
{
	int len;

	len = 0;
	if (n < 0)
	{
		len++;
		n *= -1;
	}

	if (n == 0)
		return 1;

	while (n > 0)
		{
			n /= 10;
			len++;
		}

	return (len);
}
