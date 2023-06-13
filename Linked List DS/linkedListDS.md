# Linked List DATA STRUCTURE

Linked list is a linear data structure. in which the elements are not stored in a contiguous memory locations. The elements are 
linked by some kind or pointers to next element.

### Simply a linked list consists of nodes each node contains data and refarance to next element.

```


  NODE A          NODE B          NODE B
    ||              ||              ||
    \/              \/              \/
-----------     -----------     -----------
|DATA|next|>--->|DATA|next|>--->|DATA|next|>---> NULL
-----------     -----------     -----------
    /\
    ||
HEAD NODE



```

## LINKED LIST VS ARRAY

```

ARRAY ====


---------------------------
|  0 | 1 | 2 | 3 | 4 |  5 |
---------------------------

LINKED LIST ====


             NODE B
           -----------
           |DATA|next|>-----------
           -----------          ||
              /\                ||
              ||                ||
  NODE A      ||                ||------------
-----------   ||                            ||
|DATA|next|>----                            ||
-----------                                 ||
                                            \/  
                                        -----------
                                        |DATA|next|>--->NULL
                                        -----------        
                                           NODE C


```

### Advantage of Linke List over array:
* Dynamic Size.
* Ease of insertion/deletion.

### Advantage of Array over Linked List:
* Random Access is not allowed. We have to access item by each node.
* We have to locate extra memory space for each pointers/refarances in the node.
* Not cache friendly since elements are not stored in contiguous memory.

### Operations of linked list:
* Traversing a linked list.
* Append a new node.
* Prepend a new node.
* Inserting a new node to a specific positon.
* Deleting a node form linke list.
* Updating a node.

### Type of Linked List:
* Singly Linked List.
* Doubly Linked List.
* Circular Linked List

## Singly Linked List:

```

-----------     -----------     -----------
|DATA|next|>--->|DATA|next|>--->|DATA|next|>---> NULL
-----------     -----------     -----------

```

## Doubly Linked List

```

--------------------     --------------------     --------------------
|previous|DATA|next|<--->|previous|DATA|next|<--->|previous|DATA|next|<---> NULL
--------------------     --------------------     --------------------

```

## Circular Linked List:

```

-----------     -----------     -----------
|DATA|next|>--->|DATA|next|>--->|DATA|next| <--|| 
-----------     -----------     -----------    || 
    /\                                         ||       
    ||_________________________________________||
    ||_________________________________________||
    
```

