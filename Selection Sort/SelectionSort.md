# SELECTION SORT DATA STRUCTURE

Selection sort is a simple and efficient sorting algorithm that works by repeatedly selecting the smallest (or largest) element from the unsorted portion of the list and moving it to the sorted portion of the list. 

The algorithm repeatedly selects the smallest (or largest) element from the unsorted portion of the list and swaps it with the first element of the unsorted part. This process is repeated for the remaining unsorted portion until the entire list is sorted.

**Lets consider the following array as an example: arr[] = {55, 23, 15, 20, 11}**

**First pass:**

```
              Swapping Element
          _______________________
         |                       |
      -------------------------------
      | 55  | 23  | 15  | 20  | 11  |
      -------------------------------
         |                      |
     Position To             Min Element     
     Hold Min element
     
```

* For the first position in the sorted array, the whole array is traversed from index 0 to 4 sequentially. The first position where 55 is  stored presently, after traversing whole array it is clear that 11 is the lowest value.
* Thus, replace 55 with 11. After one iteration 11, which happens to be the least value in the array, tends to appear in the first        position of the sorted list.

**Second Pass:**

```

Already Sorted                  Swapping Element
  |______        ______________________|
        |       |    |
      ------|------------------------
      | 11  | 23  | 15  | 20  | 55  |
      ------|------------------------
              |      |__________________
              |                        | 
          Position To             Min Element     
        Hold Min element

```

* For the second position, where 23 is present, again traverse the rest of the array in a sequential manner.
* After traversing, we found that 15 is the second lowest value in the array and it should appear at the second place in the array, thus swap these values.

**Third Pass:**

```
Already Sorted                  Swapping Element
  |_____________       _________________|
        |      |      |    |
      ------------|------------------
      | 11  | 15  | 23  | 20  | 55  |
      ------------|------------------
                     |     |__________________
                     |                        | 
                Position To             Min Element     
             Hold Min element

```

* Now, for third place, where 23 is present again traverse the rest of the array and find the third least value present in the array.
* While traversing, 20 came out to be the third least value and it should appear at the third place in the array, thus swap 20 with element present at third position.

**Fourth pass:**

```

Already Sorted                          Min Element 
  |____________________     _________________|
        |      |      |    |         _____
      ------------------|------------     |
      | 11  | 15  | 20  | 23  | 55  |     | Hence
      ------------------|------------     | Sortig
                           |         _____|
                           | 
                      Position To                 
                  Hold Min element
                  
```

* Similarly, for fourth position traverse the rest of the array and find the fourth least element in the array 
* As 23 is the 4th lowest value hence, it will place at the fourth position.

**Fifth Pass:**

```

      -------------------------------
      | 11  | 15  | 20  | 23  | 55  |
      -------------------------------
               Sorted Array
               
```

* At last the largest value present in the array automatically get placed at the last position in the array
* The resulted array is the sorted array.
