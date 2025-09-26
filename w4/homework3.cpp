//cpp code
#include <cstdio> //includes printf library
#include<string>

char my_sum(int x, int y) { //define a function name: my_sum, output: int,inputs: int, int
    return x + y;           // describes the output
}
int main() {
    std::printf("%d\n", my_sum(1,1));
}