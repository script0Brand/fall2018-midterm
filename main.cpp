/**

Description: This programs uses to functions. One receives a string from the user
             and reflects it back. The second one accepts a string and requests the
             user to select a particular character, then it iterates over the string and
             count the number of times the character repeats on the string.

Filename: main.cpp
Author: Byron Perez
Date: October 18, 2018

*/

#include<iostream>
#include<string>

using namespace std;

/**
    The functions 'get_string() and char_count() are declared.
    Both functions accept a string argument.
*/

string get_string(string word);
int char_count(string word);

int main()
{
    // Calling both functions.

    cout << get_string("Please enter some text") << endl;
    cout << char_count("Please enter some text string") << endl;
}

/** 
    This functions requests a string from the user and returns it.
    @ responseTxt is a string variable that receives the input from user.
*/

string get_string(string word)
{
    string responseTxt;
    cout << word << endl;
    cin >> responseTxt;
    return responseTxt;
}

/**
    This function requests that user enters a string and a character
    and then it counts how many times that character appears on the string.
    @ responseTxt, accepts the string the user types.
    @ someChar, receives the character the user types.
    @ the foor loop iterates the same number of times as the characters
      in the string.
    @ the if statement compares each character to the one selected by the user.
    @ counter increments every time a character in the string is found. 
*/

int char_count(string word)
{
    string responseTxt;
    cout << word << endl;
    cin >> responseTxt;
   
    char someChar;
    cout << "Select the character you want counted" << endl;
    cin >> someChar;
    
    int counter = 0;

    for (int i = 0; i < responseTxt.length(); i++)
    {
        if (responseTxt.at(i) == someChar)
            counter++;
    }
    return counter;
}
