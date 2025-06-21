#include <iostream>
#include "../headers/LinkedList.h"

using namespace std;

int main(int argc, char **argv) {

    cout << "\n\tImplementación de LinkedList:\n" << endl;

    LinkedList* linkedList = new LinkedList(4);
    linkedList->append(5);
    linkedList->append(6);
    linkedList->append(7);

    cout << "\t";
    linkedList->printList();

    cout << "\n";
    return EXIT_SUCCESS;
}