#ifndef FUNCTION_1
#define FUNCTION_1


int factorial(int num){
    int res = 1;
    while(num>1){
        res *= num--;
    }
    return res;
}

int myabs(int num){
    if(num < 0)
        return -num;
    else
        return num;
}

size_t count_calls(){
    static size_t times_called = 0; // Value persists across calls
    return ++times_called;
}

#endif