#include <stdio.h>
#include <stdlib.h>

/**
* binConverter - represents an unsigned int to binary
* @n: unsigned int to be converted
* Return: pointer to char
**/
char *binConverter(unsigned int n)
{
	char *bnum, bNum[1024];
	int i, j;

	i = 0;
	while (n != 0)
	{
		bNum[i] = (n % 2) + '0';
		n /= 2;
		i++;
	}
	bNum[i] = '\0';

	bnum = malloc(sizeof(char) * i);
	if (bnum == NULL)
		return (NULL);

	i--;
	j = 0;
	while (i >= 0)
	{
		bnum[j] = bNum[i];
		j++, i--;
	}
	bnum[j] = '\0';
	return (bnum);
}
