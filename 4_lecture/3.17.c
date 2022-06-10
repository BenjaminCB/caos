long lt_cnt = 0,
     ge_cnt = 0;

long absdiff_se(long x, long y) {
    long result;
    if (x < y) goto true;

    ge_cnt++;
    result = x - y;
    goto done;

    true:
        lt_cnt++;
        result = y - x;

    done:
    return result;
}
