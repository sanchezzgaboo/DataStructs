#include "node.h"


node::node(double element){
    this->element = element;
    this->next = NULL;
}

node::~node(){
    delete this;
}