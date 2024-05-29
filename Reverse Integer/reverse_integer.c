#define INT_MAX 2147483647
#define INT_MIN (-2147483647 - 1)

int reverse(int x){
    long int result = 0;

    while (x != 0) {
        if (result<INT_MIN/10 || result>INT_MAX/10)
            return 0;
        result *= 10;
        result += x % 10;
        x /= 10;
    }
    return result;
}