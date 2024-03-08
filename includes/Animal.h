#ifndef ANIMALS_ANIMAL_H
#define ANIMALS_ANIMAL_H

#include <bits/stdc++.h>

enum class Sex : short {
    Male, Female, Undefined,
};

class Animal {
public:
    Animal() = default;
    Animal(int age, double mass, Sex sex, const std::string &color);

    virtual std::string WhatDoesItSay() const = 0;

    int get_age() const;
    double get_mass() const;
    Sex get_sex() const;
    std::string get_color() const;

    void set_age(int age);
    void set_mass(double mass);
    void set_sex(Sex sex);
    void set_color(std::string color);

    virtual ~Animal() = default;

protected:
    std::string color_;
    int age_ = 0;
    double mass_ = 0;
    Sex sex_ = Sex::Undefined;
};



#endif //ANIMALS_ANIMAL_H
