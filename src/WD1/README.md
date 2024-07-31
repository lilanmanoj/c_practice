# Day - 01
## Content
1. Structure
2. Preprocessor Directives
3. Standard libraries
4. Data Types
5. Operators
6. Constants
7. Format Specifiers

## Structure
Basic program structure
```C
#include <stdio.h>

int main() {
    // Code here

    return 0;
}
```
## Preprocessor Directives
Preprocessor directives normally define start of the program, before main function and starts with `#`

Ex:
```C
#include <stdio.h>
#include <stdlib.h>

#define PI 3.144

// If define
#ifdef PI
#define CIRCUM(r) (2 * PI * r)
#endif

// If not defined
#ifndef
#define CIRCUM(r) (2 * 3.144 * r)
#endif
```

## Standard libraries
- `stdio.h`: Standard input output library

## Data Types
4 major data type categories
1. Basic datatypes
2. Enumaerated data types
3. The type void
4. Derived type

## 1. Basic Data Types
| Data Type | Size (bytes) |
| :--------- | :------------: |
| short int | 2 |
| unsigned short int | 2 |
| unsigned int | 4 |
| int | 4 |
| long int | 4 |
| unsigned long int | 4 |
| long long int | 8 |
| unsigned long long int | 8 |
| signed char | 1 |
| unsigned char | 1 |
| float | 4 |
| double | 8 |
| long double | 16 |

## Operators
3 major Operator categories, classified by operand
1. Unary Operators
2. Binary Operators
3. Ternary Operators

## 1. Arithmetic Operators
| Operator | Description | Example |
| :------: | :---------- | :------ |
| + | Add 2 numbers | a + b |
| - | Subtract 2 numbers | a - b |
| * | Multiply 2 numbers | a * b |
| / | Divide 2 numbers | a / b |
| % | Get modulus/remainder | a % b |
| ++ | Increment by one | a++ or ++a |
| -- | Decrement by one | a-- or --a |

## 2. Relational Operators
| Operator | Description | Example |
| :------: | :---------- | :------ |
| == | Check equals | a == b |
| != | Check not equals | a != b |
| > | Check greater than | a > b |
| < | Check less than | a < b |
| >= | Check greater than or equals | a >= b |
| <= | Check less than or equal | a <= b |

## 3. Logical Operators
| Operator | Description | Example |
| :------: | :---------- | :------ |
| && | Logical AND | a && b |
| || | Logical OR | a || b |
| ! | Logical NOT | !(a == b) |

## 4. Bitwise Operators
| Operator | Description | Example |
| :------: | :---------- | :------ |
| & | Binary AND | a & b |
| | | Binary OR | a | b |
| ^ | Binary XOR | a ^ b |
| ~ | Binary One's Complement | ~a |
| << | Binary Left Shift | a << 2 |
| >> | Binary Right Shift | a >> 2 |

## 5. Assignment Operators
| Operator | Description | Example |
| :------: | :---------- | :------ |
| + | Add 2 numbers | a + b |
| - | Subtract 2 numbers | a - b |
| * | Multiply 2 numbers | a * b |
| / | Divide 2 numbers | a / b |
| % | Get modulus/remainder | a % b |
| ++ | Increment by one | a++ or ++a |
| -- | Decrement by one | a-- or --a |

## 6. Misc Operators
| Operator | Description | Example |
| :------: | :---------- | :------ |
| + | Add 2 numbers | a + b |
| - | Subtract 2 numbers | a - b |
| * | Multiply 2 numbers | a * b |
| / | Divide 2 numbers | a / b |
| % | Get modulus/remainder | a % b |
| ++ | Increment by one | a++ or ++a |
| -- | Decrement by one | a-- or --a |

## Constants

## Format Specifiers
