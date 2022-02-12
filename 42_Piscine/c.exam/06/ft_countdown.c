#include <unistd.h>

int main(void)
{
	char digit = '9';

	while(digit >= '0')
	{
		write(1, &digit, 1);
		digit--;
	}
}
