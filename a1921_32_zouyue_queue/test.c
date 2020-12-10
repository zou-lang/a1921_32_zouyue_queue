#include "queue.h"

int main() {
    Deque *dq = createDeque();
    push_back(dq, 80);
    push_front(dq, 90);
    push_back(dq, 70);
    push_front(dq, 60);
    pop_back(dq);
    print(dq);
   
    printf("队列元素个数为：%d\n", size(dq));
    printf("对头元素为：%d\n", front(dq));
    printf("队尾元素为：%d\n", back(dq));
}
