#include <stack>
#include <cstdio>
#include <cmath>

using std::stack;
using std::printf;


#define OP_ADD 9999
#define OP_SUB 9998
#define OP_MUL 10000


bool execute_operation(stack<int>& st, int op) {
    if (st.size() < 2) {
        printf("ERROR: Not enough operands for operation %d\n", op);
        return false;
    }

    int operand2 = st.top();
    st.pop();
    int operand1 = st.top();
    st.pop();

    int result = 0;
    bool handled = true;

    if (op == OP_ADD) {
        result = operand1 + operand2;
        printf("Calculation: %d + %d = %d\n", operand1, operand2, result);
    } 
    else if (op == OP_SUB) {
        result = operand1 - operand2;
        printf("Calculation: %d - %d = %d\n", operand1, operand2, result);
    } 
    else if (op == OP_MUL) {
        result = operand1 * operand2;
        printf("Calculation: %d * %d = %d\n", operand1, operand2, result);
    } 
    else {
        
        printf("ERROR: Unknown operation code %d\n", op);
        
        st.push(operand1);
        st.push(operand2);
        handled = false;
    }

    if (handled) {
        
        st.push(result);
    }
    
    return handled;
}

int main() {
    // making a stack from the stack library
    stack<int> st;

    
    printf("--- Running Example 1: 1 1 + (Should result in 2) ---\n");
    st.push(1);
    st.push(1);
    execute_operation(st, OP_ADD);

    if (!st.empty()) {
        printf("Result of 1 1 + is: %d\n", st.top());
    }
    printf("-------------------------------\n\n");


    
    while (!st.empty()) st.pop();


    
    printf("--- Running Example 2: 1 2 + 3 * (Should result in 9) ---\n");
    st.push(1);
    st.push(2);
    execute_operation(st, OP_ADD); // Stack now has: [3]

    st.push(3);
    execute_operation(st, OP_MUL); // Stack now has: [9]

    if (!st.empty()) {
        printf("Final result of 1 2 + 3 * is: %d\n", st.top());
    }
    printf("-------------------------------\n\n");

    return 0;
}