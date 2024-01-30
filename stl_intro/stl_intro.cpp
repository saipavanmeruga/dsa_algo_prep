#include<bits/stdc++.h>
#include <iostream>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<set>
#include<unordered_set>
#include<map>
//functions

//void functions do not return anything.
void print()
{
    std::cout<<"raj";
}

// it should return int if you specify double or string then the function 
// return that particular data type
int sum()
{
    int a = 2+4;
    std::cout<<a;
    return a;
}

//Algorithms
//Containers
// Functions
// Iterators

void pair()
{
    std::pair<int, int> p =  {1, 3};
    std::cout<< p.first << " "<< p.second;
    std::pair<int, std::pair<int, int>> p1 = {21, {3, 4}};
    std::cout<<p.first<<" "<<p1.second.first<<" "<<p1.second.second;
    std::pair<int, int> arr[] = {{1,3},{1,4},{1,5}};
}

void explainVector()
{
    //vector is a container
    std::vector<int> v; // creates an empty container
    v.push_back(1); // push_back 1 in to a vector
    v.emplace_back(2); // faster than push_back, dynamically allocates memory and pushes an element to vector
    std::vector<std::pair<int, int>> pair_vec;
    pair_vec.push_back({1,2});
    pair_vec.emplace_back(1,2); // automatically assumes 1, 2 to be a pair.

    std::vector<int>v1(5,100); // a container wit 5 instances of 100
    std::vector<int>v2(5); // a container wit 5 instances of 0
    std::vector<int>v3(5,20); // a container wit 5 instances of 20
    v1.push_back(1); // although we said that vector size is 5 we can always push back as it will dynamically allocates space

    std::cout<<v1[0]<<std::endl; // accessing the vector elements.

    // iterators are used for accessing vector elements.
    // syntax to declare an iterator would be vector<datatype>::iterator it 
    // when we write v.begin() we are actually pointing to the memory where actually the value is.
    // so to access the value at the address value *(v.begin()), any value that is stored in a memory space,
    // can be accessed using a *. 
    std::vector<int>::iterator it =  v.begin();
    it ++;
    std::cout<<*(it)<<std::endl;

    it = it + 2;
    std::cout<<*(it)<<std::endl;

    // 10, 20 , 30, 40
    // ----------->end ↑
    // end points to the empty space next to the last element in the vector.
    // so the output will be 0, if we print v1.end()
    std::vector<int>::iterator it1 = v1.end(); 
    std::cout<<*(it1--)<<std::endl;

    // 10, 20, 30, 40
    // ------->back ↑
    //back points to the last element in the vector.
    std::cout<< v1.back() << " ";

    for(std::vector<int>::iterator it2 = v1.begin(); it2 != v1.end(); it2 ++)
    {
        std::cout<<*(it2)<<" "<<std::endl;
    }

    //auto datatype will assign the datatype automatically to the variable
    //useful in case the datatype of the variable is unknown.

    for(auto it4 = v.begin(); it4!=v.end(); it4 ++)
    {
        std::cout<<*(it4)<<std::endl;
    }

    // for each loop
    for(auto it : v)
    {
        // 
        std::cout<<it<<std::endl;
    }

    // delete in the vector,

    // delete a single element in the vector.
    v.erase(v.begin() + 1);

    // delete the range of elements in a vector.
    // in this range the start is included and end is excluded.
    //[start, end)
    v.erase(v.begin() + 2,v.begin() + 4);

    // initialize a vector with two elements
    std::vector<int> v5(2,100); // {100, 100}
    // insert an element at the begin
    v5.insert(v5.begin(), 300); // {300, 100, 100}
    // insert an element for 2 times at the first index
    v5.insert(v5.begin()+1, 2, 10);
    std::vector<int> copy(2, 50);
    // inserting a vector into a vector
    v5.insert(v5.begin(), copy.begin(), copy.end());
    
    // other general vector functions
    std::cout<< v5.size(); // size of the vector

    // {10, 20}
    v5.pop_back(); // {10}

    // to swap a vector v1 to v2
    v1.swap(v5);

    v.clear(); // clears all the elements in a vector

    v.empty(); // returns true if the vector does not contain any value.


}

