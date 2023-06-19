# BINARY SEARCH DATA STRUCTURE

Binary Search is defined as a searching algorithm used in a sorted array by repeatedly dividing the search interval in half. The idea of binary search is to use the information that the array is sorted and reduce the time complexity to O(log N). 

###Conditions for when to apply Binary Search in a Data Structure:

* The data structure must be sorted.
* Access to any element of the data structure takes constant time.

### In this algorithm, 

* Divide the search space into two halves by finding the middle index “mid”. 
* Compare the middle element of the search space with the key. 
* If the key is found at middle element, the process is terminated.
* If the key is not found at middle element, choose which half will be used as the next search space.
* If the key is smaller than the middle element, then the left side is used for next search.
* If the key is larger than the middle element, then the right side is used for next search.
* This process is continued until the key is found or the total search space is exhausted.

### mid = low + (high - low) / 2

**Suppose We have to find 15 from the array:**

```

  ---------------------------------------------------------------------------
  |  2  |  5  |  8  |  20  |  10  | 11  | 16  | 15  | 18  | 19  |  9  |  3  |
  ---------------------------------------------------------------------------

```

We have to sort the array first.

```
         ----------------------------------------------------------------------------
         |  2  |  5  |  8  |  9  |  10  | 13  | 14  | 15  | 18  | 19  |  20  |  30  |
         ----------------------------------------------------------------------------
index  =    0     1     2     3      4      5     6     7     8     9     10    11

```

**On the first step we have to find the mid of the array:**

* mid = 0 + (11 - 0) / 2
* mid = 5.5 ~ 5

```
          L = 0                           M = 5                               H = 11            
         ----------------------------------------------------------------------------
         |  2  |  5  |  8  |  9  |  10  | 13  | 14  | 15  | 18  | 19  |  20  |  30  |
         ----------------------------------------------------------------------------
index  =    0     1     2     3      4      5     6     7     8     9     10    11
  
                                            ^ 
  mid = ____________________________________|
  
```

**Now we will compare if the mid is our value if not then we will find out is our value is less or greater then the mid.**
* is 13 not equal to 15.
* 13 is less then 15 or 13<15.

**Now that we know the value is on the right becouse 13 < 15. Now we take the value after mid and make it the low value and high value will be same.  Now we have to repeat the first two steps.**

* mid = 6 + 11 / 2.
* mid = 8.5 ~ 8

```
                   Non-Active Blocks   
          ____________________________________
         |                                    |  L = 6        M = 5              H = 11            
         --------------------------------------  ---------------------------------------
         |  2  |  5  |  8  |  9  |  10  | 13  |  | 14  | 15  | 18  | 19  |  20  |  30  |
         --------------------------------------  ---------------------------------------
index  =    0     1     2     3      4      5       6     7     8     9     10    11
  
                                                                 ^ 
  mid = _________________________________________________________|


```

**Now we have to check if the value on the mid is equal to the value we are searching. If not we will repeat the steps again.**
* 18 != 15.
* 15 < 18.

Again:
* mid = 6 + 8 / 2.
* mid = 7.

```
                   Non-Active Blocks                                    Non-Active Blocks  
          ____________________________________                         ___________________
         |                                    |  L = 6  M=7  H = 8    |                   |       
         --------------------------------------  -------------------  ---------------------
         |  2  |  5  |  8  |  9  |  10  | 13  |  | 14  | 15  | 18  |  | 19  |  20  |  30  |
         --------------------------------------  -------------------  ---------------------
index  =    0     1     2     3      4      5       6     7     8     9     10    11
  
                                                          ^ 
  mid = __________________________________________________|

```

**This time we found the value at the index 7.**

This is a genaral example of Binary Search Data Structure.

  
  
  
  
