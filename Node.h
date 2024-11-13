#ifndef NODE_H
#define NODE_H

#include <iostream>

using namespace std;

template <typename T>

class Node {
	public:
    		T data;
    		Node<T>* next;

    		Node(T data, Node<T>* next = nullptr) : data(data), next(next) {}

    		friend ostream& operator<<(ostream &out, const Node<T> &node) {
        		out << node.data;
        		
			return out;
    		}
};

#endif
