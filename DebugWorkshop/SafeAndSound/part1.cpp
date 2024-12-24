#include "part1.h"
#include <iostream>

void string_copy(char* dest, unsigned int destsize, const char* src)
{
    int i = 0;

    for (i = 0; i < destsize  && src[i] != '\0'; ++i)
    {
        dest[i] = src[i];
    }
	dest[i] = src[i];
}

void part1()
{
	char password[] = "secret";
	char* dest = new char[13];
	char src[] = "hello world!";

	string_copy(dest, 12, src);

	std::cout << src << std::endl;
	std::cout << dest;
	delete[] dest;
}
