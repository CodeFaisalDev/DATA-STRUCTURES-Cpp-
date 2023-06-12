# Circular Queue DATA STRUCTURE

##In genaral queue we cannot enter a new value if the queue is full. We first need to dequeue all the items from the
queue then we have to enqueue a item.

###The circular queue solves this problem.
###We just need to rest the value of rear index when we want to enqueue a item that if the queue is full by dequeueing an item.

##Normal Queue Data Structure:

```

         ------------------------------------------
 Dequeue<--     0   |    1    |    2     |    3      -->Enqueue
         ------------------------------------------
                                                         /\
                                                         ||
                                                         ||
                                                         BACK

 ```
 
 ##Circular Queue Data Structure:
 
 ```
 
         ---------
             0
         ---------
  |     |         |     |
  |  3  |         |  1  |
  |     |         |     |
         ---------
             2
         ---------
         
```
