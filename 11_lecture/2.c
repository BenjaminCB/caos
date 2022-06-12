int kontoA = 10,
    konteB = 20;

void transfer(int* from, mutex* from_lock, int* to, mutex* to_lock, int amount) {
    lock(from_lock);
    *from -= amount;
    unlock(from_lock);

    lock();
    *to += amount;
    unlock();
}
