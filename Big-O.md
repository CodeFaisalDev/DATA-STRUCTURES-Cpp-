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

Here Big-O will be CUBIC TIME. Becouse n^3 is the largest term in the equation.
