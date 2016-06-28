//
//  Queue.cpp
//  Queue
//
//  Created by Pu Song on 5/31/16.
//  Copyright (c) 2016 Pu Song. All rights reserved.
//

#include "Queue.h"
#include <iostream>
using namespace std;

bool Queue::isEmpty() {
    return (m_rear == -1 && m_front == -1);
}

bool Queue::isFull() {
    return (m_rear + 1) % MAX_SIZE == m_front;
}

void Queue::enQueue(int x) {
    if(isFull()) {
        cout << "Error: queue is full" <<endl;
        return;
    }
    if(isEmpty()) {
        m_rear = 0;
        m_front = 0;
    }
    else {
        m_rear = (m_rear + 1) % MAX_SIZE;
    }
    A[m_rear] = x;
}

void Queue::deQueue() {
    if(isEmpty()) {
        cout << "Error: queue is empty" <<endl;
        return;
    }
    else if(m_front == m_rear) {
        m_rear = m_front = -1;
    }
    else {
        m_front = (m_front + 1) % MAX_SIZE;
    }
    
}

int Queue::front() {
    if (m_front == -1) {
        cout << "Error: queue is empty" <<endl;
        return -1;
    }
    else {
        return A[m_front];
    }
}

void Queue::display() {
    int count = (m_rear + MAX_SIZE  - m_front) % MAX_SIZE + 1;
    for(int i = 0; i < count; i++) {
        cout << A[(m_front + i) % MAX_SIZE] << endl;
    }
    
}








