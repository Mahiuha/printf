/**
* s_trlen - String length
* @str: Input
*
* Description: Length of the string
*
* Return: The length
*/
int s_trlen(char *str)
{
int x = 0;

while (str[x] != '\0')
x++;
return (x);
}
