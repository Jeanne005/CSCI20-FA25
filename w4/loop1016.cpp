#include <cstdio>

int main() {
    int a = 1;
    int b = 1;
    int c = 10;
    bool check = true;
    while(check) {
        if(a > c){ c = a-c; }
        else { check = false; }
        printf("c is equal to %d", c);
    }
}