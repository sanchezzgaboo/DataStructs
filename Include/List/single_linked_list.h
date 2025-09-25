#include "node.h"
#ifndef SINGLE_LINKED_LIST_H
#define SINGLE_LINKED_LIST_H
class single_linked_list
{
private:
    node *head;
    node *tail;
    int size;

public:
    single_linked_list(/* args */);
    int get_size();
    //bool is_empty();
    //double get_element(int pos);
    //double get_first();
    //double get_last();
    //bool is_present(double element);
    void add_first(double element);
    //void add_last(double element);
    //double remove_first();
    //double remove_last();
    //int get_index(double element);
    //void insert_element();
    //double delete_at_index(int index);
    //void change_info(int index, double new_info);
    //void exchange(int pos1, int pos2);
    //single_linked_list sub_list(int start, int num_elements);
    void print();
    ~single_linked_list();
};

#endif