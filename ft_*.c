int isalpha(int c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int main(void)
{
    #include <stdio.h>
	char	str = 'a'; 
	int		x;

	x = isalpha(str);
	printf("%d", x);
	return (0);
}