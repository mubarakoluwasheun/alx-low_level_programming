/**
 * _isdigit - Check if input is a digit
 *
 * @c: The input digit
 *
 * Return: returns 1 for Success or 0 for failure
 */
int _isdigit(int c)
{
	if ( c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
