void cond(short a, short *p) {
    if (a == 0) goto done;
    if (*p < a) goto done;
    *p = a;

    done:
        return;
}
