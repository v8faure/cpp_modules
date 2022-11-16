#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>

class   Weapon {
    private:
    std::string type_;

    public:
    // Weapon() {
    //     type_ = "arm";
    // }
    Weapon(std::string type) {
        type_ = type;
    }
    // ~Weapon() {
    //     std::cout<< type_ << "destroyed" <<std::endl;
    // }
    void setType(std::string type);
    std::string & getType(void);
};
    // void operator=(const Weapon & W) {
    //     this->type_ = W.type_; 
    // }
    // friend std::ostream & operator<<(std::ostream & os, const Weapon & w) {
    //     os << w.type_;
    //     return os;
    // }

#endif