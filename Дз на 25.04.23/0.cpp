//Реализация метода с помощью класса и node(узла)

class LinkedList {
public:
    void clear() {
        Node* current = head;
        Node* next;
        while (current != nullptr) {
            next = current->next;
            delete current;
            current = next;
        }
        head = nullptr;
    }
};
