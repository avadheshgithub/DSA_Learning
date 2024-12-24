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
         3. heapify (max heap / min heap)
         4. build heap
         5. heap sort O(nlogn)

        ## Heap order Property -

            1. Max heap - both nodes child values will be lesser than parent


            2. min heap - parent node values will be lesser than its childs


        ## Property

            so if 1 indexing follow

            Node * -->ith index
            left child = 2*i index
            right child = 2*i+1 index
            parent node  = i/2 index
            leaf node = ((n/2)+1)--Nth index

    1. insertion (Max Heap)

            1. lets assume array index 01

            | X | 60 | 50 | 40  |  30 | 20  | 55  |
        #----------------------------------> * insrt

            Max heap
            1. insert at end
            2. took right position
                    1. compare with parent and swap
                    2. again above and compare
        
    2. Deletion  (Max Heap) 

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

    4. heapSort (max Heap)
        1. swap(a[i]---arr[n]) swap alst ke sath
        2. size--; // node removerd
        3. root node correct position
                1. compare with child nodes and 
                2. again compare

*/

#include<iostream>
using namespace std;

class heap {
 public:
    int arr[100];
    int size;

    heap() {
        arr[0] = -1;
        size = 0;
    }

    void insert(int val) { // O(logn)
        size = size + 1;
        int index = size;
        arr[index] = val; // Step 01 - insert at last
        // Step 02 - right pos
        while (index > 1) {
            int parent = index / 2;
            if (arr[parent] < arr[index]) {
                swap(arr[parent], arr[index]);
                index = parent;
            } else
                return;
        }
    }

    void deletion() {
        if (size == 0) {
            cout << "nothing to delete" << endl;
            return;
        }
        arr[1] = arr[size]; // step 01
        size--;             // step 02
        // Step 03 - took root node at correct pos
        int i = 1;
        while (i < size) {
            int leftIndex = 2 * i;
            int rightIndex = 2 * i + 1;
            if (leftIndex < size && arr[i] < arr[leftIndex]) {
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            } else if (rightIndex < size && arr[i] < arr[rightIndex]) {
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            } else
                return;
        }
    }

    void heapifyMax(int arr[], int n, int i) { // max heap O(logn)
        int largest = i;
        int left = 2 * i;
        int right = 2 * i + 1;

        if (left <= n && arr[largest] < arr[left])
            largest = left;
        if (right <= n && arr[largest] < arr[right])
            largest = right;

        if (largest != i) {
            swap(arr[largest], arr[i]);
            heapifyMax(arr, n, largest);
        }
    }

    void heapifyMin(int arr[], int n, int i) {
        int smallest = i;
        int left = 2 * i; // left child
        int right = 2 * i + 1; // right child

        if (left <= n && arr[smallest] > arr[left]) smallest = left;
        if (right <= n && arr[smallest] > arr[right]) smallest = right;

        if (smallest != i) {
            swap(arr[smallest], arr[i]);
            cout << "Swapped " << arr[i] << " with " << arr[smallest] << endl; // Debug
            heapifyMin(arr, n, smallest);
        }
    }

    void heapSort(int arr[], int n) { // O(nlogn)
        // Step 1: Build a max heap
        for (int i = n / 2; i > 0; i--) {
            heapifyMax(arr, n, i);
        }

        // Step 2: Sort
        int size = n;
        while (size > 1) {
            swap(arr[size], arr[1]); // Step 01
            size--;                  // Step 02
            heapifyMax(arr, size, 1); // Step 03
        }
    }

    void display() {
        for (int i = 1; i <= size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    heap hp;
    hp.insert(50);
    hp.insert(55);
    hp.insert(53);
    hp.insert(52);
    hp.insert(54);

    hp.display();

    // Build Max Heap
    int arr[6] = { -1, 54, 53, 55, 52, 50 };
    int n = 5;

    cout << "Array after building max heap:" << endl;
    for (int i = n / 2; i > 0; i--) {
        hp.heapifyMax(arr, n, i);
    }
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
 
    // Heap Sort
    hp.heapSort(arr, n);
    cout << "Array after heap sort:" << endl;
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int ar[6] = {-1, 50, 54, 53, 55, 52};
    int m = 5;

    for (int i = m / 2; i > 0; i--) {
        hp.heapifyMin(ar, m, i);
    }

    cout << "Array after building min heap:" << endl;
    for (int i = 1; i <= m; i++) {
        cout << ar[i] << " ";
    }
    cout << endl;


    return 0;
}

