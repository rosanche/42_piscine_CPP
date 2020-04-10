#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>

class Enemy
{
    private:
        std::string type;
        int hp;

    public:
        Enemy();
        Enemy(int hp, std::string const & type);
        virtual ~Enemy() = 0;
        Enemy(const Enemy &copy);

        Enemy&    operator=(const Enemy &copy);

        std::string getType() const;
        int getHP() const;
        
        virtual void takeDamage(int dam);
};

#endif