//
//  Queue.h
//  Queue
//

//

#ifndef __Queue__Queue__
#define __Queue__Queue__
#define MAX_SIZE 101
#include <stdio.h>
// implement queue data structure with circular array 
class Queue {
private:
    int A[MAX_SIZE];
    int m_front, m_rear;
public:
// basic function for queue data structure 
    Queue():m_front(-1),m_rear(-1){};
    bool isEmpty();
    bool isFull();
    void enQueue(int x);
    void deQueue();
    int  front();
    void display();
};





#endif /* defined(__Queue__Queue__) */
