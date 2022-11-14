#ifndef WEAPON_H
# define WEAPON_H

#include <string>
#include <iostream>

class   Weapon {
    private:
    std::string type;

    public:
    Weapon();
    Weapon(std::string & tp) {
        type = tp;
    }
    ~Weapon();
    void setType(std::string & tp);
    std::string getType(void);
    friend std::ostream & operator<<(std::ostream & os, const Weapon & w) {
        os << w.type;
        return os;
    }
};

#endif