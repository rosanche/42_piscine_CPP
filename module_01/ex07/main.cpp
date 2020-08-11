# include <iostream>
# include <sys/stat.h>
# include <fstream>
# include <sstream>
# include <string>

static inline int file_exist(const std::string& file_name)
{
    struct stat buffer;
    return (stat(file_name.c_str(), &buffer) == 0);
}

static int      check_args_validity(const char **args)
{
    std::string string_to_check;

    for (int args_count = 1; args_count < 4; args_count++)
    {
        string_to_check.append(args[args_count]);
        if (!string_to_check.compare(""))
            return (0);
        string_to_check.clear();
    }
    string_to_check.append(args[1]);
    if (file_exist(string_to_check) == 0)
        return (0); 
    return (1);
}

void    replace(std::string file, std::string str, std::string rep, std::string file_name)
{
    size_t pos;
    while (42)
    {
        pos = file.find(str);
        if (pos == std::string::npos)
            break ;
        file.replace(pos, str.length(), rep);
    }
    std::ofstream file2(file_name + ".replace");
    file2 << file;
}

int main(int ac, char **av)
{
    std::ostringstream  text;
    std::ifstream       file(av[1]);
    std::string str;

    text << file.rdbuf();
    str = text.str();
    if (ac != 4)
        std::cout << "Wrong arguments!" << std::endl;
    else {
        if (!check_args_validity((const char **)av)) {
            std::cout << "Something is wrong!" << std::endl;
            return (0);
        }
        replace(str, av[2], av[3], av[1]);
    }
    return (0);
}