void explainList()
{
    // under the hood, a doubly linked list is maintained for the list.
    // this is the reason push front is available in list DS. and it is a cheap operation.
    // same as vector, but it gives front operations as well
    std::list<int> ls;
    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2,4}    
    ls.push_front(5); // {5,2, 4}
    ls.emplace_front(); // {0,5,2,4}
    for (auto it : ls)
    {
        std::cout<< it << std::endl;
    }
    // all other functions are similar to the vector data structures

}

void explainDeque()
{
    //similar to list. both front and bank operations are available
    std::deque<int> dq;
    dq.push_back(2); //{2}
    dq.emplace_back(4); //{2,4}
    dq.push_front(5); //{5,2,4}
    dq.emplace_front(6); //{6,5,2,4}
    dq.pop_back();//{6,5,2}
    dq.pop_front();//{5,2}

    std::cout<<dq.front()<<std::endl;
    std::cout<<dq.back()<<std::endl;
}

void explainStack()
{
    // stack is a LIFO data structure, the guy who went in last will come out first,
    // it is a vertical data structure.
    // generic functions are push pop and top
    //O(1) time.
    std::stack<int> st;
    st.push(1); //{1}
    st.push(3); //{1,3}
    st.push(4); //{1,3,4}
    st.push(5); //{1,3,4,5}
    st.emplace(6); //{1,3,4,5,6}

    std::cout<<st.top()<<std::endl; //{6}

    st.pop(); // {1,3,4,5} //pops the top element that is 6
    std::cout<<st.top()<<std::endl; // now the top will 5 as {1,3,4,5}
    std::cout<<st.size()<<std::endl; // 4

    std::stack<int> st2;

    st.swap(st2);


}

void explainQueue()
{
    // queue is a FIFO data structure, the guy who went in first will come out first,
    // it is a vertical data structure.
    // generic functions are push pop and top
    //O(1)
    std::queue<int> qu;
    qu.push(1); //{1}
    qu.push(2); // {1,2}
    qu.push(3); // {1,2,3}
    qu.emplace(4); // {1,2,3,4}

    qu.back() += 5; //{1,2,3,9}

    std::cout<<qu.front()<<std::endl; //prints 1 because 1 is first guy

    qu.pop(); // removes 1 as he is the FIrst in guy. //{2,3,9}

    std::cout<<qu.front();
}

void explainPriorityQueue()
{
    // priority queue is stored as tree under the hood, also called as min and max heap
    // so, push and pop take O(log n) and top takes O(1)
    //max priority queue, maximum element stays on the top
    std::priority_queue<int> pq;
    pq.push(5); //{5}
    pq.push(6); //{6,5}
    pq.push(7); //{7,6,5,}
    pq.push(8); //{8,7,6,5}
    pq.emplace(3); //{8,7,6,5,3} // 3 goes to the bottom as it is the least **** PQ is stored as TREE ***
    std::cout<<pq.top(); // prints 8
    pq.pop();
    std::cout<<pq.top(); // prints 7

    //Min Heap or Minimum Priority Queue

    std::priority_queue<int, std::vector<int>, std::greater<int>> max_pq;
    max_pq.push(5);
    max_pq.push(2);
    max_pq.push(8);
    max_pq.emplace(10);
    std::cout<<max_pq.top(); //prints 2 as it is minimum priority queue.
}
void explainSet()
{
    //stores everything in a sorted order and stores unique elements.
    // under the hood a tree is maintained.
    // in set everything happens at a logarthimic time complexity

    std::set<int> st;
    st.insert(10); //{10}
    st.insert(4); //{4,10}
    st.insert(15); //{4,10,15}
    st.insert(10);// {4,10,15} // does not throw an error nor inserts the element as it is a duplicate.
    for(auto it: st)
    {
        std::cout<<it<<std::endl;
    }

    auto it = st.find(4); // returns an iterator that points to this tree.

    // not an element in the set so, it returns a set.end(), 
    //an iterator that points to right after the end
    auto it1 = st.find(6); 

    st.erase(5); //erases 5 and maintains the sorted order, takes logarthimic time

    int count = st.count(1);

    auto it3 = st.find(3);
    st.erase(it); // takes constant time 

    auto it4 = st.find(10);
    auto it5 = st.find(4);

    st.erase(it4, it5); // erases between the range.

    //lower_bound() and upper_bound()
    auto it6 = st.lower_bound(2);
    auto it7 = st.upper_bound(3);
}
void explainMultiSet()
{
    //same as set but allows duplicate.

    std::multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    ms.insert(3);
    ms.insert(4);

    ms.erase(3); //erases all the occurences of 3

    int count = ms.count(1);

    for(auto it : ms)
    {
        std::cout<< it << std::endl;
    }

    ms.erase(ms.find(1)); // erases the 1 at a particular address.

    // ms.erase(ms.find(1), ms.find(1) + 2);
    // rest all the functions are same.
    
}

