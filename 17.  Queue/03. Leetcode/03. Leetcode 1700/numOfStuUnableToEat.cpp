/*
        ## NUmber of students unable to eat lunch          [leetcode 1700]

        Input: students = [1,1,1,0,0,1],    sandwiches = [1,0,0,0,1,1]
    #                         queue                        stack

    1---> square sandwiche
    0---> circle sandwiche

    student 1---> Eat only square sandwich if not got from stack then it will stand up in last of queue
    Student 0 --> eat nly circle sandwich if not got it will stand in last of queue

    ## Calculate num of student that were unable to each lunch
*/



/*class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int>q;
        int n = students.size();
        for(int i=0;i<n;i++){
            q.push(students[i]);
        }
        int i = 0;
        int count = 0;
        while(q.size()>0 && count!=q.size()){
            if(q.front()==sandwiches[i]){
                count = 0; // VIMP
                q.pop();
                i++;
            }
            else{
                q.push(q.front());
                q.pop();
                count++; //VIMP
            }
        }
        return q.size();
    }
};*/