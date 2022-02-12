#include <unistd.h>

int main(void)
{
	char even = 'Z';
	char odd = 'y';

	while(even >= 'A')
	{
		write(1, &even, 1);
		write(1, &odd, 1);
		even -= 2;
		odd -= 2;
	}
}
