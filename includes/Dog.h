#ifndef ANIMALS_DOG_H
#define ANIMALS_DOG_H

#include "Animal.h"

enum class Breed : short {
    bulldog, corgi, husky, beagle
};

class Dog : public Animal {
public:
    Dog() = default;
    Dog(int age, double mass, Sex sex, const std::string &color, const std::string &name, Breed breed);

    std::string WhatDoesItSay() const override;

    Breed get_breed() const;
    std::string get_name() const;

    void set_name(const std::string &name);
    void set_breed(Breed breed);

private:
    std::string name_;
    Breed breed_;
};

#endif //ANIMALS_DOG_H
