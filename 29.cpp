//猴子选大王，约瑟夫问题
//eg
//输入：n = 7, m = 3
//结果：出圈顺序：3 6 2 7 5 1
//猴王：4
#include<iostream>
using namespace std;
struct Node {
    int no;
    Node *next;
};
int main() {
    int m, n, remainder;
    cout << "Input n, m: ";
    cin >> n >> m;
    Node *first, *last;
    first = last = new Node;
    first->no = 1;
    for(int i = 1; i < n; i++) {
        Node *p = new Node;
        p->no = i + 1;
        last -> next = p;
        last = p;
    }
    last -> next = first;


    remainder = n;
    cout << "Order：";
    while(remainder > 1) {
        for(int count = 1; count < m; count++) {
            first = first -> next;
            last = last -> next;
        }
        last -> next = first -> next;
        cout << first -> no << " ";
        delete first;
        first = last -> next;
        remainder--;
    }
    cout << endl << "King：" << first->no;
    delete first;
    return 0;
}
