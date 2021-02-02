#ifndef __MYSTACK_H__
#define __MYSTACK_H__

#include <vector>

class MyStack {

        vector<int> items;

    public:

        bool empty() const {
            return items.empty();
        }

        void push(const int &item) {
            items.push_back(item);
        }

        int pop() {
            int last = items.back();
            items.pop_back();
            return last;
        }

};

#endif