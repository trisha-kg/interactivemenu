//
//  main.cpp
//  assignment6
//
//  Created by Trisha on 10/15/19.
//  Copyright © 2019 Trisha. All rights reserved.
//

#include <iostream>
#include "MenuItemH.hpp"
#include "MenuH.hpp"

//uses a for loop to print my name (Trisha)
void printMyName(){
    cout << "Hi, I'm Trisha!" << endl;
}
//prompts the user for an integer and then prints out the square of that number
void squareANumber(){
    cout << "Enter a number to be squared > ";
    int numchoice;
    cin >> numchoice;
    int square = numchoice*numchoice;
    cout << numchoice << " squared is: " << square << endl;
}

int main(int argc, const char * argv[]) {
    //create instances of MenuItem based on MenuItem attributes
    MenuItem itema("Print My Name", 'a');
    MenuItem itemb("Square a Number",'b');
    MenuItem itemq("Quit", 'q');
    //Create a C-style array of MenuItem objects for the menu
    MenuItem arr[] = { MenuItem("Print My Name",'a'),MenuItem("Square a Number",'b'), MenuItem("Quit", 'q')};
    //Declare an instance of Menu by passing the array created
    Menu menu(arr, 3);
    bool yes = true;
    //enter a loop that terminates only when the user enters Quit (yes=false)
    while (yes){
        //shows the menu
        menu.showMenu();
        /*prompts the user for a menu choice by calling promptUser() method in Menu class*/
        char code = menu.promptUser();
        switch(code){
            /*Enters into a switch statement that switches on values returned by promptUser()*/
            case 'a':
                /*If the user entered the choice for “Print My Name 3 Times”, call printMyName() and break*/
                printMyName();
                break;
            case 'b':
                /*If the user entered the choice for “Square a Number”, call squareANumber() and break.*/
                squareANumber();
                break;
            case 'q':
            //If the user entered quit, print "Quitting!", "Done" and break
                cout << "Quitting!" << endl;
                cout << "Done" << endl;
                yes = false; //loop terminates
                break;
            case '1':
            /*If the user entered something else, print "Unknown selection" and break*/
                cout << "Unknown selection" << endl;
                break;
        }
    }
}
