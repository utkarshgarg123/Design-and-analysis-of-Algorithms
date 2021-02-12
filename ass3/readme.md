# Assignment - 3


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
Design an algorithm to implement ternary search.

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
Enter size of array : 5
Enter the array elements : 2 7 32 9 12
Enter element to be searched for : 9

```
Output : 
```
Element 9 found in array
[Finished in 0.3s] 
```
---




## Theory
Ternary search is a divide and conquer algorithm that can be used to find an element in an array, we divide the given array into three parts and determine which has the key. We can divide the array into three parts by taking mid1 and mid2 and subsequently comparing it with key. Initially, l and r will be equal to 0 and n-1 respectively, where n is the length of the array. 

---

## Analysis

* **Time Complexity :** Firstly, sorting using merge will take ``` O(NLog(N)) ``` time .In ternary search, as the length in wich we have to search for decreases by 1/3 in each recursive call so  worst case time complexity will be : O(Log<sub>3</sub>(n)) .

    #### Overall Time complexity :
    1. **In Worst Case** : ```O(NLog(N))```
    2. **In Best Case** : ```Ω(NLog(N))```


* **Space Complexity :**
Here, merge sort will use ```O(N)``` space.\
Ternary search will use ```O(Log3(N))``` in stack due to recursive calls.
    #### Overall Space complexity :
    1. **In Worst Case** : ```O(N)```
    2. **In Best Case** : ```Ω(N)```

---

## References

1. *Introduction to Algorithms ( T.H Cormen )*
2. https://en.wikipedia.org/wiki/Ternary_search
3. https://www.geeksforgeeks.org/ternary-search/

---

## Download project

```
git clone https://github.com/utkarshgarg123/daa.git/
```
