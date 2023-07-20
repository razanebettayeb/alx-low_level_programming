#include "main.h"

/**
 * main - check the code 
 * return : always 0
 * */
int main(void)
	int r;

	r = _isalphal('H');
	_putchar(r + '0');
	r = _isalphal('o');
	_putchar(r + '0');
	r = _isalphal('108');
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
