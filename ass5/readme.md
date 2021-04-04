# Assignment - 5


**Team Members**

|  Enrollment No |   Name         | GithubId        |
 --------------  |   ----         | --------        |
|    IIT2019024  |   Swaraj Bhosle| Rio-321         |
|    IIT2019025  |   Ritesh Raj   | ritesh1731      | 
|    IIT2019026  |   Utkarsh Garg | Utkarshgarg123  |

\
**Group No :** 8

**Faculty Name :** Md. Javed

**Mentor Name :** Md. Meraz

---
## Problem Statement
Find the maximum length snake sequence


---
## How to use code
To use this code on your computer, just clone this repository on your system, after which you can look all the resources such as report, ppt and c++ implementation of this problem statement. Just open GitBash in the folder where you want to clone the repo.


Run the code
```
g++ main.cpp
./a.out
```

Input : 
```
Enter size of 2-D array : 3 X 3 
Enter the elements : 1 2 3
                     4 5 6
                     7 8 9


```
Output : 
```
LENGTH OF LONGEST SNAKE SEQUENCE
```
---




## Theory
A matrix of integers of size n*m is given, our algorithm should find the longest snake sequence from the matrix. If
there exist many, it should print any one. There are some
constraints for making snake sequence,
  * snake sequence is made up of adjacent numbers in the
    grid.
  * for each number, adjacent number on the right or below
    should be +1 or -1 of its value.

Matrix: Two dimensional arrays are called matrices. Dynamic
Programming: It is an algorithmic technique for solving
an optimization problem by breaking it down into simpler
sub-problems and utilizing the fact that the optimal solution
to the overall problem depends upon the optimal solution to
its sub-problems.


---

## Analysis

* **Time Complexity :**  e have found out time complexity to be: ``` O(n*m) ```, as total
number of comparisons will be in the order of ``` O(n*m) ```.


    #### Overall Time complexity :
    1. **In Worst Case** : ``` O(n*m) ```
    2. **In Best Case** : ``` O(n*m) ```


* **Space Complexity :**
Since, we will need 2 two-dimensional arrays of size n*m
i.e. ``` O(n*m) ```, and other variables require constant space. So,
overall space complexity is ``` O(n*m) ```.


---

## References

1. https://www.geeksforgeeks.org/find-maximum-length-snake-sequence/
2. https://en.wikipedia.org/wiki/Dynamics
3. https://www.javatpoint.com/dynamic-programming-introduction

---

## Download project

```
git clone https://github.com/utkarshgarg123/daa.git/
```
