# Programming in C – Operators and Conditional Statements

This repository contains beginner-friendly C programs demonstrating the use of **arithmetic**, **relational**, and **logical operators**, as well as **conditional statements** such as `if`, `else if`, `else`, and **nested if-else**.  
These examples help build a strong foundation in **decision-making and operator concepts** in the C language.

---

## 📘 Topics Covered

1. **Arithmetic Operators**
2. **Relational Operators**
3. **Logical Operators**
4. **If–Else Statement**
5. **If–Else If–Else Ladder**
6. **Nested If–Else Statement**

---

## 🧩 Program List

### 🔹 1. Arithmetic Operators

**File:** `arithmetic_operators.c`

Demonstrates basic arithmetic operations and increment/decrement examples.

```c
#include <stdio.h>

int main() {
    int a = 10, b = 3;

    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);

    int x = 5;
    printf("x = %d\n", x);
    printf("x++ = %d\n", x++);
    printf("After x++ -> x = %d\n", x);
    printf("++x = %d\n", ++x);
    printf("x-- = %d\n", x--);
    printf("After x-- -> x = %d\n", x);
    printf("--x = %d\n", --x);

    return 0;
}
```

---

### 🔹 2. Relational Operators

**File:** `relational_operators.c`

Compares two integers using relational operators and prints boolean results (1 = true, 0 = false).

```c
#include <stdio.h>

int main() {
    int a = 5, b = 10;

    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);
    printf("a > b  : %d\n", a > b);
    printf("a < b  : %d\n", a < b);
    printf("a >= b : %d\n", a >= b);
    printf("a <= b : %d\n", a <= b);

    return 0;
}
```

---

### 🔹 3. Logical Operators

**File:** `logical_operators.c`

Shows how to use logical AND (`&&`), OR (`||`), and NOT (`!`) operators.

```c
#include <stdio.h>

int main() {
    int a = 5, b = 10;

    printf("(a < b) && (b > 0) : %d\n", (a < b) && (b > 0));
    printf("(a > b) && (b > 0) : %d\n", (a > b) && (b > 0));
    printf("(a > b) || (b > 0) : %d\n", (a > b) || (b > 0));
    printf("(a > b) || (b < 0) : %d\n", (a > b) || (b < 0));
    printf("!(a == b) : %d\n", !(a == b));
    printf("!(a < b)  : %d\n", !(a < b));

    return 0;
}
```

---

### 🔹 4. Simple If–Else

**File:** `if_else_basic.c`

Determines whether a number is positive or not.

```c
#include <stdio.h>

int main() {
    int number = 10;

    if (number > 0) {
        printf("Number is positive.\n");
    } else {
        printf("Number is not positive.\n");
    }

    return 0;
}
```

---

### 🔹 5. If–Else If–Else Ladder (Grading System)

**File:** `if_else_ladder.c`

Takes marks as input and displays the grade.

```c
#include <stdio.h>

int main() {
    int marks;

    scanf("%d", &marks);

    if (marks >= 80) {
        printf("Grade: A+\n");
    }
    else if (marks >= 70) {
        printf("Grade: A\n");
    }
    else if (marks >= 60) {
        printf("Grade: B\n");
    }
    else if (marks >= 50) {
        printf("Grade: C\n");
    }
    else {
        printf("Grade: F\n");
    }

    return 0;
}
```

---

### 🔹 6. Nested If–Else (Pass/Fail + Grade)

**File:** `nested_if_else.c`

Checks if a student has passed and assigns a grade using nested conditions.

```c
#include <stdio.h>

int main() {
    int marks;
    scanf("%d", &marks);

    if (marks >= 40) {
        printf("You passed!\n");

        if (marks >= 80) {
            printf("Grade: A+\n");
        }
        else if (marks >= 70) {
            printf("Grade: A\n");
        }
        else if (marks >= 60) {
            printf("Grade: B\n");
        }
        else {
            printf("Grade: C\n");
        }
    } else {
        printf("You failed.\nGrade: F\n");
    }

    return 0;
}
```

---

## ⚙️ **How to Run**

1. Clone the repository:

   ```bash
   git clone https://github.com/monjurBakthMazumder/c-operators-and-conditionals.git
   ```

2. Open a terminal in the project folder.
3. Compile any program using GCC:

   ```bash
   gcc filename.c -o output
   ```

4. Run the program:

   ```bash
   ./output
   ```

---

## 📚 **Learning Outcomes**

- Understand how **arithmetic, relational, and logical operators** work in C.
- Learn to make **decisions using if–else** statements.
- Build logic using **nested conditions**.
- Gain confidence writing beginner-level C programs.

---



# Author

## **Engr. Md Monjur Bakth Mazumder**

🎓 **Secondary School Certificate (SSC) from [Shah Helal High School](https://www.shahhelalhs.edu.bd/)**

🎓 **Diploma in Computer Science and Technology from [Moulvibazar Polytechnic Institute (MPI)](https://mpi.moulvibazar.gov.bd/)**

🎓 **BSc in Computer Science & Engineering (CSE)** _(Ongoing)_ **at [Sylhet International University (SIU)](https://siu.edu.bd/)**

📧 **Email:** monjurmbm404@gmail.com

---

## ⭐ Support the Project

If you found this repository helpful, please consider giving it a **⭐ Star**. It helps others discover the project and motivates future development.

---

## 🌐 Connect with Me

| Platform       | Link                                        |
| -------------- | ------------------------------------------- |
| 💻 GitHub      | https://github.com/monjurmbm404             |
| 💼 LinkedIn    | https://linkedin.com/in/monjurmbm404        |
| 🧩 LeetCode    | https://leetcode.com/u/monjurmbm404         |
| ⚔️ Codeforces  | https://codeforces.com/profile/monjurmbm404 |
| 🍽️ CodeChef    | https://www.codechef.com/users/monjurmbm404 |
| 🏆 VJudge      | https://vjudge.net/user/monjurmbm404        |
| 📘 Facebook    | https://www.facebook.com/monjurmbm404       |
| 🐦 X (Twitter) | https://x.com/monjurmbm404                  |
| ▶️ YouTube     | https://youtube.com/@monjurmbm404           |
| ✍️ Medium      | https://medium.com/@monjurmbm404            |
