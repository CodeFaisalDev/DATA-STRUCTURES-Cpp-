# Bubble Sort Data Structure

Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order. This algorithm is not suitable for large data sets as its average and worst-case time complexity is quite high.

### In this algorithm, 

* Traverse from left and compare adjacent elements and the higher one is placed at right side. 
* In this way, the largest element is moved to the rightmost end at first. 
* This process is then continued to find the second largest and place it and so on until the data is sorted.

Example:

arr = {6,0,3,5}


**First Pass: **

* The largest element is placed in its correct position, i.e., the end of the array.

```

  -------------------------
  |  6  |  0  |  3  |  5  |
  -------------------------
     ^     ^
     |_____|
      Swaped

  -------------------------
  |  0  |  6  |  3  |  5  |
  -------------------------
           ^     ^
           |_____|
            Swaped

  -------------------------
  |  0  |  3  |  6  |  5  |
  -------------------------
                 ^     ^
                 |_____|
                  Swaped

  -------------------------
  |  0  |  3  |  5  |  6  |
  -------------------------

```

Same Way the the other elements will be sorted.

```

  -------------------------
  |  0  |  3  |  5  |  6  |
  -------------------------

```

