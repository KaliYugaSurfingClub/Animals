#ifndef ANIMALS_FOX_H
#define ANIMALS_FOX_H

#include "Animal.h"

enum class Fox_type {
    type1, type2, type3, undefined
};

class Fox : public Animal {
public:
    Fox() = default;
    Fox(int age, double mass, Sex sex, const std::string &color, const std::string &name, Fox_type type);

    std::string WhatDoesItSay() const override;

    void eat() const;

    unsigned get_rabbits_were_eaten() const;

    Fox_type get_breed() const;
    std::string get_name() const;

    void set_name(const std::string &name);
    void set_breed(Fox_type type);

private:
    static const std::map<Fox_type, std::string> sounds_map;

    Fox_type type_ = Fox_type::undefined;
    std::string name_;

    mutable unsigned rabbits_were_eaten = 0;
};




#endif //ANIMALS_FOX_H
