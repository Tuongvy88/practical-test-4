// Cage.h
#ifndef CAGE_H
#define CAGE_H

#include <iostream>

class Cage
{
    public:
        Cage(); // a default constructor ID number 
        Cage(int newNumber, std::string newName); 
        std::string get_name(); 
        int get_ID_number(); 
        ~Cage();
    private:
        int id;
        std::string occupant;
};

#endif 