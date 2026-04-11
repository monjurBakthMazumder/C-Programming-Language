
# 🌀 C Programming – Loop Examples

This repository contains beginner-friendly C programs demonstrating the use of different loop structures such as:

- **for loops**
- **while loops**
- **do-while loops**
- Control statements like **break** and **continue**

These examples are designed to help learners understand how loops work and how to control loop execution using conditions.

---

## 📚 Topics Covered

1. **For Loop**
2. **While Loop**
3. **Do-While Loop**
4. **Break Statement**
5. **Continue Statement**

---

## 🧩 Program List

### 🔹 1. For Loop with Break Statement

**File:** `for_loop_break.c`

Stops the loop when a certain condition is met.

```c
#include <stdio.h>

int main() {
    int i, n;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i == 5) {
            break; // stop the loop when i is 5
        }
        printf("%d\n", i);
    }

    printf("Loop ended at i = %d\n", i);

    return 0;
}
````

---

### 🔹 2. For Loop with Continue Statement

**File:** `for_loop_continue.c`

Skips an iteration when a certain condition is true.

```c
#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            continue; // skip when i is 5
        }
        printf("%d\n", i);
    }

    return 0;
}
```

---

### 🔹 3. Do-While Loop

**File:** `do_while_loop.c`

Executes the loop body at least once before checking the condition.

```c
#include <stdio.h>

int main() {
    int i = 1;
    int n;

    scanf("%d", &n);

    do {
        printf("%d\n", i);
        i++;
    } while (i <= n);

    return 0;
}
```

---

### 🔹 4. Even and Odd Checker with For Loop

**File:** `even_odd_for_loop.c`

Checks whether numbers entered by the user are even or odd.

```c
#include <stdio.h>

int main() {
    int i, n, number;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        scanf("%d", &number);

        if (number % 2 == 0) {
            printf("%d is even.\n", number);
        } else {
            printf("%d is odd.\n", number);
        }
    }

    return 0;
}
```

---

### 🔹 5. Simple For Loop Example

**File:** `simple_for_loop.c`

Prints numbers from 1 to 10.

```c
#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 10; i++) {
        printf("Number: %d\n", i);
    }

    return 0;
}
```

---

### 🔹 6. Sum of Numbers using For Loop

**File:** `sum_for_loop.c`

Calculates the sum of numbers from 1 to a given number.

```c
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += i; // sum = sum + i
    }

    printf("Sum of numbers from 1 to %d is %d\n", n, sum);

    return 0;
}
```

---

### 🔹 7. While Loop Example

**File:** `while_loop.c`

Prints numbers from 1 to a given number.

```c
#include <stdio.h>

int main() {
    int i = 1;
    int n;

    scanf("%d", &n);

    while (i <= n) {
        printf("%d\n", i);
        i++;
    }

    return 0;
}
```

---

## ⚙️ How to Run

1. Clone the repository:

   ```bash
   git clone https://github.com/monjurBakthMazumder/c-loop.git
   ```
2. Navigate to the project folder.
3. Compile a C file using GCC:

   ```bash
   gcc filename.c -o output
   ```
4. Run the program:

   ```bash
   ./output
   ```

---

## 📚 Learning Outcomes

* Understand **for, while, and do-while loops**.
* Learn how to use **break** and **continue** statements.
* Develop logic for looping and conditional execution.
* Practice reading user input and processing data using loops.

---


# Author

**Engr. Md Monjur Bakth Mazumder**

🎓 Diploma in Computer Science and Technology — [Moulvibazar Polytechnic Institute](https://mpi.moulvibazar.gov.bd/)  
🎓 BSc in Computer Science & Engineering (CSE) (Ongoing) — [Sylhet International University](https://siu.edu.bd/)

📧 Email: monjurmbm404@gmail.com

### ⭐ If you find this helpful, don’t forget to **star** the repository!