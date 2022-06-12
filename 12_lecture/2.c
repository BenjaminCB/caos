void transfer(int* from, int* to, int amount, mutex* lock, condition* cond) {
    lock(lock);
    while (*from < amount) wait(lock, cond);
    *from -= amount;
    *to += amount;
    broadcast(cond)
    unlock(lock)
}
