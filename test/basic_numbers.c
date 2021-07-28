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
    unsigned int ui;
    void *addr;

    len = _printf("OURS Let's try to printf a simple sentence.\n");
    len2 = printf("THEIRS Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i, %d, %d] OURS\n", len, len, 69, 69, 69);
    printf("Length:[%d, %i, %d, %d] THEIRS\n", len2, len2, 69, 69);
    _printf("Length:[%d, %i] OURS\n", 1 + 2, 46579);
    printf("Length:[%d, %i] THEIRS\n", 1 + 2, 46579);
    _printf("Negative:[%d] OURS\n", -762534);
    printf("Negative:[%d] THEIRS\n", -762534);
    _printf("Unsigned:[%u] OURS\n", ui);
    printf("Unsigned:[%u] THEIRS\n", ui);
    _printf("Address:[%p] OURS\n", addr);
    printf("Address:[%p] THEIRS\n", addr);
	_printf("\n11001 [%b] OURS\n", 25);
	_printf("\n111 [%b] OURS\n", 7);
}
