// Lab05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const struct cypher {
    char start;
    char end;
};

cypher cypher_table[] = {
    {'A', 'V'},
    {'B', 'F'},
    {'C', 'X'},
    {'D', 'B'},
    {'E', 'L'},
    {'F', 'I'},
    {'G', 'T'},
    {'H', 'Z'},
    {'I', 'J'},
    {'J', 'R'},
    {'K', 'P'},
    {'L', 'H'},
    {'M', 'D'},
    {'N', 'K'},
    {'O', 'N'},
    {'P', 'O'},
    {'Q', 'W'},
    {'R', 'S'},
    {'S', 'G'},
    {'T', 'U'},
    {'U', 'Y'},
    {'V', 'Q'},
    {'W', 'M'},
    {'X', 'A'},
    {'Y', 'C'},
    {'Z', 'E'}
};

void something(char message[]) {
    if (char *message[] >= 65 && char *message[] <= 90)
    {
        cout << "Hello";
    }
    else {
        cout << "Goodbye";
    }
}

int main()
{
    cout << "Enter your message: ";
    char message[128];
    cin.getline(message, 128);
    
    
}

