# Practice Problem 2.1
Perform the following number conversions:

1. $0x25b9d2$ to binary $0b001001011011100111010010$
2. $0b1010111001001001$ to hex $0xae49$
3. $0xa8b3d$ to binary to $0b10100100101100111101$
4. $0b1100100010110110010110$ to hex $0x322d96$

# Practice Problem 2.3
A single byte can be represented by 2 hexadecimal digits. Fill in the missing entries in the following table, giving the decimal, binary, and hexadecimal values

| Decimal | Binary    | Hexadecimal |
| :-----: | :----:    | :---------: |
| 0       | 0000 0000 | 0x00        |
| 158     | 1001 1110 | 0x9e        |
| 76      | 0100 1100 | 0x4c        |
| 145     | 1001 0001 | 0x91        |
|         | 1010 1110 | 0xae        |
|         | 0011 1100 | 0x3c        |
|         | 1111 0001 | 0xf1        |

# Practice Problem 2.7
What would be printed as a result of the following call to show_bytes?

```
const char *m = "mnopqr";
show_bytes((byte_pointer) m, strlen(m));
```

Note that letters ‘a’ through ‘z’ have ASCII codes 0x61 through 0x7A.

Look up ascii table and take hex values (man ascii)

# Practice Problem 2.10
As an application of the property that $a ^ a = 0$ for any bit vector a, consider the following program:

```
void inplace_swap(int *x, int *y) {
    *y = *x ^ *y; /* Step 1 */
    *x = *x ^ *y; /* Step 2 */
    *y = *x ^ *y; /* Step 3 */
}
```

As the name implies, we claim that the effect of this procedure is to swap the values stored at the locations denoted by pointer variables x and y. Note that unlike the usual technique for swapping two values, we do not need a third location to temporarily store one value while we are moving the other. There is no performance advantage to this way of swapping; it is merely an intellectual amusement.

Starting with values a and b in the locations pointed to by x and y, respectively, fill in the table that follows, giving the values stored at the two locations after each step of the procedure. Use the properties of ^ to show that the desired effect is achieved. Recall that every element is its own additive inverse (that is, $a ^ a = 0$).

| Step      | *x | *y    |
| :-------: |:--:|:-----:|
| Initially | a  | b     |
| Step 1    | a  | a ^ b |
| Step 2    | b  | a ^ b |
| Step 3    | b  | a     |

# Practice Problem 2.12
Write C expressions, in terms of variable x, for the following values. Your code should work for any word size $w \geq 8$. For reference, we show the result of evaluating the expressions for $x = 0x87654321$, with $w = 32$.

1. The least significant byte of x, with all other bits set to 0. [0x00000021] `x & 0xff`
2. All but the least significant byte of x complemented, with the least significant byte left unchanged. [0x789abc21] `x ^ ~0xff`
3. The least significant byte set to all ones, and all other bytes of x left unchanged. [0x876543ff] `x | 0xff`

# Practice Problem 2.14
Suppose that a and b have byte values $0x55$ and $0x46$, respectively. Fill in the following table indicating the byte values of the different C expressions:

| Expression | Value  |
| :--------: | :----: |
| a & b      | $0x44$ |
| a | b      | $0x57$ |
| ~a | ~b    | $0xbb$ |
| a & !b     | $0x01$ |
| a && b     | $0x01$ |
| a || b     | $0x01$ |
| !a || !b   | $0x00$ |
| a && ~b    | $0x01$ |
