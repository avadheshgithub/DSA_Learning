/*
        ## Find Median From Data Stream  {Leetcode 295}

        - Hard Question and best question

            1. use of min && max heap ----> Into single Problem
*/

/*class MedianFinder {
public:
    MedianFinder(){} // Constructor
    priority_queue<int>left; // max heap
    priority_queue<int,vector<int>,greater<int> > right; // min heap

    void addNum(int num) { // O(logn)
        if(left.size()==0 || num<left.top()) left.push(num);
        else right.push(num);

        if(left.size()>right.size()+1){ // diff should be zero or one --> Max
            right.push(left.top());
            left.pop();
        }
        if(right.size()>left.size()+1){
            left.push(right.top());
            right.pop();
        }
    }
    
    double findMedian() {  // O(1)
        if(left.size()==right.size()) return (left.top() + right.top())/2.0;
        else{
            if(left.size()>right.size()) return left.top();
            else return right.top();
        }
    }
};
*/