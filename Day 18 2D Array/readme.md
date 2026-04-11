# 🔢 2D Arrays in C

This repository contains simple and beginner-friendly C programs that demonstrate how **2D arrays** (matrices) work in C.

You will learn:

* Why we need 2D arrays
* What a 2D array is
* How to declare, input, and output a 2D array
* How to print a specific row or column
* Different types of matrices
* How to check for square matrix, zero matrix, diagonal matrices, and more

---

# 🧠 Why We Need 2D Arrays

A 2D array helps store data in **rows and columns**, just like a table or matrix.

We need 2D arrays when:

* Handling grid-based data (chessboard, tic-tac-toe)
* Storing tabular data (marks of students, matrices)
* Performing matrix operations (addition, multiplication)
* Working with images, maps, dynamic programming tables, etc.

A simple 1D array is not enough to represent this structure, so we use **2D arrays**.

---

# 📘 What is a 2D Array?

A **2D array** is an array of arrays.

Example (3 rows, 4 columns):

```
10 20 30 40
50 60 70 80
90 100 110 120
```

Mathematically, it behaves like a **matrix (m × n)**.

---

# 🏷 Declaring a 2D Array

Syntax:

```c
data_type array_name[rows][columns];
```

Example:

```c
int a[3][4];   // 3 rows, 4 columns
```

---

# ⌨️ Input and Output of a 2D Array

### 🔹 Input

```c
for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
        scanf("%d", &a[i][j]);
    }
}
```

### 🔹 Output

```c
for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
        printf("%d ", a[i][j]);
    }
    printf("\n");
}
```

---

# 🎯 Printing a Specific Row and Column

### 📌 Print row `r`

```c
for (int j = 0; j < c; j++) {
    printf("%d ", a[r][j]);
}
```

### 📌 Print column `c`

```c
for (int i = 0; i < r; i++) {
    printf("%d ", a[i][c]);
}
```

---

# 🧮 Types of Matrices

| Type                | Description               |
| ------------------- | ------------------------- |
| **Row Matrix**      | Only one row (1 × n)      |
| **Column Matrix**   | Only one column (n × 1)   |
| **Square Matrix**   | Rows = Columns (n × n)    |
| **Zero Matrix**     | All elements are zero     |
| **Diagonal Matrix** | Non-diagonal elements = 0 |
| **Identity Matrix** | Diagonal = 1, others = 0  |
| **Scalar Matrix**   | Diagonal = same number    |

---

# 🔍 Checking Row, Column, and Square Matrix

### ✔ Row Matrix (1 × n)

```c
if (rows == 1) printf("Row matrix");
```

### ✔ Column Matrix (n × 1)

```c
if (cols == 1) printf("Column matrix");
```

### ✔ Square Matrix (n × n)

```c
if (rows == cols) printf("Square matrix");
```

---

# 🟦 Checking Zero Matrix

A **zero matrix** contains only 0.

```c
int flag = 1;

for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
        if (a[i][j] != 0) {
            flag = 0;
            break;
        }
    }
}

if (flag) printf("Zero Matrix");
else printf("Not Zero Matrix");
```

---

# 🔷 Checking Primary Diagonal Matrix

Primary diagonal → `i == j`

Matrix must be square.

```c
int flag = 1;

if (r == c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (i != j && a[i][j] != 0) {
                flag = 0;
            }
        }
    }
}

if (flag) printf("Primary Diagonal Matrix");
else printf("Not Primary Diagonal Matrix");
```

---

# 🔶 Checking Secondary Diagonal Matrix

Secondary diagonal → `i + j == n - 1`

```c
int flag = 1;

if (r == c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (i + j != r - 1 && a[i][j] != 0) {
                flag = 0;
            }
        }
    }
}

if (flag) printf("Secondary Diagonal Matrix");
else printf("Not Secondary Diagonal Matrix");
```

---

# 🏁 Summary

* A 2D array stores data in **rows and columns**
* Used for matrix operations, tables, grids, etc.
* Easy to input/output using nested loops
* You can check matrix types like:

  * Row matrix
  * Column matrix
  * Square matrix
  * Zero matrix
  * Primary & secondary diagonal matrix
* 2D arrays are fundamental for higher-level algorithms (DP, graphs, image processing)

---


# Author

**Engr. Md Monjur Bakth Mazumder**

🎓 Diploma in Computer Science and Technology — [Moulvibazar Polytechnic Institute](https://mpi.moulvibazar.gov.bd/)  
🎓 BSc in Computer Science & Engineering (CSE) (Ongoing) — [Sylhet International University](https://siu.edu.bd/)

📧 Email: monjurmbm404@gmail.com

### ⭐ If you find this helpful, don’t forget to **star** the repository!