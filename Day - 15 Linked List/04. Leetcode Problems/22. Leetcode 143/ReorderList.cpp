/*


##  Reoderder List   [Leetcode 143]

 1---2---3----4---5----6---

 Reorder in a way 
    
    first ko last se 
    2nd ko 2nd last se
    3rd to 3rd last se

    1--6  2---5  3---4

    final list 
    1--6--2---5---3---4      Ans
------------------------------------------------------
    ## Hints 
    - palindrom List
    - merge linked list // Partion List
    - farzi node Create kro


    Step 01 - half part find
    1---2---3 ---4---5---6
    Step 02 - 2nd half reverse the part
    1---2---3- --6---5---4
    Step 03 LinkedlSit ko tod do
    1---2---3  6---5---4
    Step 04 farzi ndoe create kro & connect

        a             
    /   (1)---2---3  
  /     Ta
C
()
Tc 
        b
       (6)---5---4
       Tb


    Tc->next = Ta;
    Tc = Tc->next;
    Ta = Ta->next;
    Tc->next = Tb;
    Tc = Tc->next;
    Tb = Tb->next;

*/