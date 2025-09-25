#include "single_linked_list.h"
#include "node.h"

single_linked_list::single_linked_list(){
    head = nullptr;
    tail = nullptr;
    size = 0;
}
int single_linked_list::get_size(){
    return size;
}
void single_linked_list::add_first(double element){
    node *node_to_insert = new node(element);
    if (head == NULL){
        head = node_to_insert;
    }
    else{
        node_to_insert->next = this->head;
        this->head = node_to_insert;
    }   
    this->size++;
}

void single_linked_list::print() {
    node *temp = head;

    // Check for empty list
    if (head == NULL) {
        std::cout << "List empty" << std::endl;
        return;
    }

    // Traverse the list
    while (temp != NULL) {
        std::cout << temp->element << " ";
        temp = temp->next;
    }
}

single_linked_list::~single_linked_list(){
    node *current = head;
    while(current!=nullptr){
        node *nextNode = current->next;
        delete current;
        current = nextNode;
    }
    head = nullptr;
    tail = nullptr;
    size = 0;
}

