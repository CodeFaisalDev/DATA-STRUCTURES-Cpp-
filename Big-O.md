# Complexity Analysis

In programming programmers offten have two qustions. That is:
How much time dose a algorithm take?
How make space a algorithm need?

# Big-O Notation

“Big O notation is a mathematical notation that describes the limiting behavior of a function when the argument tends towards a particular value or infinity. It is a member of a family of notations invented by Paul Bachmann, Edmund Landau, and others, collectively called Bachmann–Landau notation or asymptotic notation.”

— Wikipedia’s definition of Big O notation

In plain words, Big O notation describes the complexity of your code using algebraic terms.

To understand what Big O notation is, we can take a look at a typical example, O(n²), which is usually pronounced “Big O squared”. The letter “n” here represents the input size, and the function “g(n) = n²” inside the “O()” gives us an idea of how complex the algorithm is with respect to the input size.


### Complexitys in form smallest to largest(n is the size of input)
* CONSTANT TIME = O(1)
* LOGERITHMIC TIME = O(log(n))
* LINEAR TIME = O(n)
* LINEARITHMIC TIME = O(nlog(n))
* QUADRIC TIME = $`O(n^2)`$
* CUBIC TIME = $`O(n^3)`$
* EXPONENTIOA TIME = $`O(b^n)`$
* FACTORIAL TIME = O(n!)

### Big-O properties

* If n is constant then the Big-O will be contsant

Example:

      O(n + c) = O(n)
      O(nc) = O(n)  c > 0     
   
      
If n is adding or subtracting or mlultiplying with constant then the Big-O will remain constant.

* Let f be a function that describe the running time of a perticular program for an input size of n

    $`f(n) = 7log(n)^3 + 15n^2 + 2n^3 + 8`$
    
    $`O(f(n)) = O(n^3)`$      

Here Big-O will be CUBIC TIME. Becouse $`n^3`$ is the largest term in the equation.


## Big-O for constant time:

```
i:=0
while i<11 do
      i = i+1
```
Here Big-O will be constant O(1) becouse we are using a constant value.

## Big-O for Linear time:

```
i:=0
while i<n do
      i=i+1
      
Here : f(n) = n
       O(f(n)) = O(n)

i:=0
while i<n do
      i=i+3

Here : f(n) = n/3
       O(f(n)) = O(n)
```

## Big-O for Quadric time:
Both the equations are qudric $`n*n = n^2`$

```
for(i=0; i<n;i++){
      for(j=0; j<n; j++){
            i = i+1
      }
}
```
For the first example:
$`f(n) = n*n = n^2 O(f(n)) = O(n^2)`$
```
for(i=0; i<n;i++){
      for(j=i; j<n; j++){
            i = i+1
      }
}
```
As for the second example the amount of loop directly depend on the value of i.
so if i = 0 then we do n work if i = 1 then we do (n-1) work. Simillerly for i = 2, i = 3, i = 4 n will be (n-2), (n-3), (n-4). Then the equation will become n + (n-1) + (n-2) + (n-3) + ........ + 3 + 2 + 1. Simplifying this equation and we get.
n(n+1)/2 so the Big-O is $`O(n(n+1)/2) = O(n^2/2 + n/2) = O(n^2)`$

