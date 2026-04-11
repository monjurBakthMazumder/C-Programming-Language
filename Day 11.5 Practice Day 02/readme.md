

# 🔢 Frequency Counter in C

This repository contains a **C program** that calculates the **frequency of integers** in a given array. The program allows you to input a list of numbers and outputs how often each number (from `0` to `5`) appears in the list.

This program uses a frequency array to store the count of each number and then prints the results.

---

## 🧠 What is a Frequency Counter?

A **frequency counter** is used to count how many times each element appears in a dataset.
In this case, we are counting the frequency of integers between `0` and `5`.

---

## 📂 Program in This Project

### 🟦 1. **frequency_counter.c**

**Concept:** Count the frequency of numbers in an array.

```c
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Input the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Frequency array initialized to 0
    int fre[6] = {0};

    // Count the frequency of each number
    for (int i = 0; i < n; i++) {
        fre[arr[i]]++;
    }

    // Output the frequency of numbers from 0 to 5
    for (int i = 0; i < 6; i++) {
        printf("%d -> %d\n", i, fre[i]);
    }

    return 0;
}
```

**Example Input:**

```
10
0 1 2 2 3 3 3 4 5 5
```

**Example Output:**

```
0 -> 1
1 -> 1
2 -> 2
3 -> 3
4 -> 1
5 -> 2
```

**Explanation:**

* The program reads an array of integers.
* It then counts how many times each number (from `0` to `5`) appears in the array and prints the result.

---

## 🔑 Key Concepts

| Concept         | Description                                                                  |
| --------------- | ---------------------------------------------------------------------------- |
| Frequency Array | Stores the count of occurrences of each number in a dataset.                 |
| Input           | The program takes `n` as the size of the array and then the array elements.  |
| Output          | The frequency of each number from `0` to `5` is printed.                     |
| Looping         | The program uses loops to iterate through the array and the frequency array. |

---

## ⚙️ How to Compile and Run

```bash
# Compile
gcc frequency_counter.c -o frequency_counter

# Run
./frequency_counter
```

**Example Input:**

```
10
0 1 2 2 3 3 3 4 5 5
```

**Example Output:**

```
0 -> 1
1 -> 1
2 -> 2
3 -> 3
4 -> 1
5 -> 2
```

---

## 🏁 Summary

* This program demonstrates how to calculate the frequency of elements in a given list.
* It uses an array to store counts of specific numbers and prints the results.
* The frequency counter is useful for tasks such as data analysis, statistics, and finding patterns in datasets.

---



# Author

**Engr. Md Monjur Bakth Mazumder**

🎓 Diploma in Computer Science and Technology — [Moulvibazar Polytechnic Institute](https://mpi.moulvibazar.gov.bd/)  
🎓 BSc in Computer Science & Engineering (CSE) (Ongoing) — [Sylhet International University](https://siu.edu.bd/)

📧 Email: monjurmbm404@gmail.com

### ⭐ If you find this helpful, don’t forget to **star** the repository!