void explainedUSet()
{
    // unordered set
    // same as set but does not have a particular sorted order. it is random
    // all the operations are available and are O(1)
    std::unordered_set<int> us;
    // upper bound and lower bound are not available.

}

void explainMap()
{
    //key value pairs --- keys are unique, but values can be duplicate.
    // key can be any datatype
    // map stores unique keys in sorted order.
    std::map<int, int> map1;
    std::map<int, std::pair<int, int>> mpp;
    std::map<std::pair<int, int>, int> mpp1;

    map1[1] = 2;
    map1.emplace(2, 4);
    map1.insert({3, 6});

    mpp1[{2,3}] = 1;

    for(auto it: map1)
    {
        std::cout<<it.first<< " "<<it.second<<std::endl;
    }

    std::cout<<map1[1]<<std::endl;
    std::cout<<map1[5]<<std::endl;

}

void explainMultiMap()
{
    //same as map but it allows duplicate keys and sorted order.

}

void explainUnorderedMap()
{
    //same as map but it is random, does not store keys in sorted order. every operation is O(1)
}

bool comp(std::pair<int, int> p1, std::pair<int, int> p2)
{
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    if(p1.first > p2.first) return true;
    return false;

}
void explainExtra()
{
    // explaination of sort function
    std::vector<int> v;
    v.push_back(10);
    v.push_back(50);
    v.push_back(120);
    v.push_back(14);
    v.push_back(107);
    v.push_back(105);
    
    std::cout<<"Before sorting in ascending order"<<std::endl;
    for(auto it: v)
    {
        std::cout<< it << std::endl;
    }

    std::sort(v.begin(), v.end());
    std::cout<<"After sorting in ascending order"<<std::endl;
    for(auto it: v)
    {
        std::cout<< it << std::endl;
    }

    // std::sort(v.begin(), v.end(), std::greater(int));
    std::cout<<"After sorting in descending order"<<std::endl;
    for(auto it: v)
    {
        std::cout<< it << std::endl;
    }




    // Now we will see a example where you can write your 
    // own comparison function inside the sort function

    // sort the pair according to the second element
    // if the second element is same then sort in descending  
    // order of the first element.
    std::pair<int, int> a[] = {{1,2}, {2,1}, {4,1}};
    int n  = 3;
    std::sort(a, a+n, comp);
    
    for(auto it : a)
    {
        std::cout<<a->first<<" "<<a->second<<std::endl;
    }

    // when an integer is stored in a 32 bit system it is stored in the binary format of 32 zeros.
    // for example for 7 that last three zeros are set.

    int num = 7;
    int cont = __builtin_popcount(num); // returns 3
    std::cout<<cont<<std::endl;

    long long num1 = 16578657865;
    int cnt = __builtin_popcountll(num1); //returns 18
    std::cout<<cnt<<std::endl;

    // print all the permutations of the string
    // it is important to start from the sorted string.
    std::string s1 = "123";
    do{
        std::cout<<s1<<std::endl;
    }while(std::next_permutation(s1.begin(), s1.end())); // prints 6 permuations.
    // if you start from 231 then it will be print only 3 permutations
    std::string s2 = "231";
    do{
        std::cout<<s2<<std::endl;
    }while(std::next_permutation(s2.begin(), s2.end()));

    int maxi  = * std::max_element(v.begin(), v.end()); // returns the address of the max element and the * dereferences it.
    int mini  = * std::min_element(v.begin(), v.end()); // returns the address of the min element and the * dereferences it.
    std::cout<<maxi<<std::endl;
    std::cout<<mini<<std::endl;


}


int main()
{
    std::cout<<"Hello world"<<std::endl;
    // pair();
    // explainVector();
    // explainList();
    // explainDeque();
    // explainStack();
    // explainQueue();
    // explainPriorityQueue();
    // explainSet();
    // explainMultiSet();
    // explainedUSet();
    // explainMap();
    explainExtra();
    return 0;

}