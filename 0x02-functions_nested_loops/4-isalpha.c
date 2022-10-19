#include "main.ha"

/**
 * _isalpha - checks if c is a letter
 * @c: integer
 * Return: int
*/
int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
