#include <stdbool.h>

bool isPalindrome(int x)
{
    int r, temp = x;
    double sum = 0;

    while(x > 0) {    
        sum = (sum * 10) + (x % 10);    
        x = x / 10;    
    }    
    if(temp == sum)    
        return true;    
    else    
        return false;
}