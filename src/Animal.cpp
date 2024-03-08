#include "../Includes/Animal.h"

Animal::Animal(int age, double mass, Sex sex, const std::string &color)
        : age_(age), mass_(mass), sex_(sex), color_(color) {}

int Animal::get_age() const {
    return age_;
}

double Animal::get_mass() const {
    return mass_;
}

Sex Animal::get_sex() const {
    return sex_;
}

std::string Animal::get_color() const {
    return color_;
}

void Animal::set_age(int age) {
    age_ = age;
}

void Animal::set_mass(double mass) {
    mass_ = mass;
}

void Animal::set_sex(Sex sex) {
    sex_ = sex;
}

void Animal::set_color(std::string color) {
    color_ = std::move(color);
}
