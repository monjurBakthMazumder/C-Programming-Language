

# 🔧 Functions with Pointers in C

This section covers how **pointers** work in C and how they interact with **functions**, **arrays**, and **strings**.

You will learn:

* How arrays are passed to functions (always by reference)
* How strings behave when passed to functions
* Difference between **pass by value** and **pass by reference**
* How pointers work inside arrays
* How to modify values using pointers

---

# 📂 Programs in This Module

---

## 🟦 1. **function_with_array.c**

**Concept:** Arrays are always passed by **reference**, not value.

```c
#include <stdio.h>

void fun(int a[])
{
    a[2] = 200;
}

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    fun(a);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
```

### ✔ Output

```
10 20 200 40 50
```

**Explanation:**
`fun(a)` receives the address of the array, so modifying `a[2]` changes the original array.

---

## 🟩 2. **function_with_string.c**

**Concept:** Strings are character arrays, so they are also passed by **reference**.

```c
#include <stdio.h>

void fun(char s[])
{
   printf("%s", s);
}

int main()
{
    char s[10];
    scanf("%s", s);
    fun(s);
    return 0;
}
```

### ✔ Example Input

```
Hello
```

### Output

```
Hello
```

---

## 🟨 3. **pass_by_reference.c**

**Concept:** Passing the **address** allows you to modify the original variable.

```c
#include <stdio.h>

void fun(int *p)
{
    *p = 50;
}

int main()
{
    int x = 20;
    fun(&x);
    printf("main function er x ar address %p\n", &x);
    printf("%d\n", x);
    return 0;
}
```

### ✔ Output

```
main function er x ar address 0x...
50
```

**Explanation:**
`fun(&x)` passes the address. Inside the function `*p = 50` changes `x` directly.

---

## 🟥 4. **pass_by_value.c**

**Concept:** Passing only the **value** does NOT change the original variable.

```c
#include <stdio.h>

void fun (int x){
    x = 50;
    printf("main function er x ar address %p\n", &x);
    printf("%d\n", x);
}

int main()
{
    int x = 20;
    fun(x);
    printf("main function er x ar address %p\n", &x);
    printf("%d\n", x);
    return 0;
}
```

### ✔ Output

```
main function er x ar address 0x.. (different address)
50
main function er x ar address 0x.. (original address)
20
```

**Explanation:**
`fun(x)` receives a **copy**. Changing it does not affect the original value in `main()`.

---

## 🟪 5. **pointer_in_array.c**

**Concept:** Arrays work as pointers internally.
`a` represents address of `a[0]`.

```c
#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40 ,50};

    *a = 100;
    printf("%p\n", &a[0]);
    printf("%p\n", &a[1]);
    printf("%p\n", &a[2]);
    printf("%p\n", &a[3]);
    printf("%p\n", &a[4]);

    for(int i=0; i < 5 ; i++){
        printf("%d ", a[i]);
    }
    return 0;
}
```

### ✔ Output

```
(addresses printed)
100 20 30 40 50
```

**Explanation:**
`*a` is same as `a[0]`.
So, `*a = 100` modifies the first element.

---

## 🟫 6. **pointer.c**

**Concept:** Basic pointer operations.
Assigning address, dereferencing, modifying value.

```c
#include <stdio.h>

int main()
{
    int x = 10;
    printf("%p\n", &x);
    printf("%d\n", x);

    int* ptr;
    ptr = &x;
    printf("%p\n", ptr);
    printf("%p\n", &ptr);
    printf("%d\n", *ptr);

    *ptr = 20;

    ptr = &x;
    printf("%p\n", ptr);
    printf("%p\n", &ptr);
    printf("%d\n", *ptr);

    return 0;
}
```

### ✔ Explanation

* `ptr = &x;` → pointer now stores address of `x`
* `*ptr` → value stored at that address
* Changing `*ptr` changes `x` directly

---

# 🧠 Key Concepts 

| Concept             | Meaning                                          |
| ------------------- | ------------------------------------------------ |
| Pointer             | Variable that stores address of another variable |
| Dereference `*ptr`  | Access value stored at the pointer's address     |
| Pass by Value       | Function gets a copy—original doesn’t change     |
| Pass by Reference   | Function gets address—can modify original        |
| Arrays in Functions | Always passed by reference                       |
| Strings             | Arrays of chars → also passed by reference       |

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