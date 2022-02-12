#include <unistd.h>

int main(void)
{
	char even = 'a';
	char odd = 'B';

	while(even <= 'z')
	{
		write(1, &even, 1);
		write(1, &odd, 1);
		even += 2;
		odd += 2;
	}
}
