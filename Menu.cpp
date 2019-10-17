//
//  Menu.cpp
//  assignment6
//
//  Created by Trisha on 10/15/19.
//  Copyright © 2019 Trisha. All rights reserved.
//

#include "MenuH.hpp"
#include <string>
#include <stdio.h>
#include "MenuItemH.hpp"
#include "MenuH.hpp"
using namespace std;

/*prints the menu - iterates through each MenuItem in the vector and calls display() for each one*/
void Menu::showMenu(){
    cout << "MENU" << endl;
    cout << "====" << endl;
    for (MenuItem item : MenuItems){
        item.display();
    }
}

/*reads a char from the keyboard and compares it to all the prompt characters in the MenuItem instances in the vector, returns -1 if not found*/
char Menu::promptUser(){
    char c;
    cout << "Enter Choice> ";
    cin >> c;
    for(MenuItem item : MenuItems){
        if (item.getPromptChar() == c){
            return c;
        }
    }
    return '-1';
}

/*constructor for the Menu class that takes a C-style array of MenuItems and an integer variable that tells how many items are in that array*/
Menu::Menu(MenuItem item[], int itemnum){
    for (int i=0; i<itemnum; i++){
        MenuItems.push_back(item[i]);
    }
}
