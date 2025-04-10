#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int data1) : data(data1), next(nullptr) {}
    Node(int data1, Node *next1) : data(data1), next(next1) {};
};
Node *findNthNode(Node *head, int k)
{
    k -= 1;

    while (head != NULL && k > 0)
    {
        k--;
        head = head->next;
    }
    return head;
}
Node *reverseALL(Node *head, int k)
{
    int len = 1;
    Node *tail = head;
    while (tail->next != NULL)
    {
        len++;
        tail = tail->next;
    }

    if (k % len == 0)
        return head;
    k = k % len;
    tail->next = head;
    Node *ln = findNthNode(head, len - k);
    head = ln->next;
    ln->next = NULL;
    return head;
}
void printLL(Node *head)
{
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    int k = 2;
    Node *nn = reverseALL(head, k);
    printLL(nn);
}
