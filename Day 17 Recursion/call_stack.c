#include <stdio.h>

// Function: This is the first function we'll call from main.
void functionA(int x) 
{
    // *** Call Stack Step 3: functionA is now running. ***
    // 
    // A 'stack frame' (a block of memory) for functionA is PUSHED onto the call stack.
    // This frame holds:
    // 1. The memory for its local variable 'x' (which is 10).
    // 2. The 'return address' (the exact line in main where execution should resume 
    //    after functionA is finished).
    
    printf("Inside functionA. x = %d\n", x);

    // After this function finishes, its stack frame will be POPPED off the stack, 
    // and execution will jump back to the return address in main.
}

// Another Function: It calls functionA.
void functionB(int y) 
{
    // *** Call Stack Step 2: functionB is running. ***
    //
    // A stack frame for functionB is PUSHED onto the call stack (it's now on top of main's frame).
    // This frame holds its local variable 'y' (which is 5) and its return address (in main).
    
    printf("Inside functionB. y = %d\n", y);

    functionA(10); // Calling functionA.
    
    // Once functionA finishes, functionB's execution continues from here.
    
    printf("Back in functionB after calling functionA.\n");
    
    // After this function finishes, its stack frame will be POPPED off the stack.
}

int main()
{
    // *** Call Stack Step 1: main starts execution. ***
    //
    // The very first 'stack frame' for the 'main' function is PUSHED onto the call stack.
    // The call stack is a **Last-In, First-Out (LIFO)** data structure, like a stack of plates.
    // The main function's frame is the foundation of the stack.
    
    printf("Starting main...\n");
    
    functionB(5); // We call functionB. This pauses main's execution.
    
    // *** Call Stack Step 4: After functionB finishes. ***
    // 
    // functionB's stack frame is POPPED off. Execution returns here (the line after the call).
    
    printf("Back in main after functionB finished.\n");
    
    // *** Call Stack Step 5: main finishes. ***
    //
    // main's stack frame is POPPED off. The program ends.
    return 0;
}

/* 💡 What is the Call Stack?
It's a special region of memory that keeps track of the **active functions** in your program.

When a function is CALLED: A new block of memory (**Stack Frame**) is **PUSHED** onto the stack.
When a function FINISHES: Its Stack Frame is **POPPED** off the stack, and execution returns to the previous function.

It ensures the program knows:
1.  **Where** to return to after a function finishes.
2.  **What** the local variables are for the currently running function.
*/