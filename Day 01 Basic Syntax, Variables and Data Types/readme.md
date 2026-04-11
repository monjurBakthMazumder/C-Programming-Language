# 💻 C Programming – Basics and Fundamentals

Welcome to **C Programming – Basics and Fundamentals** 🎉  
This repository is designed especially for beginners who want to learn C from the ground up — step by step, with simple explanations and examples.

Here you’ll learn everything from **writing your first program** to understanding **variables, data types, printing, taking input**, and more.

If you’re new to programming — don’t worry!  
By the end of this repo, you’ll understand how C programs work and feel confident writing your own. 🚀

---

## 🧩 What You’ll Learn

### 🧱 1. Basic Structure of a C Program

Every C program has a simple structure. Think of it like the _skeleton_ of your code.

```c
#include <stdio.h>  // This tells the compiler to include the standard input/output library

int main() {        // This is where your program starts running
    // Your code goes here
    return 0;       // This ends the program successfully
}
```

🧠 **Explanation:**

- `#include <stdio.h>` allows you to use functions like `printf()` and `scanf()`.
- `int main()` is the main function — the heart of every C program.
- `{ }` are used to group code together.
- `return 0;` means “program executed successfully.”

---

### 👋 2. Your First C Program

Let’s write your very first program in C — the legendary **Hello, World!**

```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

🧠 **Explanation:**

- `printf()` is used to print text on the screen.
- `\n` means a new line.

🖥️ **Output:**

```
Hello, World!
```

✨ Congratulations! You just wrote your first C program!

---

### ⚙️ 3. How to Run a C Program

After writing your C code, you need to **compile** it (turn it into machine code) before it runs.

If you are using a terminal (like on Linux or macOS):

```bash
gcc filename.c -o output
./output
```

🧠 **What happens here:**

- `gcc` = C compiler (GNU Compiler Collection)
- `filename.c` = your source file
- `-o output` = name for the compiled file
- `./output` = run your program

💡 **Tip:**
If you’re on Windows, you can use an IDE like **Code::Blocks** or **Dev-C++** — they compile and run automatically.

---

### 🖨️ 4. Printing in C

To show information on screen, use the **printf()** function.

```c
printf("I am learning C programming!\n");
```

🧠 You can print both **text** and **numbers**:

```c
int age = 20;
printf("I am %d years old.\n", age);
```

🖥️ Output:

```
I am 20 years old.
```

💡 `%d` is a **format specifier** — it tells C to print an integer.

---

### 📦 5. Variables and Data Types

Variables are like **containers** that hold information.
Each variable has a _type_, a _name_, and a _value_.

Example:

```c
int age = 20;
float height = 5.9;
char grade = 'A';
```

🧠 **Common Data Types:**

| Type     | Example | Description                |
| -------- | ------- | -------------------------- |
| `int`    | 25      | Whole numbers              |
| `float`  | 3.14    | Numbers with decimals      |
| `char`   | 'A'     | Single character           |
| `double` | 10.5678 | Big floating point numbers |

💡 `float` can store around 6 decimal digits, while `double` can store about 15.

---

### 🧾 6. Printing Variables

You can print variable values using `printf()` with **format specifiers**.

Example:

```c
int age = 21;
float gpa = 3.75;
char grade = 'A';

printf("Age: %d\n", age);
printf("GPA: %.2f\n", gpa);
printf("Grade: %c\n", grade);
```

🖥️ **Output:**

```
Age: 21
GPA: 3.75
Grade: A
```

💡 `%.2f` prints a float with 2 decimal places.

---

### ✅ 7. Boolean in C

C didn’t originally have a boolean data type.
But now you can use it easily with:

```c
#include <stdbool.h>

bool isPassed = true;
printf("Result: %d\n", isPassed);
```

🖥️ Output:

```
Result: 1
```

Here, `1` means `true` and `0` means `false`.

---

### ⌨️ 8. Taking Input from User

You can take input using the `scanf()` function.

Example:

```c
int age;
printf("Enter your age: ");
scanf("%d", &age);
printf("You entered: %d\n", age);
```

🧠 **Remember:**
Use `&` before the variable name — it tells the compiler **where to store the value**.

---

### ⚖️ 9. Data Type Limitations

Each data type in C has a **fixed size and range**.
If you try to store a number outside that range, it causes an **overflow**.

| Data Type | Size    | Range                           |
| --------- | ------- | ------------------------------- |
| `char`    | 1 byte  | -128 to 127                     |
| `int`     | 4 bytes | -2,147,483,648 to 2,147,483,647 |
| `float`   | 4 bytes | ~6 decimal digits               |
| `double`  | 8 bytes | ~15 decimal digits              |

💡 **Example:**

```c
char x = 130; // Out of range
printf("%d", x); // Output may be unexpected
```

---

### 🧠 10. Rules for Naming Variables

When naming variables, follow these rules:

✅ Start with a **letter** or **underscore**
✅ Use only letters, numbers, and underscores
❌ No spaces or special symbols
❌ Don’t use reserved keywords like `int`, `return`, `if`

Example:

```c
int student_age = 20;  // ✅ valid
int 2ndStudent = 25;   // ❌ invalid
```

💡 **Tip:** Use meaningful names — `studentAge` is better than `a1`.

---

## ⚙️ How to Run Your Code (Quick Steps)

1. **Install GCC compiler**
   - Linux/macOS: already installed or use `sudo apt install gcc`
   - Windows: install [Code::Blocks](https://www.codeblocks.org/)

2. **Write your code**
   Save your file as `program.c`
3. **Compile and run**

   ```bash
   gcc program.c -o output
   ./output
   ```

4. ✅ See your output on screen!

---


# Author

**Engr. Md Monjur Bakth Mazumder**

🎓 Diploma in Computer Science and Technology — [Moulvibazar Polytechnic Institute](https://mpi.moulvibazar.gov.bd/)  
🎓 BSc in Computer Science & Engineering (CSE) (Ongoing) — [Sylhet International University](https://siu.edu.bd/)

📧 Email: monjurmbm404@gmail.com

### ⭐ If you find this helpful, don’t forget to **star** the repository!
