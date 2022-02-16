# Exercise Session 3
## Practice Problem 3.1
- 0x100
- 0xAB
- 0x108
- 0xFF
- 0xAB
- 0x11
- 0x13
- 0xFF
- 0x11

## Practice Problem 3.5
```
void decode1(long *xp, long *yp, long *zp) {
    long t1 = *xp,
         t2 = *yp,
         t3 = *xp;

    *yp = t1;
    *zp = t2;
    *xp = t3;
}
```

## Practice Problem 3.7
Errors in the exercise, did not account for them this time.

1. man kan kun anvende 1,2,4,8 som skaleringsfaktor (ikke 9).
2. man kan ikke anvende et register som skaleringsfaktor, dvs leaq (%rbx,%rdi,%rsi), %rbx  er ikke tilladt
3. i løsningen skal det sidste instruktion før ret  anvende rax som destination , ikke rbx

```
10y
10y + z
10y + z + x * y
```

## Practice Problem 3.10
Errors in exercise.

- Fejl i opgaveformulering: parametrene er longs, ikke shorts (koden bruger 64-bit registre)
- Fejl i opgaveformulering: %bax og %rbx skal være %rax
- Fejl i opgave løsning: p4=p3-y

This exercise is pretty fucked.

```
~((z | y) >> 9)
```

## Practice problem 3.11
- Using an exclusive or on itself will result in the value 0
- `movq $0, %rcx`
