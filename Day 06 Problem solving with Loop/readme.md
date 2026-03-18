
# C Programming Practice

This repository contains two simple C programs designed to help beginners understand two important programming concepts:

1. **Pre-increment and Post-increment Operators**
2. **Nested Loops (Pattern Printing)**

---

## 🧠 1. Pre-Increment and Post-Increment Operators
**File name:** `pre_post_increment.c`

### 🔍 Description:
This program demonstrates how **pre-increment (`++a`)** and **post-increment (`a++`)** operators work differently in C.

### 📘 Code Explanation:
```c
int a = 5, b = 5;
int preResult, postResult;

preResult = ++a;  // a becomes 6 first, then preResult = 6
postResult = b++; // postResult = 5 first, then b becomes 6
````

* **Pre-Increment (`++a`)**: Increases the value **before** using it.
* **Post-Increment (`a++`)**: Uses the value **first**, then increases it.

### 🧩 Output Example:

```
After pre-increment:
a = 6, preResult = 6

After post-increment:
b = 6, postResult = 5
```

### 🎯 Key Takeaway:

| Operator | Action Order    | Example             | Result                  |
| -------- | --------------- | ------------------- | ----------------------- |
| `++a`    | Increment → Use | `preResult = ++a;`  | `a = 6, preResult = 6`  |
| `a++`    | Use → Increment | `postResult = b++;` | `b = 6, postResult = 5` |

---

## 🌟 2. Nested Loop – Star Pattern

**File name:** `nested_loop_pattern.c`

### 🔍 Description:

This program prints a right-angled triangle pattern using **nested loops**.

### 📘 Code Explanation:

```c
for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= i; j++) {
        printf("* ");
    }
    printf("\n");
}
```

* **Outer Loop (`i`)** → Controls the number of rows.
* **Inner Loop (`j`)** → Controls how many `*` are printed in each row.

### 🧩 Output Example:

```
* 
* * 
* * * 
* * * * 
* * * * * 
```

### 🎯 Key Takeaway:

* **Nested loops** are loops inside another loop.
* The **inner loop** runs completely for each iteration of the **outer loop**.
* Useful for patterns, matrices, and 2D structures.

---

## 🛠️ How to Run

1. Save the code into files named:

   * `pre_post_increment.c`
   * `nested_loop_pattern.c`

2. Compile using GCC:

   ```bash
   gcc pre_post_increment.c -o pre_post_increment
   gcc nested_loop_pattern.c -o nested_loop_pattern
   ```

3. Run the executables:

   ```bash
   ./pre_post_increment
   ./nested_loop_pattern
   ```

---

## 📚 What You’ll Learn

* Difference between **pre-increment** and **post-increment**
* How **nested loops** work
* Basic structure of a **C program**
* Use of **comments** for clarity

---

# Author

**Engr. Md Monjur Bakth Mazumder**

🎓 Diploma in Computer Technology — [Moulvibazar Polytechnic Institute](https://mpi.moulvibazar.gov.bd/)  
🎓 BSc in CSE (Running) — [Sylhet International University](https://siu.edu.bd/)

📧 Email: monjurmbm404@gmail.com

### ⭐ If you find this helpful, don’t forget to **star** the repository!