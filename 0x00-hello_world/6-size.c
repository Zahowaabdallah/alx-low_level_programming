#include <stdio.h>
/**
 * main - Entry point 
 * Return: always 0 (Success)
 */
int main(void)
{
printf("Size of a char: %lu byte(s)\n", sizeof(char));
printf("Size of an int: %lu byte(s)\n",sizeof (int));
printf("Size of a long int: %lu byte(s)\n",sizeof(longint));
printf("Size of a long long int: %lu byte(s)\n",sizeof(longlongint));
printf("Size of a float: %lu byte(s)\n",sizeof(float));
return (0);
}
