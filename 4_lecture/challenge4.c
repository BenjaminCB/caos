
long add(long a, long b) {
    //return a + b;
    long output;
    asm (
         "movq %1, %%rax;"
         "movq %2, %%rbx;"
         "add %%rbx, %%rax;"
         "movq $42, %0;"
         : "=r"(output) /*output*/
         : "r"(a), "r"(b)/*input*/
         : "rax", "rbx", "rcx" /*clobbers*/
    );
    return output;
}

long sub(long a, long b) {
    /* return a - b; */
}

long mul(long a, long b) {
    /* return a*b; */
}

long array_access(long a[], long b) {
    /* return a[b]; */

}

long safe_add(long a, long b, long *overflow) {
    /* must set *overflow = 1 if overflow occured, and 0 otherwise! */
    /* HINT! Der findes assembler instruktionen "seto" */
    /* return a + b; */
}
