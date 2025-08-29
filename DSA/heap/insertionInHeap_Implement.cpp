#include<iostream>
#include<vector>
using namespace std;
class Heap{
    public:
    int arr[101];
    int size;
    Heap(){
        size = 0;
    }
    void insert(int value){  //TC = O(log n)
        //value insert at end
        size = size+1;
        int index = size;
        arr[index] = value;

        //take it to right position

        while(index > 1){
            int parentIdx = index/2;
            if(arr[parentIdx] < arr[index]){
                swap(arr[parentIdx],arr[index]);
                index = parentIdx;
            }
            else{
                break;
            }
        }
    }
    void deletion(){
        arr[1] = arr[size]; 
        size--; 
        int index = 1; 
        while(true){
            if(arr[2*index] > arr[2*index + 1]){
                if(arr[index] < arr[2*index]){
                    swap(arr[index],arr[2*index]);
                    index = 2*index;
                }
                else{
                    break;
                }
            }
            else if(arr[2*index]<arr[2*index + 1]){
                if(arr[index] < arr[2*index + 1]){
                    swap(arr[index],arr[2*index + 1]);
                    index = 2*index + 1;
                }
                else{
                    break;
                }
            }
        }
    }
    void printHeap() {
        cout << "Heap: ";
        for (int i = 1; i <= size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main(){
    Heap h;

    h.insert(50);
    h.insert(30);
    h.insert(70);
    h.insert(20);
    h.insert(90);

    h.printHeap();
    h.deletion();
    h.printHeap();
}
