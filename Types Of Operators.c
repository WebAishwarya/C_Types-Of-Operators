#include<stdio.h>

int main()
{
    // Operators
    
    // Types Of Operators :
    
    // 1) Arithmatic Operators : [+, -, *, /, %]
    
    printf("1) Arithmatic Operators :");
    int a, b, add, sub, mul, divi, mod;
    
    printf("\nEnter the value of a : ");
    scanf("%d", &a);
    printf("Enter the value of b : ");
    scanf("%d", &b);
    
    add = a + b;
    sub = a - b;
    mul = a * b;
    divi = a / b;
    mod = a % b;
    
    printf("\nAddition of a & b : %d\n", add);
    printf("Subtraction of a & b : %d\n", sub);
    printf("Multiplication of a & b : %d\n", mul);
    printf("Division of a & b : %d\n", divi);
    printf("Modulus of a & b : %d\n", mod);
    
    // 2) Assignment Operators : [=, +=, -=, *=, /=, %=]
    
    printf("\n2) Assignment Operators :");
    int a1 = 11;    // (Equal to '=') Assignment
    int b1 = 11;
    int c1 = 11;
    int d1 = 11;
    int e1 = 11;
    
    printf("\nValue Taken : %d", a1);
    
    a1 += 2;
    b1 -= 2;
    c1 *= 2;
    d1 /= 2;
    e1 %= 2;
    
    printf("\n+= : %d", a1);
    printf("\n-= : %d", b1);
    printf("\n*= : %d", c1);
    printf("\n/= : %d", d1);
    printf("\n%= : %d", e1);
    
    // 3. Increment or Decrement Operators : [++, --]
    
    printf("\n\n3. Increment or Decrement Operators :");
    
    // Pre & Post Increment
    int i = 100;
    printf("\nIncrement : ");
    printf("\nValue of i : %d", i);
    printf("\nValue before Increment : %d", i);
    printf("\nValue of %d after pre-increment : %d", i, ++i);
    printf("\nValue of %d after post-increment : %d", i, i++);
    printf("\nValue of i now : %d", i);
    
    // Pre & Post Decrement
    printf("\n\nDecrement : ");
    printf("\nValue of i : %d", i);
    printf("\nValue before decrement : %d", i);
    printf("\nValue of %d after pre-decrement : %d", i, --i);
    printf("\nValue of %d after post-decrement : %d", i, i--);
    printf("\nValue of i now : %d", i);
    
    return 0;
    
}
