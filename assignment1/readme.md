# Assignment-1

**Team Members**
|  Enrollment No |   Name         | GithubId        |
 --------------  |   ----         | --------        |
|    IIT2019024  |   Swaraj Bhosle| Rio-321         |
|    IIT2019025  |   Ritesh Raj   | ritesh1731      | 
|    IIT2019026  |   Utkarsh Garg | Utkarshgarg123  |

**Group No-**"8"

**Faculty Name-**"Md. Javed sir"

**Mentor Name-** "Md. Meraz"

---
## Problem Statement# Assignment-1

**Team Members**
|  Enrollment No |   Name         | GithubId        |
 --------------  |   ----         | --------        |
|    IIT2019024  |   Swaraj Bhosle| Rio-321         |
|    IIT2019025  |   Ritesh Raj   | ritesh1731      | 
|    IIT2019026  |   Utkarsh Garg | Utkarshgarg123  |

**Group No-**"8"

**Faculty Name-**"Md. Javed"

**Mentor Name-** "Md. Meraz"

---
## Problem Statement
Sort a matrix such that ecery row, column and diagnola are sorted

---
## How to use code
<br> To use this code on your computer, just clone this repository on your system, after which you can look all the resources such as report, ppt and c++ implementation of this problem statement. Just GitBash in the folder where you want to clone the repo and download it-
```
#Download project
https://github.com/utkarshgarg123/daa.git

```

---

Run the code
```
gcc main.c
./a.out
```

Initial matrix is : 
```
94 85 95 61 57 95 57 29 65 49 
90 6 28 54 89 53 6 85 73 49 
69 15 82 7 55 39 72 20 3 62 
15 86 61 91 55 87 99 71 45 42 
32 84 46 44 79 90 22 38 5 30 
79 56 18 3 40 73 81 94 4 99 
77 99 7 54 10 61 26 72 25 68 
94 88 33 9 51 55 99 61 18 74 
15 67 69 49 22 76 21 55 46 56 
60 28 13 70 89 3 7 91 13 32 
```
Sorted matrix is : 
```

 3 3 3 4 5 6 6 7 7 7 
9 10 13 13 15 15 15 18 18 20 
21 22 22 25 26 28 28 29 30 32 
32 33 38 39 40 42 44 45 46 46 
49 49 49 51 53 54 54 55 55 55 
55 56 56 57 57 60 61 61 61 61 
62 65 67 68 69 69 70 71 72 72 
73 73 74 76 77 79 79 81 82 84 
85 85 86 87 88 89 89 90 90 91 
91 94 94 94 95 95 99 99 99 99 
[Finished in 0.3s] 

```
---




### Theory
We are given a matrix with random entries and then we have to output a matrix which is sorted
row wise, column wise and diagonally, we can do so by taking a 1D array and coping all the entries of the matrix to 1D array, then we sort the array
using merge sort.Now we can just copy back the elements of thesorted array to matrix. This algorithm works as when we put back the sorted array and put back
the elements row wise, all the elements in particular row are sorted and afterwards wh


---

### Analysis

**Time Complexity**
<br>
Firstly, iterating over all the different lengths (here it is 11) -> O(n)<br>
Then, we iterate over all permutations of a particular length which gives O(n!) in worst case and Ω(1) in best case, inside which we do two things, check if sorted and to find the next permutation.<br>
Time complexity of sort check -> O(n) (worst case), Ω(1) (best case)<br>
Time complexity of next permutation algorithm -> O(n)<br>
Overall Time complexity :   
In Worst Case : O(n . n! . (n+n)) ≃ O(n2 .n!)
<br>In Best Case : Ω(n . 1 . (n+1) ≃ O(n2 )


**Space Complexity**
<br>Here, two arrays are there, visited array and permutation array, so space complexity would be O(n+n) ≃ O(n).


---

### References

Introduction to Algorithms (T.H Cormen)<br>
https://en.wikipedia.org/wiki/Permutation<br>
https://codeforces.com/problemset/customtest

Sort a matrix such that ecery row, column and diagnola are sorted


```
#Download project
git clone https://github.com/utkarshgarg123/daa/assignment1
```
