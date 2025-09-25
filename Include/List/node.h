#include <iostream>
#ifndef NODE_H
#define NODE_H
class node
{
private:
public:
    double element;
    node *next;
    node(double element);
    ~node();
};
#endif