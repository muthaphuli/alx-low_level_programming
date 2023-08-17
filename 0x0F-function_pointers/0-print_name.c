/**
 * print_name - prints a name
 * @name: This is the name to print
 * @f: function pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
	return 0;
}
