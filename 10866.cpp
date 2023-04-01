// BOJ Silver 4 - 덱
#include <iostream>
#include <string>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;

    Node(int _d, Node* _p, Node* _n): data(_d), prev(_p), next(_n) {}
};

class Deque {
  private:
    Node* head; //앞
    Node* tail; //뒤
    int size;

  public:
    Deque(): head(nullptr), tail(nullptr), size(0) {}
    ~Deque() {
        // 아래 코드는 Double Free 에러 발생함
        // if(head == nullptr) return;
        // Node* now = head;
        // Node* next = now->next;

        // while(now != tail) {
        //     delete now;
        //     now = next;
        // }
        // delete now;

        for (int i = 0; i < size; i++)
        {
            pop_front();
        }
        
    }

    
    void push_front(int x) {
        if(!head) {
            head = new Node(x, nullptr, nullptr);
            tail = head;
        } else {
            Node* old = head;
            head = new Node(x, nullptr, old);
            old->prev = head;
        }

        size++;
    }
    
    void push_back(int x) {
        if(!tail) {
            head = new Node(x, nullptr, nullptr);
            tail = head;
        } else {
            Node* old = tail;
            tail = new Node(x, old, nullptr);
            old->next = tail;
        }

        size++;
    }

    int pop_front() {
        if (size == 0)
        {
            return -1;
        }

        Node* pop = head;
        int res = head->data;
        if (size != 1) {
            head->next->prev = nullptr;
            head = head->next;
        } else {
            head = nullptr;
            tail = nullptr;
        }

        delete pop;
        size--;
        return res;
    }

    int pop_back() {
        if (size == 0)
        {
            return -1;
        }
        
        Node* pop = tail;
        int res = tail -> data;
        if(size != 1) {
            tail->prev->next = nullptr;
            tail = tail->prev;
        } else {
            head = nullptr;
            tail = nullptr;
        }

        delete pop;
        size--;
        return res;
    }

    int get_size() { return size; }

    bool is_empty() { return !size ? 1 : 0; }

    int front() { return size ? head->data : -1; }
    int back() {return  size ? tail->data : -1; }
};

int main() {
    Deque d;
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        string str;
        int a;
        cin >> str;

        if(str == "push_back") {
            cin >> a;
            d.push_back(a);
        } else if(str == "push_front") {
            cin >> a;
            d.push_front(a);
        } else if(str == "front") {
            cout << d.front() << endl;
        } else if(str == "back") {
            cout << d.back() << endl;
        } else if(str == "size") {
            cout << d.get_size() << endl;
        } else if(str == "empty") {
            cout << d.is_empty() << endl;
        } else if(str == "pop_front") {
            cout << d.pop_front() << endl;
        } else if(str == "pop_back") {
            cout << d.pop_back() << endl;
        }
    }
    return 0;
}