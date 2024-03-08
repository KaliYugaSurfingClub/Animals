#include "../includes/Dog.h"

Dog::Dog(int age, double mass, Sex sex, const std::string &color, const std::string &name, Breed breed)
        : Animal(age, mass, sex, color), name_(name), breed_(breed) {}

std::string Dog::WhatDoesItSay() const {
    return "af-af";
}

Breed Dog::get_breed() const {
    return breed_;
}

std::string Dog::get_name() const {
    return name_;
}

void Dog::set_name(const std::string &name) {
    name_ = name;
}

void Dog::set_breed(Breed breed) {
    breed_ = breed;
}
