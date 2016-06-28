//
//  main.cpp
//  Queue
//
//  Created by Pu Song on 5/31/16.
//  Copyright (c) 2016 Pu Song. All rights reserved.
//

#include <iostream>
#include "Queue.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    Queue Q;
    Q.enQueue(2);  Q.display();
    Q.enQueue(4);  Q.display();
    Q.enQueue(6);  Q.display();
    Q.deQueue();    Q.display();
    Q.enQueue(8);  Q.display();
    return 0;
}
