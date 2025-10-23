
# 🔡 String Comparison, Concatenation & Copy in C

This repository contains **simple and beginner-friendly C programs** that demonstrate **string comparison, concatenation, and copying** using both **built-in string functions** and **manual logic**.

These examples will help you understand how strings work internally in C and how to manipulate them step by step.

---

## 🧠 What is a String in C?

A **string** in C is an array of characters terminated by a **null character (`'\0'`)**.
Strings are stored in contiguous memory and can be manipulated using functions from the **`<string.h>`** library.

**Example:**

```c
char name[10] = "HELLO";
```

---

## 📂 Programs in This Project

### 🟦 1. **string_compare_builtin.c**

**Concept:** Compare two strings using the built-in `strcmp()` function.

```c
#include <stdio.h>
#include <string.h>

int main() {
    char a[101], b[101];
    scanf("%s %s", &a, &b);

    int val = strcmp(a, b);

    if (val == 0) {
        printf("Equal");
    } else if (val > 0) {
        printf("B is Small");
    } else if (val < 0) {
        printf("A is Small");
    }

    return 0;
}
```

**Example Input:**

```
apple banana
```

**Example Output:**

```
A is Small
```

**Explanation:**

* `strcmp(a, b)` compares two strings lexicographically.
* Returns `0` if equal, a **positive value** if `a > b`, and a **negative value** if `a < b`.

---

### 🟩 2. **string_compare_manual.c**

**Concept:** Compare two strings **manually** using a loop.

```c
#include <stdio.h>

int main() {
    char a[101], b[101];
    scanf("%s %s", &a, &b);

    int i = 0;
    while (1) {
        if (a[i] == '\0' && b[i] == '\0') {
            printf("Equal");
            break;
        } else if (a[i] == '\0') {
            printf("A is smaller");
            break;
        } else if (b[i] == '\0') {
            printf("B is smaller");
            break;
        } else if (a[i] < b[i]) {
            printf("A is smaller");
            break;
        } else if (a[i] > b[i]) {
            printf("B is smaller");
            break;
        } else {
            i++;
        }
    }

    return 0;
}
```

**Example Input:**

```
dog cat
```

**Example Output:**

```
B is smaller
```

**Explanation:**
This program compares each character one by one until a difference is found or both strings end.

---

### 🟨 3. **string_concat_builtin.c**

**Concept:** Concatenate (join) two strings using `strcat()`.

```c
#include <stdio.h>
#include <string.h>

int main() {
    char a[101], b[101];
    scanf("%s %s", &a, &b);

    strcat(a, b);

    printf("%s %s", a, b);

    return 0;
}
```

**Example Input:**

```
Hello World
```

**Example Output:**

```
HelloWorld World
```

**Explanation:**
`strcat()` appends the contents of `b` to the end of `a`.

---

### 🟧 4. **string_concat_manual.c**

**Concept:** Concatenate two strings manually without using library functions.

```c
#include <stdio.h>
#include <string.h>

int main() {
    char a[101], b[101];
    scanf("%s %s", &a, &b);

    int length_a = strlen(a);
    int length_b = strlen(b);

    for (int i = 0; i <= length_b; i++) {
        a[i + length_a] = b[i];
    }

    printf("%s %s", a, b);
    return 0;
}
```

**Example Input:**

```
Good Morning
```

**Example Output:**

```
GoodMorning Morning
```

**Explanation:**
Each character from `b` is copied to the end of `a` one by one.

---

### 🟥 5. **string_copy_builtin.c**

**Concept:** Copy one string into another using the built-in `strcpy()` function.

```c
#include <stdio.h>
#include <string.h>

int main() {
    char a[101], b[101];
    scanf("%s %s", &a, &b);

    strcpy(a, b);

    printf("%s %s", a, b);
    return 0;
}
```

**Example Input:**

```
apple banana
```

**Example Output:**

```
banana banana
```

**Explanation:**
`strcpy()` copies the contents of `b` into `a`, overwriting its original value.

---

### 🟪 6. **string_copy_manual.c**

**Concept:** Copy one string into another **manually** using a loop.

```c
#include <stdio.h>
#include <string.h>

int main() {
    char a[101], b[101];
    scanf("%s %s", &a, &b);

    int length = strlen(b);
    for (int i = 0; i <= length; i++) {
        a[i] = b[i];
    }

    printf("%s %s", a, b);
    return 0;
}
```

**Example Input:**

```
apple mango
```

**Example Output:**

```
mango mango
```

**Explanation:**
Copies each character of `b` into `a` one by one, including the null terminator.

---

## 🔑 Key Concepts

| Concept              | Description                                                  |
| -------------------- | ------------------------------------------------------------ |
| `strcmp(a, b)`       | Compares two strings lexicographically.                      |
| `strcat(a, b)`       | Appends string `b` to the end of string `a`.                 |
| `strcpy(a, b)`       | Copies string `b` into `a`.                                  |
| Manual Comparison    | Checks each character until a difference or null terminator. |
| Manual Copy          | Copies each character from one string to another.            |
| Manual Concatenation | Appends one string to another using loops.                   |

---

## ⚙️ How to Compile and Run

```bash
# Compile
gcc string_compare_builtin.c -o string_compare

# Run
./string_compare
```

Replace the filename to run other programs like `string_copy_builtin.c` or `string_concat_manual.c`.

---

## 🏁 Summary

* Strings in C can be **compared, copied, and joined** using built-in functions or manual loops.
* Library functions like `strcmp()`, `strcat()`, and `strcpy()` simplify common operations.
* Manual methods help you **understand how strings actually work** in memory.
* Always ensure your character arrays are large enough to hold combined strings.

---

# Author

**Md Monjur Bakth Mazumder**  
**Software Engineer | Lead Frontend Developer**

Software Engineer & Lead Frontend Developer at [Qrinux](https://www.qrinux.com/)  
Software Engineer & Lead Frontend Developer at [Boom Box E-Solutions](https://www.boomboxesolutions.com/)

📧 [Email me](mailto:md.monjurmbm2001@gmail.com)  
🌐 [Portfolio](https://mdmonjurbakthmazumder.netlify.app)

Passionate about building clean, maintainable, and scalable applications

### ⭐ If you find this helpful, don’t forget to **star** the repository!
