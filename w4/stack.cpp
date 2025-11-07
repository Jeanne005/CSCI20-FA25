#include <iostream>
#include <stack>
#include <cstdio>
#include <vector>

using namespace std::

int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout << "Top element: "<< st.top() << end1;
    st.pop();
    while (!st.empty()) {
        cout << st.top() << " ";
    }
    return 0;
}
