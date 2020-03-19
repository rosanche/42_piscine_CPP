#include <iostream>

char    toupper(char c)
{
    return ((c >= 97 && c <= 122) ? c - 32 : c);
}

void    megaphone(char *str)
{
    int i;

    for (i = 0; str[i]; i++)
        std::cout << toupper(str[i]);
}

int main(int ac, char **av) {
    int i;
    if (ac > 1)
        for (i = 1; av[i]; i++) {
            megaphone(av[i]);
        }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
    return (0);
}