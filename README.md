# Bitwise-Operators-in-C-Plus-Plus

# Aim:
To study and implement C++ Bitwise Operators

# Software Required:
Visual Studio Code

# Theory:
In C++, Bitwise Operators are the operators that are used to perform bit-level operations on integers. While performing these operations, integers are considered as sequences of binary digits. These operators are useful for low-level programming, system programming, and optimizing performance.

<img width="690" height="327" alt="468998459-f37d0f63-5e31-4b9b-a0b3-30b0d3d264b1" src="https://github.com/user-attachments/assets/d569ccf9-6279-4293-accc-88de8d8879ad" />

1. Bitwise AND (&): The Bitwise AND operation compares each bit at the same position in the integer, and the resultant bit will be set (1) only if both corresponding bits are set (1). Otherwise, it will be unset (0). The symbol used to perform the bitwise AND operation is `&`.

2. Bitwise OR (|): The Bitwise OR operation compares each bit at the same position, and the result bit will be set (1) if any of the corresponding bits are set (1). The symbol used to perform the bitwise OR operation is `|`.

3. Bitwise XOR (^): The Bitwise XOR operation compares each bit at the same position, and the result bit will be set (1) if the corresponding bits differ (i.e., one should be 1 and the other should be 0). The symbol used to perform the bitwise XOR operation is `^`.

4. Bitwise NOT (\~): The Bitwise NOT operation is performed on a single number. It changes the current bit to its complement, i.e., if the current bit is 0, then in the result it will be 1, and if the current bit is 1, it will become 0. It is denoted by the symbol `~`.

5. Left Shift (<<): The left shift operator shifts the bits of an integer to the left by a specific number of positions. This left shift operation is equivalent to multiplying the integer by 2 raised to the power of the number of positions shifted. The symbol used to represent the left shift operator is `<<`.

6. Right Shift (>>): The right shift operator shifts the bits of an integer to the right by a specific number of positions. This right shift operation is equivalent to dividing the integer by 2 raised to the power of the number of positions shifted. The symbol used to represent the right shift operator is `>>`.

# Implementation:

#Program 1: Basic Bitwise Operations

Objective: To perform and display results of various bitwise operations using two predefined integers.

# Steps:

1. Declare and initialize two integers:

   * `a ← 3`
   * `b ← 7`

2. Perform bitwise operations:

   * `bitwise_and ← a & b` (Bitwise AND)
   * `bitwise_or ← a | b` (Bitwise OR)
   * `bitwise_xor ← a ^ b` (Bitwise XOR)
   * `bitwise_not ← ~a` (Bitwise NOT)

3. Perform shift operations:

   * `leftshift ← a << 2` (Left shift by 2 bits)
   * `rightshift ← 3 >> a` (Right shift 3 by `a` bits)

4. Display results:

Output all computed values to the console using `cout`.

# Program 2: Modify Integer by Setting and Resetting Specific Bits:

Objective: To modify a predefined integer by setting and resetting specific bits based on user input.

# Steps:

1. Initialize integer `i ← 80`.
2. Ask the user to enter the bit position to set and reset.
3. Use bitwise OR to set the specified bit.
4. Use bitwise AND with NOT to reset the specified bit.
5. Display the result after setting.
6. Display the result after resetting.

# Conclusion:
Through these programs, I explored the different types of bitwise operators available in C++. I learned how to perform bit-level manipulations on integer values, which are commonly used in low-level programming, cryptography, system programming, and optimization tasks. Understanding how to use these operators effectively is essential for performing advanced operations in software development.



