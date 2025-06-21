#include "../headers/LinkedList.h"

void LinkedList::append(int value){

    Node* newNode = new Node(value);

    if (length == 0) {
        head = newNode;
    } else {
        tail->next = newNode;
    }

    tail = newNode;
    length++;
}

void LinkedList::printList(){
    Node* temp = head;

    std::cout << "List: < ";
    while(temp) {
        if (temp->next != nullptr) {
            std::cout << temp->value << ", ";
        } else {
            std::cout << temp->value << " ";
        }
        temp = temp->next;
    }
    std::cout << ">" << std::endl;

}