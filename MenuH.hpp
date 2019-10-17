//
//  Menu.hpp
//  assignment6
//
//  Created by Trisha on 10/15/19.
//  Copyright © 2019 Trisha. All rights reserved.
//

#include <iostream>
#ifndef Menu_hpp
#define Menu_hpp
#include <vector>
#include <stdio.h>
#include "MenuItemH.hpp"
using namespace std;

//Menu class definition
class Menu {
public:
    Menu(MenuItem [], int);
    void showMenu();
    char promptUser();
    vector<MenuItem> MenuItems;
};

#endif /* Menu_hpp */
