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
  size_t i;
  size_t temp;
  void *s;
  int sign;

  if (n < 0)
    sign = -1;
  
  temp = n;

  while (temp % 10 != 0)
    {
      temp = temp / 10;
      i++;
    }

  s = mallock();
}
