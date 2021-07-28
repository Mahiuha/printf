#include "../holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;

    len = _printf("OURS Let's try to printf a simple sentence.\n");
    len2 = printf("THEIRS Let's try to printf a simple sentence.\n");
    _printf("OURS function Character:[%c]\n", 'H');
    printf("THEIRS standard Character:[%c]\n", 'H');
	
    _printf("OURS function Character:[%aia]aa\n", "TEST");
    printf("THEIRS standard Character:[%s]\n", "TEST");

    _printf("OURS function Character EMPTY STRING:[%s]\n", "");
    printf("THEIRS standard Character: EMPTY STRING[%s]\n", "");

    _printf("OURS String:[%s]\n", "I am a string !");
    printf("THEIRS String:[%s]\n", "I am a string !");
    

    len = _printf("TEST[%%]\n");
    len2 = printf("TEST[%%]\n");

	_printf("OURS length:[%d] and [%d]\n", len, len2);
	printf("THEIRS length:[%d] and [%d]\n", len, len2);
	return (0);
}
