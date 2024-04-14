#pragma once
#include <iostream>
using namespace std;

class rect{
private:
    int length;
    int width;

public:
    rect();
    rect(int l, int w);
    int getlength() const;
    int getwidth() const;

    rect& operator++();
    rect operator+(rect b);
    rect operator+(const rect& r) const;
       

    
};

