void fib(int n) {
    if (n == 0) exit(0);
    if (n == 1) exit(1);

    pid_t c1;

    c1=fork();
    if(c1==0) {
        //CHILD
        exit(fib(n - 1));
    } else {
        //PARENT
        pid_t c;
        int wStatus1=0;
        c=wait(&wStatus1);

        if ( ( WIFEXITED(wStatus1) )  ){ //did child exit normally
            int exitValue1 = WEXITSTATUS(wStatus1);
            pid_t c2 = fork();
            if (c2 == 0) {
                exit(fib(n - 2));
            } else {
                pid_t _c;
                int wStatus2 = 0;
                _c = wait(&wStatus2);
                int exitValue2 = WEXITSTATUS(wStatus1);

                exit(exitValue1 + exitValue2);
            }
        }
    }
    printf("ONLY Reached if something went wrong!\n");
}

int main(int argc, char* argv[] ) {
    if(argc==2)
	    (void) fib(atoi(argv[1]));
}
