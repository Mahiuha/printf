#include "holberton.h"
/**
 * print_rot13 - Print rot13
 * @vlist: arguments passed to print
 * @output_p: Host output
 * @o_p: output position
 *
 * Description: Fuction that print rot13
 * Return: the int
 */
int print_rot13(va_list vlist, char *output_p, int o_p)
{
	int x = 0, y;
	char *pt = va_arg(vlist, char *);
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	if (!pt)
		pt = "(ahyy)";
	while (pt[x])
	{
		y = 0;
		while (alpha[y])
		{
			if (pt[x] == alpha[x])
			{
				output_p[o_p] = rot13[y];
				o_p++;
				break;
			}
			if (pt[x] < 65 || (pt[x] > 90 && pt[x] < 97) || pt[x] > 122)
			{
				output_p[o_p] = pt[x];
				o_p++;
				break;
			}
			y++;
		}
		x++;
	}
	return (o_p);
}
