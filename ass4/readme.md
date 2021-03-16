# Assignment - 4


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
Given two integers m & n, find the number of possible sequences of length n such that each of the next element is greater than or equal to twice of the previous element but less than or equal to m.

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
Enter value of M : 10
Enter value of N : 4
```
Output : 
```
Total Number of such sequnces are 4
```
---




## Theory
The total number of sequences is the sum of the numberof sequences including m and the number of sequenceswhere m is not included. Thus   the   original   problem   of   finding   number   of sequences   of   length   N   with   max   value   M   can   besubdivided  into  independent  sub  problems  of  finding number  of  sequences  of  length  N  with  max  value  M-1and number of sequences of length N-1 with max value M/2.

---

## Analysis

* **Time Complexity :** The time complexity of the solution using DP is ``` O(M*N) ``` as it is the time required for filling the DP array of size M*N.
    #### Overall Time complexity :
    1. **In Worst Case** : ```O(M*N)```
    2. **In Best Case** : ```Ω(M*N)```


* **Space Complexity :**
Here, the DP array will use ```O(M*N)``` space.
    #### Overall Space complexity :
    1. **In Worst Case** : ```O(M*N)```
    2. **In Best Case** : ```Ω(M*N)```

---

## References

1. *Introduction to Algorithms ( T.H Cormen )*
2. https://www.geeksforgeeks.org/sequences-given-length-every-element-equal-twice-previous/ 

3. https://tutorialspoint.dev/algorithm/dynamic-programming-algorithms/sequences-given-length-every-element-equal-twice-previous


---

## Download project

```
git clone https://github.com/utkarshgarg123/daa.git/
```
