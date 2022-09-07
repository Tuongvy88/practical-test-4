//preventing multiple inclusion of header files 
#ifndef CAGE_H
#define CAGE_H
#include<iostream>
using namespace std;
//Cage class defnition
class Cage
{
//instance variable declaration
private:
int id;
string name;
//method prototypes 
public:
Cage();
Cage(int,string);
string get_name();
int get_id_number();
void set_name(string);
void set_id_number(int);
~Cage(); 
};
#endif 