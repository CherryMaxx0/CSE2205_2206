#include <iostream>

class CircQueue_MOD {
    int *arr;
    int capacity;
    int front;
    int rear;
    int elements;
public:
    CircQueue_MOD(int capacity) {
        this->capacity=capacity;
        arr = new int[this->capacity];
        front=rear=elements=0;  // Elements count
    }
    
    void Enqueue(int value) {
        if (elements==capacity) {
            std::cout<<"Queue is Full"<<std::endl;
            return;
        }
        rear = (front+elements)%capacity;
        arr[rear]=value;
        elements++;
        std::cout<<arr[rear]<<" is Inserted"<<std::endl;
        
    }
    void Dequeue() {
        if (elements==0) {
            std::cout<<"Queue is Empty"<<std::endl;
            return;
        } 
        elements--;
        std::cout<<arr[front]<<" is Deleted"<<std::endl;
        front++;
    }
    void GetRearItem() {
        if (elements==0) {
            std::cout<<"Queue is Empty"<<std::endl;
            return;
        } 
        int Last_rear_Item = (front+elements-1)%capacity;
        std::cout<<arr[Last_rear_Item]<<std::endl;
    }
    void GetFrontItem() {
        if (elements==0) {
            std::cout<<"Queue is Empty"<<std::endl;
            return;
        } 
        std::cout<<arr[front]<<std::endl;
    }

};

int main(void){
    CircQueue_MOD q1(5);
    q1.Dequeue();
    q1.Enqueue(45);
    q1.Enqueue(4);
    q1.Enqueue(27);
    q1.Enqueue(24);
    q1.Enqueue(29);
    q1.Enqueue(21);
    q1.GetFrontItem();
    q1.GetRearItem();
    q1.Dequeue();
    q1.Enqueue(21);
    q1.GetFrontItem();
    q1.GetRearItem();

}
