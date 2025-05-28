#include <iostream>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    cout << "Vector size: " << v.size() << endl;  // 5
    cout << "First element: " << v.front() << endl; // 1
    cout << "Last element: " << v.back() << endl;  // 5
    v.pop_back();  // removes 5
    cout << "After pop_back, last element: " << v.back() << endl; // 4

    stack<int> s;
    s.push(100);
    s.push(200);
    cout << "Stack top: " << s.top() << endl;  // 200
    s.pop();
    cout << "After pop, stack top: " << s.top() << endl;  // 100

    queue<string> q;
    q.push("apple");
    q.push("banana");
    cout << "Queue front: " << q.front() << endl;  // apple
    cout << "Queue back: " << q.back() << endl;    // banana
    q.pop();
    cout << "After pop, queue front: " << q.front() << endl; // banana

    return 0;
}
