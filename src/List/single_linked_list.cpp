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
bool single_linked_list::is_empty(){
    if (size == 0 ){
        return true;
    }
}
double single_linked_list::get_element(int pos){
    node *current = head;
    int count = 0;
    bool encontrado = false;
    double result;
    while (current!=nullptr && !encontrado){
        if (count == pos){
            encontrado = true;
            result = current->element;
        }
        else{
            current = current->next;
        }
    }
    if (encontrado){
        return result;
    }
    else{
        //TODO THROW ERROR
    }
}
double single_linked_list::get_first(){
    return head->element;
}
double single_linked_list::get_last(){
    return tail->element;
}
bool single_linked_list::is_present(double element){

}
void single_linked_list::add_first(double element){
    node *node_to_insert = new node(element);
    if (head == nullptr){
        head = node_to_insert;
        tail = node_to_insert;
    }
    else{
        node_to_insert->next = this->head;
        this->head = node_to_insert;
    }   
    this->size++;
}

void single_linked_list::add_last(double element){
    node *node_to_add = new node(element);
    if (size == 0){
        head = node_to_add;
        tail = node_to_add;
    }
    else{
        this->tail->next = node_to_add;
        this->tail = node_to_add;
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

