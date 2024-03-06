/*

In C programming, a function is a self-contained block of code that performs a specific task. Functions provide modularity and help in organizing code by breaking it into smaller, manageable pieces. They also promote code reusability by allowing the same block of code to be called multiple times from different parts of the program.

Here's an overview of functions in C:

Function Declaration and Definition:

Declaration: A function declaration specifies the function's name, return type, and parameters (if any). It tells the compiler about the existence of a function.

Definition: A function definition includes the actual implementation of the function. It contains the function body, which consists of statements that define what the function does.

Syntax:

return_type function_name([para1, para2, ..., paran]){
    # code of block;
}

Function Components:

Return Type: Specifies the data type of the value returned by the function. If the function does not return any value, the return type is void.

Function Name: A unique identifier for the function. It is used to call the function from other parts of the program.

Parameters: Input values passed to the function. Parameters are optional. If a function has parameters, their data types and names are specified within parentheses.

Function Body: Contains a sequence of statements that define the actions performed by the function.

Return Statement: Specifies the value returned by the function. It is optional for functions with a return type of void.

Function Call:

To invoke a function and execute its code, you need to call it by its name along with any required arguments (if it accepts parameters).
syntax: 
function_name([value1, value2, ..., valuen])
*/

#include <stdio.h>

// with return with para
int add(int a,  int b){
    return a + b;
}

int main() {
     printf("%d\n",add(10,20));
     printf("%d\n",add(110,20));
    
    return 0;
}


#include <stdio.h>

// without return with para
void add(int a,  int b){
    printf("%d",a + b);
}

int main() {
     add(11,22);
    
    return 0;
}

#include <stdio.h>

// without return without para
void add(){
    int a=10, b=20;
    printf("%d",a + b);
}

int main() {
     add();
    return 0;
}

#include <stdio.h>

// with return without para
int add(){
    int a=10, b=20;
   return a + b;
}

int main() {
     printf("%d", add());
    return 0;
}