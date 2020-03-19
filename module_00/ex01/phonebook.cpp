#include "phonebook.hpp"

void    init(std::string *info)
{
    info[0] = "first name";
    info[1] = "last name";
    info[2] = "nick name";
    info[3] = "login";
    info[4] = "postal address";
    info[5] = "email address";
    info[6] = "phone number";
    info[7] = "birthday date";
    info[8] = "favorite meal";
    info[9] = "underwear color";
    info[10] = "darkest secret";
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

void    search(Contact con, int e)
{
    int i;
    int n;
    int v;

    for (i = 0; i < e; i++)
    {
        std::cout << "         " << i << "|";
        for (n = 0; n < 4; n++)
        {
            for (v = 0; v < ft_strlen(con.info[i][n]); v++)
                std::cout << " ";
            if (!ft_strlen(con.info[i][n]))
            {
                for (v = 0; v < 9; v++)
                    std::cout << con.info[i][n][v];
                std::cout << ".";
            }
            else
                std::cout << con.info[i][n];
            n != 3 ? std::cout << "|" : std::cout << std::endl;
        }
    }
    std::cout << std::endl;
}

Contact     add(Contact con, int i)
{
    int n;

    for (n = 0; n < 11; n++)
    {
        std::cout << std::endl << "Choose a " << con.info[0][n] << std::endl;
        std::cin >> con.info[i][n];
        std::cout << "The " << con.info[0][n] << " is " << con.info[i][n] << std::endl;
    }
    return (con);
}

void        choose_index(Contact con, int i)
{
    char index;
    int n;

    std::cout << "Type a index's contact to get its informations" << std::endl;
    std::cin >> index;
    index -= 48;
    if ((int)index > 0 && (int)index < i)
    {
        std::cout << con.info[1][1] << std::endl;
        for (n = 0; n < 11; n++)
            std::cout << con.info[0][n] << ": " << con.info[index][n] << std::endl;
    }
    else
    {
        index = 0;
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
        std::cin >> res;
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
    init(con.info[0]);
    while (true)
    {
        std::cout << "Choose a command between ADD, SEARCH or EXIT" << std::endl;
        std::cin >> choice;
        if (choice == "ADD")
        {
            if ((i = last_contact(i)) <= 8)
                con = add(con, i);
            std::cout << "Your contact has been created!" << std::endl;
            i++;
        }
        else if (choice == "SEARCH")
        {
            search(con, i);
            choose_index(con, i);
        }
        else if (choice == "EXIT")
            return (0);
        else
            std::cout << "Wrong command!" << std::endl;
        std::cout << std::endl;
    }
    return (0);
}