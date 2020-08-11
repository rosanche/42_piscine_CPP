#include "phonebook.hpp"

Contact::Contact()
{
    info[0][0] = "first name";
    info[0][1] = "last name";
    info[0][2] = "nick name";
    info[0][3] = "login";
    info[0][4] = "postal address";
    info[0][5] = "email address";
    info[0][6] = "phone number";
    info[0][7] = "birthday date";
    info[0][8] = "favorite meal";
    info[0][9] = "underwear color";
    info[0][10] = "darkest secret";
}

int     ft_strlen(std::string s)
{
    int i;

    for (i = 0; i <= 9; i++)
    {
        if (!s[i])
            return (10 - i);
    }
    return (0);
}

void    Contact::search(int e)
{
    int i;
    int n;
    int v;

    for (i = 0; i < e; i++)
    {
        std::cout << "         " << i << "|";
        for (n = 0; n < 4; n++)
        {
            for (v = 0; v < ft_strlen(info[i][n]); v++)
                std::cout << " ";
            if (!ft_strlen(info[i][n]))
            {
                for (v = 0; v < 9; v++)
                    std::cout << info[i][n][v];
                std::cout << ".";
            }
            else
                std::cout << info[i][n];
            n != 3 ? std::cout << "|" : std::cout << std::endl;
        }
    }
    std::cout << std::endl;
}

void     Contact::add(int i)
{
    int n;

    for (n = 0; n < 11; n++)
    {
        std::cout << std::endl << "Choose a " << info[0][n] << std::endl;
        std::getline(std::cin, info[i][n]);
        std::cout << "The " << info[0][n] << " is " << info[i][n] << std::endl;
    }
}

void        Contact::choose_index(int i)
{
    std::string index;
    int n;

    std::cout << "Type a index's contact to get its informations" << std::endl;
    std::getline(std::cin, index);
    index[0] -= 48;
    if ((int)index[0] > 0 && (int)index[0] < i)
    {
        for (n = 0; n < 11; n++)
            std::cout << info[0][n] << ": " << info[(int)index[0]][n] << std::endl;
    }
    else
    {
        index[0] = 0;
        std::cout << "Invalid index, search again to get information about a contact"
        << std::endl;
    }
}

int     last_contact(int i)
{
    std::string res;

    if (i >= 9)
    {
        std::cout << "You can't add a new contact, do you want to change the 8th for this one? (yes)" << std::endl;
        std::getline(std::cin, res);
        if (res == "yes")
            return (8);
        else
        {
            std::cout << "No contact will be changed" << std::endl;
            return (i);
        }
    }
    return (i);
}

int     main()
{
    Contact con;
    std::string choice;
    int i;

    i = 1;
    while (true)
    {
        std::cout << "Choose a command between ADD, SEARCH or EXIT" << std::endl;
        std::getline(std::cin, choice);
        if (choice == "ADD")
        {
            if ((i = last_contact(i)) <= 8)
                con.add(i);
            std::cout << "Your contact has been created!" << std::endl;
            i++;
        }
        else if (choice == "SEARCH")
        {
            con.search(i);
            con.choose_index(i);
        }
        else if (choice == "EXIT")
            return (0);
        else
            std::cout << "Wrong command!" << std::endl;
        std::cout << std::endl;
    }
    return (0);
}