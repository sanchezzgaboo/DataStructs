#include "single_linked_list.h"

int main(int argc, char *argv[]){
    single_linked_list test;
    test.add_first(2);
    test.add_last(3);
    test.add_last(4);
    test.add_last(5);

    test.print();
    return 0;
}