# LINEAR SEARCH DATA STRUCTURE

Searching Algorithmare designed to check or retrive an element from any data structur it stored. Based on the type of search operation it is classified in two categories:

* Sequential Search.
* Interval search.

### Sequential Search:
Im this, the list or array is traversed sequentioally and every element is checked. Example : Linear Search.

```
// Let's say we have to find 30 from this array.

----------------------------------
|  10  |  50  | 30  | 80  |  20  |
----------------------------------
    ^     ^     ^
____|_____|_____|--Value Found
  1    2     3     

Sequentially searching each element until found 30.

```

This is a simple example of Sequential search.

### Linear Search Algorithm:
* Take the input array arr[] from user.
* Take element(x) you want to search in this array from user.
* Set flag variable as -1
* LOOP : arr[start] -> arr[end]
* if match found i.e arr[current_postion] == x then
* Print “Match Found at position” current_position.
* flag = 0
* abort
* After loop check flag variable.
* if flag == -1
* print “No Match Found”
* STOP
