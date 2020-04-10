#include "Squad.hpp"

Squad::Squad() : units_nb(0), units_list(NULL) { }

Squad::Squad(const Squad &copy)
{
    t_units *start;
    t_units *next;
    t_units *current;
    t_units *copy_units;

    start = this->units_list;
    current = start;
    next = current->next;
    copy_units = copy.units_list;
    for (int i = 0; i < this->getCount(); i++)
    {
        delete current->unit;
        current = next;
        next = current->next;
    }

    current = start;
    next = current->next;
    for (int i = 0; i < copy.getCount(); i++)
    {
        ISpaceMarine *copy = copy_units->unit->clone();
        copy = copy_units->unit;
        this->push(copy);
        copy_units = copy_units->next;
    }
    delete copy.units_list;
}

Squad::~Squad()
{
    t_units *next;

    for (int i = 0; i < this->getCount(); i++)
    {
        next = this->units_list->next;
        delete this->units_list->unit;
        delete this->units_list;
        this->units_list = next;
    }
}

Squad&  Squad::operator=(const Squad &copy)
{
    if (this != &copy)
        *this = copy;
    return (*this);
}

int Squad::getCount() const
{
    return (this->units_nb);
}

ISpaceMarine* Squad::getUnit(int index) const
{
    t_units         *units;
    ISpaceMarine    *rtn;

    units = this->units_list;
    if (index >= 0 && getCount() > index)
    {
        while(index--)
            units = units->next;
        if (units)
            rtn = units->unit;
        else
            rtn = NULL;
        return (rtn);
    }
    return (NULL);
}

int Squad::push(ISpaceMarine *marine)
{
    t_units *units;

    units = this->units_list;
    if (!marine)
        return (1);
    if (this->units_list == NULL)
    {
        this->units_list = new t_units;
        this->units_list->next = NULL;
        this->units_list->unit = marine;
        this->units_nb += 1;
        return (0);
    }

    while (units->next)
        units = units->next;
    units->next = new t_units;
    units->next->unit = marine;
    units->next->next = NULL;
    this->units_nb += 1;
    return (0);
}