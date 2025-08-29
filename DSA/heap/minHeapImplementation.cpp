#include<iostream>
#include<vector>
using namespace std;
class Solution {
private:
    vector<int> heap;

    // Maintain min-heap property from bottom to top
    void heapifyUp(int index) {
        while (index > 0) {
            int parent = (index - 1) / 2;
            if (heap[index] < heap[parent]) {
                swap(heap[index], heap[parent]);
                index = parent;
            } else {
                break;
            }
        }
    }

    // Maintain min-heap property from top to bottom
    void heapifyDown(int index) {
        int size = heap.size();
        while (index < size) {
            int left = 2 * index + 1;
            int right = 2 * index + 2;
            int smallest = index;

            if (left < size && heap[left] < heap[smallest])
                smallest = left;

            if (right < size && heap[right] < heap[smallest])
                smallest = right;

            if (smallest != index) {
                swap(heap[index], heap[smallest]);
                index = smallest;
            } else {
                break;
            }
        }
    }

public:
    // Initialize or clear the heap
    void initializeHeap() {
        heap.clear();
    }

    // Insert a new key into the heap
    void insert(int key) {
        heap.push_back(key);
        heapifyUp(heap.size() - 1);
    }

    // Change the value of an element at given index
    void changeKey(int index, int new_val) {
        if (index < 0 || index >= heap.size()) {
            cout << "Invalid index\n";
            return;
        }

        int old_val = heap[index];
        heap[index] = new_val;

        if (new_val < old_val)
            heapifyUp(index);
        else
            heapifyDown(index);
    }

    // Remove the minimum element (root) from the heap
    void extractMin() {
        if (heap.empty()) {
            cout << "Heap is empty!\n";
            return;
        }

        heap[0] = heap.back();
        heap.pop_back();
        heapifyDown(0);
    }

    // Return true if heap is empty
    bool isEmpty() {
        return heap.empty();
    }

    // Return the minimum element (root)
    int getMin() {
        if (heap.empty()) {
            cout << "Heap is empty!\n";
            return -1;
        }
        return heap[0];
    }

    // Return the current size of the heap
    int heapSize() {
        return heap.size();
    }

    // Utility to print the heap (optional)
    void printHeap() {
        for (int val : heap)
            cout << val << " ";
        cout << endl;
    }
};
// Example usage
int main() {
    Solution heap;

    heap.initializeHeap();

    heap.insert(10);
    heap.insert(4);
    heap.insert(15);
    heap.insert(20);
    heap.insert(0);

    cout << "Heap: ";
    heap.printHeap();

    cout << "Min element: " << heap.getMin() << endl;

    heap.changeKey(2, 1); // change value at index 2 to 1
    cout << "After changeKey: ";
    heap.printHeap();

    heap.extractMin();
    cout << "After extractMin: ";
    heap.printHeap();

    cout << "Heap size: " << heap.heapSize() << endl;
    cout << "Is heap empty? " << (heap.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
