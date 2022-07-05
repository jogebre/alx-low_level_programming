#include "main.h"
/**
 * _isalpha-checks if we have alphabet or other
 * @c:the input
 * Return: 1 if alphabetical input 0 for anyother inputs
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
