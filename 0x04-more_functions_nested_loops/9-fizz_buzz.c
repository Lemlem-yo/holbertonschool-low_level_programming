#include <stdio.h>
/**
 * main - that prints the numbers from 1 to 100
 * Return: 0 if compilation is succesfully
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			if (i != 100)
			{ printf("FizzBuzz ");
			}
			else
			{ printf("FizzBuzz");
			}
		}
		else
		{
			if (i % 3 == 0)
			{
				if (i != 100)
				{ printf("Fizz ");
				}
				else
				{ printf("Fizz");
				}
			}
			else if (i % 5 == 0)
			{
				if (i != 100)
				{ printf("Buzz ");
				}
				else
				{ printf("Buzz");
				}
			}
			else
			{ printf("%d ", i);
			}
		}
	}
	printf("\n");
	return (0);
}
