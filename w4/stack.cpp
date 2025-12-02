#include <cstdio> // C standard library input output functions
#include <vector>

using std::printf; // I want to use explicitly the standard library printf
using std::vector;

/* 
    I want to build an integer queue structure.
    push: adds an element to the queue
    pop: takes the oldest element from the queue

    building this out of vector b/c vector can change size easily

    queue: first in, first out

    stack: first in, last out
*/

// push takes the vector and an element, then pushes the element onto the vector
vector<int> push(vector<int> q, int e) {
    q.push_back(e);
    return q;
}

// pop will take an element off the opposite side in which they are added
vector<int> pop(vector<int> q) {
    printf("popped %d\n", q.back());
    q.erase(q.end()); // erase the element at the begining of q
    return q;
}

void print_queue(vector<int> q) {
    for(int i=0; i<q.size(); i++) { printf("%d, ", q[i]); }
    printf("\n");
    return ;
}

int main() {
    vector<int> q = {};
    q = push(q,1);
    q = push(q,2);
    q = push(q,3);
    print_queue(q);
    q = pop(q);
    print_queue(q);
    return 0;
}