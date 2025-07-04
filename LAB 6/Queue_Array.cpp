#include <iostream>
using namespace std;

class Queue {
private:
    int front, rear, size;
    int capacity; /*capacity is variable that stores the max num of elemenet ur queue can hold
    We need capacity as use array(has fixed sizes)
    capacity remember the size of array so can check later whether the queue is full or not
    prevent from adding more elements than your array can store*/
    string* queue; // dynamic array of strings
    
public: // constructor for initializing empty queue
    Queue(int cap) {
        capacity = cap;
        queue = new string[capacity];
        front = 0; //initialize index where first element will be dequeued
        rear = -1; //intialize index where last element was enqueue, -1 mean no element yet, when enqueue first item, increment it to 0
        size = 0; // keeps track of current number of elements in queue.
    }

    void enqueue(string value) {
        if (size == capacity) { // queue full
            cout<<"Queue overflow"<<endl;
            return;
        } 
        rear = (rear + 1) % capacity; //circular behaviour?
        queue[rear] = value;
        size++;
        cout << "Enqueued: " <<value <<endl;
        }
    

    void dequeue() {
        if (size == 0) {
            cout << "Queue underflow" << endl;
            return;
        }
        cout << "Dequeued: " << queue[front] << endl;
        front = (front + 1) % capacity;
        size--;
    }

    void display_queue() {
        if (size == 0) {
            cout << "Queue empty" << endl;
            return;
        }
        cout << "Queue contains: ";
        for (int i = 0; i < size; i++){
            int index = (front + i) % capacity;
            cout << queue[index] << " ";
        }
        cout<<endl;
    }
    
    ~Queue(){
        delete[] queue;
    }
};

int main() {
    Queue q(5);
    
    q.enqueue("Belle");
    q.enqueue("Nabila");
    q.enqueue("Taskii");
    q.enqueue("Adam");
    q.enqueue("Syafiq");
    
    q.display_queue();
    
    q.dequeue();
    q.dequeue();
    q.display_queue();
    
    return 0;
}







