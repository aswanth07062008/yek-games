#include <iostream>
using namespace std;

#define MAX 5 // Maximum size of the queue

class Queue {
    int front, rear;
    int arr[MAX];

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    // Check if the queue is full
    bool isFull() {
        return (rear == MAX - 1);
    }

    // Check if the queue is empty
    bool isEmpty() {
        return (front == -1 || front > rear);
    }

    // Add an element to the queue
    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue Overflow! Cannot add " << value << endl;
            return;
        }
        if (front == -1) front = 0; // Initialize front on first insertion
        arr[++rear] = value;
        cout << "Enqueued: " << value << endl;
    }

    // Remove an element from the queue
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow! Nothing to delete." << endl;
            return;
        }
        cout << "Dequeued: " << arr[front++] << endl;
        if (front > rear) { // Reset queue when it becomes empty
            front = rear = -1;
        }
    }

    // Display elements
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    q.dequeue();
    q.display();
    return 0;
}
