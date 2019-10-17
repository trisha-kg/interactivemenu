//
//  MenuItem.cpp
//  assignment6
//
//  Created by Trisha on 10/15/19.
//  Copyright © 2019 Trisha. All rights reserved.
//
#include <iostream>
#include <stdio.h>
#include "MenuItemH.hpp"
#include <string>
using namespace std;

/* constructor that takes a string for instance title and a char for respective prompt character as parameters */
MenuItem::MenuItem(string t, char p){
    title = t;
    promptcharacter = p;
}

//getter that returns private variable promptcharacter
char MenuItem::getPromptChar(){
    return promptcharacter;
}

//method that displays the instances of MenuItem on the Menu
void MenuItem::display(){
    cout << getPromptChar() << ") " << title << endl;
}


