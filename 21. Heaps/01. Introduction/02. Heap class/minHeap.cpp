/*

        Heap - complete binary tree

        1. insertion of nodes from the left side
        2. it is complete binary tree (CBT);


        ## so if 1 indexing follow

            Node * -->ith index
            left child = 2*i index
            right child = 2*i+1 index
            parent node  = i/2 index
            leaf node = ((n/2)+1)--Nth index

        ## if 0 indexing follow

            if 0 indexing we follow
            Node * -->ith index
            left child = 2*+1 index
            right child = 2*i+2 index
            parent node  = i/2 index
        ----------------------------------------
            Array 
            |    |     |     |      |      |
            0      1     2     3       4
        ----------------------------------------

         ## Operations 

         1. insertion 
         2. deletion
         3. heapify (min heap / min heap)
         4. build heap
         5. heap sort O(nlogn)

        ## Heap order Property -

            1. max heap - both nodes child values will be lesser than parent


            2. min heap - parent node values will be lesser than its childs


        ## Property

            so if 1 indexing follow

            Node * -->ith index
            left child = 2*i index
            right child = 2*i+1 index
            parent node  = i/2 index
            leaf node = ((n/2)+1)--Nth index

    1. insertion (min Heap)

            1. lets assume array index 01

            | X | 60 | 50 | 40  |  30 | 20  | 55  |
        #----------------------------------> * insrt

            min heap
            1. insert at end
            2. took right position
                    1. compare with parent and swap
                    2. again above and compare
        
    2. Deletion  (min Heap) 

        1. last node ke val ko root node pe swap kr do
        2. remove last node
        3. propogate root node to its correct position
                1. compare with parent and swap
                2. again above and compare.

    3. HeapiFy Algo
        1. if an array --> convert into heap
        2. leaf node (n/2 +1)--(nth) -- already heap
        3. rest of part (1--n/2) ko right position pe
                1. heapify function --| 3rd one

    4. heapSort (min Heap)
        1. swap(a[i]---arr[n]) swap alst ke sath
        2. size--; // node removerd
        3. root node correct position
                1. compare with child nodes and 
                2. again compare

*/

#include <iostream>
using namespace std;

class Heap {
public:
    int arr[100];
    int size;

    Heap() {
        arr[0] = -1; // Not used for indexing, helps align heap properties
        size = 0;
    }

    // Insert into Min-Heap
    void insertMin(int val) {
        size++;
        int index = size;
        arr[index] = val; // Insert at the end

        // Ensure Min-Heap property
        while (index > 1) {
            int parent = index / 2;
            if (arr[parent] > arr[index]) {
                swap(arr[parent], arr[index]);
                index = parent;
            } else {
                break;
            }
        }
    }

    // Deletion from Min-Heap
    void deleteMin() {
        if (size == 0) {
            cout << "Heap is empty!" << endl;
            return;
        }

        // Step 1: Replace root with last element
        arr[1] = arr[size];
        size--;

        // Step 2: Heapify to maintain Min-Heap property
        int i = 1;
        while (i <= size) {
            int left = 2 * i;
            int right = 2 * i + 1;
            int smallest = i;

            if (left <= size && arr[left] < arr[smallest])smallest = left;
            if (right <= size && arr[right] < arr[smallest])smallest = right;

            if (smallest != i) {
                swap(arr[i], arr[smallest]);
                i = smallest;
            } 
            else break;
        }
    }

    // Heapify for Min-Heap
    void heapifyMin(int arr[], int n, int i) {
        int smallest = i;
        int left = 2 * i;
        int right = 2 * i + 1;

        if (left <= n && arr[left] < arr[smallest]) smallest = left;
        if (right <= n && arr[right] < arr[smallest])smallest = right;

        if (smallest != i) {
            swap(arr[i], arr[smallest]);
            heapifyMin(arr, n, smallest);
        }
    }
    // HeapSort function (Ascending Order using Min-Heap)
    void heapSort(int arr[], int n) {
        // Step 1: Build Min-Heap
        buildMinHeap(arr, n);

        // Step 2: Extract elements one by one
        for (int i = n; i > 1; i--) {
            // Move current root to end
            swap(arr[1], arr[i]);

            // Reduce the heap size and heapify root
            heapifyMin(arr, i - 1, 1);
        }
    }

    // Build Min-Heap from array
    void buildMinHeap(int arr[], int n) {
        for (int i = n / 2; i > 0; i--) {
            heapifyMin(arr, n, i);
        }
    }

    // Display the heap
    void display() {
        for (int i = 1; i <= size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Heap minHeap;

    // Insert into Min-Heap
    minHeap.insertMin(50);
    minHeap.insertMin(55);
    minHeap.insertMin(53);
    minHeap.insertMin(52);
    minHeap.insertMin(54);

    cout << "Min-Heap after insertions: ";
    minHeap.display();

    // Delete from Min-Heap
    minHeap.deleteMin();
    cout << "Min-Heap after deletion: ";
    minHeap.display();

    // Build Min-Heap from array
    int arr[] = {-1, 54, 53, 55, 52, 50}; // 0th index unused
    int n = 5;

    cout << "Array before building Min-Heap:" << endl;
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    minHeap.buildMinHeap(arr, n);
    cout << "Array after building Min-Heap:" << endl;
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    cout << "Array before HeapSort:" << endl;
    minHeap.display();
    // Perform HeapSort
    minHeap.heapSort(arr, n);
    cout << "Array after HeapSort (Ascending Order):" << endl;
    minHeap.display();

    return 0;
}


