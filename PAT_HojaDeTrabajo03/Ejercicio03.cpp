#include "Ejercicio03.h"

Node<int>* Ejercicio03::copyList(Node<int>* head)
{
    if (head == nullptr) {
        return nullptr;
    }

    Node<int>* current = head;
    while (current != nullptr) {
        Node<int>* newNode = new Node<int>{ current->value };
        newNode->next = current->next;
        current->next = newNode;
        current = newNode->next;
    }

    current = head;
    while (current != nullptr) {
        Node<int>* newNode = current->next;
        newNode->random = (current->random != nullptr) ? current->random->next : nullptr;
        current = newNode->next;
    }

    Node<int>* newHead = head->next;
    current = head;
    while (current != nullptr) {
        Node<int>* newNode = current->next;
        current->next = newNode->next;
        current = current->next;
        if (current != nullptr) {
            newNode->next = current->next;
        }
    }

    return newHead;

}
