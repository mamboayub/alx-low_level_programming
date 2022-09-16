#include "main.h"
/**
 *Main functions checks for number 0 to 9 
 *returns 1 if the condition is met
 * otherwise return: 0.
 */

int _isdigit(int c);
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
