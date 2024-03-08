#include "../includes/Fox.h"

const std::map<Fox_type, std::string> Fox::sounds_map = {
        {Fox_type::type1, "sound1"},
        {Fox_type::type3, "sound2"},
        {Fox_type::type1, "sound3"},
        {Fox_type::undefined, "undefined sound"},
};

Fox::Fox(int age, double mass, Sex sex, const std::string &color, const std::string &name, Fox_type type)
        : Animal(age, mass, sex, color), name_(name), type_(type) {}

std::string Fox::WhatDoesItSay() const {
    return sounds_map.at(type_);
}

void Fox::eat() const {
    rabbits_were_eaten++;
}

unsigned Fox::get_rabbits_were_eaten() const {
    return rabbits_were_eaten;
}

Fox_type Fox::get_breed() const {
    return type_;
}

std::string Fox::get_name() const {
    return name_;
}

void Fox::set_name(const std::string &name) {
    name_ = name;
}

void Fox::set_breed(Fox_type type) {
    type_ = type;
}
