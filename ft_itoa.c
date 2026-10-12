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
  int digit;
  int temp;
  void *s;
  int sign;

  temp = n;
	digit = 0;
	sign = 1;

  if (n < 0)
    sign = -1;
	if (n == 0)
		digit = 1;

  while (temp != 0)
    {
      temp = temp / 10;
      digit++;
    }
	if (sign < 0)
		s = mallock(digit+2); // +1 space for NULL terminator, +1 space for the negative sign
	else
		s = mallock(digit+1); // +1 space for the NULL terminator


	// edge case for INT_min, INT_max
}
