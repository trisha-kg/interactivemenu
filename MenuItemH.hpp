//
//  MenuItemH.hpp
//  assignment6
//
//  Created by Trisha on 10/15/19.
//  Copyright © 2019 Trisha. All rights reserved.
//

#include <stdio.h>
#ifndef MenuItemH_hpp
#define MenuItemH_hpp
#include <string>
#include <stdio.h>
using namespace std;

//MenuItem class definition
class MenuItem {
public:
    MenuItem(string t, char p);
    char getPromptChar();
    string getTitle();
    void display();
private:
    string title;
    char promptcharacter;
};
#endif /* MenuItemH_hpp */
