# Insertion Sort Data Structure

Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands. The array is virtually split into a sorted and an unsorted part. Values from the unsorted part are picked and placed at the correct position in the sorted part.

To sort an array of size N in ascending order iterate over the array and compare the current element (key) to its predecessor, if the key element is smaller than its predecessor, compare it to the elements before. Move the greater elements one position up to make space for the swapped element.

Consider an example: arr[]: {12, 11, 13, 5, 6}

```
-----------------------------------
 |  12  |  11  |  13  |	 5  |	 6  |
-----------------------------------

```
   
First Pass:

* Initially, the first two elements of the array are compared in insertion sort.
* Here, 12 is greater than 11 hence they are not in the ascending order and 12 is not at its correct position. Thus, swap 11 and 12.
* So, for now 11 is stored in a sorted sub-array.

```

Swap___________
               |
    -----------------------------------
    |  12  |  11  |  13  |	 5  |	 6  |
    -----------------------------------
        |
        |_________Swap

After Swap:

    -----------------------------------
    |  11  |  12  |  13  |	 5  |	 6  |
    -----------------------------------
        
```

Second Pass:

* Now, move to the next two elements and compare them.
* Here, 13 is greater than 12, thus both elements seems to be in ascending order, hence, no swapping will occur. 12 also stored in a    sorted sub-array along with 11.

```

No Swap________
               |
    -----------------------------------
    |  11  |  12  |  13  |	 5  |	 6  |
    -----------------------------------
                    |
                    |_________No Swap
   
```

Third Pass:

* Now, two elements are present in the sorted sub-array which are 11 and 12
* Moving forward to the next two elements which are 13 and 5

```
      Swap___________
                     |
    -----------------------------------
    |  11  |  12  |  13  |	 5  |	 6  |
    -----------------------------------
                            |
                            |_________Swap

After Swap:

    -----------------------------------
    |  11  |  12  |  5  |	 13  |	 6  |
    -----------------------------------
        
```

* After swapping, elements 12 and 5 are not sorted, thus swap again

```
 Swap__________
               |
    -----------------------------------
    |  11  |  12  |  5  |	 13  |	 6  |
    -----------------------------------
                      |
                      |_________Swap

After Swap:

    -----------------------------------
    |  11  |  5  |  12  |	 13  |	 6  |
    -----------------------------------
        
```

* Here, again 11 and 5 are not sorted, hence swap again

```
Swap_____
         |
    -----------------------------------
    |  11  |  5  |  12  |	 13  |	 6  |
    -----------------------------------
                |
                |_________Swap

After Swap:

    -----------------------------------
    |  5  |  11  |  12  |	 13  |	 6  |
    -----------------------------------
        
```

Fourth Pass:

* Now the same loop will repet for 5th element untill it is on the right place.

```
                   Swap_____
                            |
    -----------------------------------
    |  5  |  11  |  12  |	 13  |	 6  |
    -----------------------------------
                                  |
                                  |_________Swap

            Swap_____
                     |
    ----------------------------------
    |  5  |  11  |  12  |	 6  |	 13  |
    ----------------------------------
                            |
                            |_________Swap
                            


      Swap_____
               |
    ----------------------------------
    |  5  |  11  |  6  |	 12  |	 13  |
    ----------------------------------
                      |
                      |_________Swap

After Swap:

    -----------------------------------
    |  5  |  6  |  11  |	 12  |	13  |
    -----------------------------------
        
```
