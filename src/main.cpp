#include <iostream>
#include "../includes/Animal.h"
#include "../includes/Fox.h"

using namespace std;



int main() {
    Fox f(24, 225, Sex::Female, "red", "", Fox_type::type1);
    f.eat();
    f.eat();
    cout << f.WhatDoesItSay() << endl;
    return 0;
}
