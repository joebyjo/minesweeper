#ifndef NUMBER_H
#define NUMBER_H

#include <SFML/Graphics.hpp>
#include <iostream>
#include "Cell.h"

using namespace sf;
using namespace std;

class Number: public Cell{

    protected:


    public:
        Number(int x, int y); // constructor
        
        void unique_function(); // owriting function

        
};

#endif