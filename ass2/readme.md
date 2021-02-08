

---
## Problem Statement# Assignment-2

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
How many valid English words have ascending or descending
characters? Create a text document of your own consisting of at
least 1000 words for input.

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
g++ main.cpp
./a.out
```

Input file : 
```
input.txt
```
output : 
```
The number of words in ascending or descending order are : 97
[Finished in 0.3s] 
```
---




### Theory
We are using a file system in our algorithm as our input is stored in the file. Our algorithm will first of all read the input from the txt file. We have created the “input.txt” file and all the input strings are inside this file, then sorting is applied on the string in asending and descending order after which if any of the resultant string matches with input string we increment the count.

---

### Analysis

**Time Complexity**
<br>
Firstly, iterating over all the different lengths (here it is 11) -> O(n)<br>
Then, we iterate over all strings and sort them in ascendig and descending order using merge sort which gives O(n*Log(n)) in worst case and in best case, after which which we compare that if resultant string matches with input string.\
**Time complexity of sorting using merge sort** : O(nLog(n)) (worst case), Ω(nlog(n)) (best case)\

### Overall Time complexity :
**In Worst Case** : O(nLog(n))\
**In Best Case** : Ω(nLog(n))


**Space Complexity**
<br>Here, two seperate arrays are there, so space complexity would be O(n+n) ≃ O(n).

---

### References

Introduction to Algorithms (T.H Cormen)\
https://en.wikipedia.org/wiki/Merge_sort\



```
#Download project
git clone https://github.com/utkarshgarg123/daa/ass2
```
