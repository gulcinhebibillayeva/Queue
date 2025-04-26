#pragma once
struct Node {

    Worker* worker; 
    Node* next;
    Node(Worker* w) : worker(w), next(nullptr) {}
};
class Queue{
private:
    Node* head;
    Node* tail;

public:
    Queue()  {
        head = nullptr;
        tail = nullptr;
    }

    ~Queue() {
        while (!isEmpty()) {
            dequeue();
        }
    }


    void enqueue(Worker* worker) {
        Node* newNode = new Node(worker);
        if (isEmpty()) {
            head = tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    void dequeue() {
        if (!isEmpty()) {
            Node* temp = head;
            head = head->next;
            delete temp;
            if (head == nullptr) {
                tail = nullptr;
            }
        }
    }
    bool isEmpty() const {
        return head == nullptr;
    }Worker* front() const {
        if (head != nullptr) {
            return head->worker;
        }
        else {
            return nullptr;
        }
    }
   


};


