# Queue DATA STRUCTURE

Defination : Queue Data Structure is a linear data structure which works in First in First Out or Last in Last out.
It works as a real queue in real life. For example a group of car or a group of people standing in a linear way.
Queue is a abtract data type with bounded capacity.


It works in FIFO(First in First out) or LILO(Last in Last Out)

```
         ------------------------------------------
 Dequeue<--     0   |    1    |    2     |    3      -->Enqueue
         ------------------------------------------
                                                         /\
                                                         ||
                                                         ||
                                                         BACK

The end depend is independent. Either one can be use as a front or back.

          ------------------------------------------
 Enqueue<--     0   |    1    |    2     |    3      -->Dequeue
          ------------------------------------------

 /\
 ||
 ||
 BACK
```
Elements are added in one end(rear end/back) is called Enqueue.
Elements are removed from other end(front/head) is called Dequeue.


**STANDERD OPERATION OF QUEUE DATA STRUCTURE:**
1. enqueue() = Elements are added from the end.
2. dequeue() = Elements are removed from the back.
3. isFull() = To chack if the queue is full.
4. isEmpty() = To check if the queue if empty.
5. count() = To count total items in the queue.

