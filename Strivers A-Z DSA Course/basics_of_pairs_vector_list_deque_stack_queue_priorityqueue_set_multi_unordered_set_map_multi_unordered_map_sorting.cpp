/*
// What I have learned in this basic tutorial


#include<bits/stdc++.h>     //Once you include this library you no      need to include any other library in C++

using namespace std;

void print() {
    cout << "Hey";
}
int print(int a, int b) {   // int can return values void dosent
    int c = a + b;
    return c;
}

int main() {


    string A;
    cin>>A; //Prathamesh Kamble
    cout<<A;    //Only prints Prathamesh, dosent take anything after spacebar
    getline(cin,A);
    cout<<A;    //Prints Prathamesh Kamble including spacebar, dosent take anything after Enter

    // char a = "a";   throws error 
    // string ab = 'a';
    char a = 'a';
    string ab = "a";    // character should be in ' ' and string should be in " "
    cout<<a;
    cout << ab;

// Using character iteration inside for loop
    for (int i=0; i<n; i++) {
        for (char ch = 'A'; ch<='A'+i; ch++) {
            cout << ch << " ";
        }
    cout << endl;
    }
    
    print();
    int c = print(5,6);
    cout << c;

    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;

// pairs
void explain_pairs() {
    pair<int, int> pair1 = {1,2};
    cout << "First elemend in pair is : " << pair1.first << endl << " Second elemend in pair is : " << pair1.second <<endl;

    // creating pair with multiple items
    pair<int, pair<int, int>> pair2 = {1, {2, 3}};
    // How to access inner elements are shown below
    cout << "\nThe first element in pair is : " << pair2.first << "\nThe second element in the pair is : " << pair2.second.first << "\nThe third element in the pair is : " << pair2.second.second << endl;

    // We can also add pairs in the array
    pair<int, int> array[] = {{1, 2}, {3, 4}, {5, 6}};
    cout <<"\nThe element form array : " << array[1].second;
}

// Vectors : replacement for array, we can assign vector and then dynamically(automatically) increase its value
void vector_s() {

    vector<int> v;      // defining vector. it is empty in the  begining

    v.push_back(1);     // inserts element 1 in the vector
    v.emplace_back(2);  // inserts element 2 in the vector. emplace_back() is same as push_back() but emplace_back() is faster than push_back()

    vector<pair<int, int>> vec;     //creates a vector and pair inside it
    
    vec.push_back({1,2});     
    vec.emplace_back(1,2);    //this is how emplace_back() is different from push_back() in terms of syntax

    vector<int> v1(5, 100);     //{100, 100, 100, 100, 100}     vector of size 5 and item at each position 100 is created

// Also after assigning value 5 to the v2 vector we can still add elements pass index 4, means we can still increase size of vector after assigning it
    vector<int> v2(5);      //{0, 0, 0, 0, 0} or { -, -, -, -, garbage value} is created

    vector<int> v3(5,20);   //{20, 20, 20, 20, 20} same 5 size each containing element 20

    vector<int> v4(v3);     //vector v4 is created which contains copy of vector v3

    cout << "element in vector v4 at index 3 : " << v3[3];  //we can display vector as we display array i.e. 

    // Iterators in vector
    vector<int> v5(1, 15);
    v5.push_back(2);

// syntax : vector<datatype>::interator interator_name = position
    vector<int>::iterator it = v5.begin();   //v5.begin points to the address of the first element not the element itself
    cout << "\n iterator currently pointing to the element  : " << *(it);   //by adding star (*) we can get element at that address

    it++;   //iterator icremented
    cout << "\n iterator currently pointing to the element  : " << *(it);

    it = it + 2;    
    cout << "\n iterator currently pointing to the address  : " << *(it) << endl;   //garbage value because element is not present in the index

    vector<int> v6(3,5);
    v6.push_back(2);
    
    // {5, 5, 5, 2}
    vector<int>::iterator it1 = v6.end();
    cout << "\niterator pointing to the next space of end element : " << *(it1);   //pointing at location after 2
    it1--;
    cout << "\niterator pointing to the end element : " << *(it1);   //pointing at element 2

    // vector<int>::iterator it1 = v6.rend();
    // cout << "\niterator pointing to the previous space of start element : " << *(it1);   //pointing at location before 5
    // it1++;
    // cout << "\niterator pointing to the start element : " << *(it1);   //pointing at element 5

    // vector<int>::iterator it1 = v6.rbegin();
    // cout << "\niterator pointing to the next space of end element : " << *(it1);   //pointing at location after 2
    // it1++;
    // cout << "\niterator pointing to the end element : " << *(it1);   //pointing at element 2

    cout << "v6[0] = " << v6[0] << " v6.at[0] = " << v6.at(0);  //both represent same but v6[0] is mostly used

    cout << "\nThe element at back : " << v6.back() <<endl;

    // for loop to display the vector
    for (vector<int>::iterator it2 = v6.begin(); it2 != v6.end(); it2++) {
        cout << *(it2) << " ";
    }
    cout << endl;
    // simplified version
    for (auto it3 = v6.begin(); it3 != v6.end(); it3++) {
        cout << *(it3) << " ";
    }
    cout << endl;
    // for each loop
    for (auto it4 : v6) {
        cout << it4 << " ";
    }





    // Deletion of vectors
    vector<int> v7;
    for (int i=1; i<=5; i++) {
        v7.push_back(i*10);
    }
    // {10, 20, 30, 40, 50}

    v7.erase(v7.begin()+1);     //erases element at position v7.begin()-1
    // {10, 30, 40, 50}

    v7.erase(v7.begin()+1, v7.begin()+3);   //erase multiple elements by giving start and end position
    // {10, 50}

    // Insertion of vectors
    v7.insert(v7.begin(), 5);   //insert 5 at position v7.begin()
    // {5, 10, 50}

    v7.insert(v7.begin()+1, 2, 15);     //insert 2 elements as 15, 15 at position
    // {5, 15, 15, 10, 50}

    vector<int> copy(2,25);
    v7.insert(v7.end()-1, copy.begin(), copy.end());    //copy a vector into another vector
    // {5, 15, 15, 10, 25, 25, 50}
    // cout << "\n" << v7[0] << " " << v7[1] << " " << v7[2] << " " << v7[3] << " " << v7[4] << " " << v7[5] << " " << v7[6];

    cout << "\n" << v7.size();

    v7.pop_back();  //removed 50 : {5, 15, 15, 25, 25}

    v7.swap(v6);    //swaps the elements of two vectors
    cout << "\n";
    for (int i=0; i<4; i++) {
        cout << v7[i] << " ";
    }
    cout << "\n";
    v7.swap(v6);
    for (int i=0; i<4; i++) {
        cout << v7[i] << " ";
    }

    v7.clear();     //clears the vector by size i guess
    cout << "\n";
    for (int i=0; i<5; i++) {
        cout << v7[i] << " ";      //but if we access the elements of that vector it shows the element
    }
    cout << "\n" << v7.empty();     // and checking if vector is empty or not says empty


    vector<int> a(5,10);
    cout << "\nSize of vector a : " << a.size() << endl;
    cout << "vector a : ";
    for (int i=0; i<5; i++) {
        cout << a[i] << " ";
    }

    a.clear();
    cout << "\nSize of vector a after clear : " << a.size() << endl;

    int is_empty = a.empty();
    if (is_empty == 1) {
        cout << "vector is empty." << endl;
    }

    cout << "vector a : ";
    for (int i=0; i<5; i++) {
        cout << a[i] << " ";
    }


}

void list_s() {
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(3);
    
    ls.push_front(5);
    ls.emplace_front(4);

    for(auto i : ls) {
        cout << i << " ";
    }
    // cout << ls[0];   cannot do this in list

    //rest functions are same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}

void deque_s() {
    deque<int> dq;
    dq.push_back(3);
    dq.emplace_back(4);
    dq.push_front(2);
    dq.emplace_front(1);

    auto f = dq.front(); // to get front element
    auto b = dq.back(); // to get back element
    cout << f << " " << b << endl;
    // cout << dq[0];   can do this in deque
    for(auto i : dq) {
        cout << i << " ";
    }

    // rest function same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}

void stack_s() {
    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.emplace(5);

    cout << st.top() << endl;   // returns top element
    st.pop();   // pops top element
    cout << st.size() << endl;  // returns size of the stack
    cout << st.empty() << endl;   // returns 1 if stack is empty

    // the method to return (print) elements of the stack
    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    
    stack<int> st1, st2;
    st1.push(1); cout << "\nst1 " << st1.top() << endl;
    st2.push(2); cout << "st2 " << st2.top() << endl;

    st1.swap(st2);

    cout << "st1 " << st1.top() << endl;
    cout << "st2 " << st2.top() << endl;

    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << "elemtents of stack : ";
    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
}

void queue_s() {
    queue<int> q;
    q.push(1);  //{1}
    q.push(2);  //{1, 2}
    q.push(3);  //{1, 2, 3}
    q.push(4);  //{1, 2, 3, 4}
    q.emplace(5);   //{1, 2, 3, 4, 5}

    q.back() += 5;  // 5 + 5 = 10
    cout << q.back() << endl;   //{10}

    cout << q.front() << endl;  // {1}

    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }


    // swap size empty same as stack
}

void priorityqueue_s() {
    priority_queue<int> pq; // called as Max-heap
    pq.push(5); //  {5}    
    pq.push(2);  //  {5, 2}
    pq.push(8); // {8, 5, 2}    //  largest/maximum element gets inserted at top
    pq.push(7); //  {8, 7, 5, 2} element gets pushed at right position

    cout << pq.top() << endl;   // returns 8

    // to display elements of the priority queue
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }

    priority_queue<int, vector<int>, greater<int>> min_pq;  //called as Min-heap
    min_pq.push(5); // {5}
    min_pq.push(2); //  {2, 5}
    min_pq.push(8); //  {2, 5, 8}
    min_pq.push(4); //  {2, 4, 5, 8} element gets pushed at right position

    cout << endl;
    while (!min_pq.empty()) {
        cout << min_pq.top() << " ";
        min_pq.pop();
    }

    // size, swap, empty functions are same as others

    // pq.push(1);
    // cout <<"\nTop : " << pq.top();

    // pq.pop();
    // cout << "\nis empty: " << pq.empty();
    // cout <<"\nTop after pop : " << pq.top();

}

void set_s() {
    set<int> s;
    // while inserting in set it dose not take duplicate values in consideration 
    // set is always sorted and maintains order
    s.insert(1);    //  {1}
    s.insert(2);    //  {1, 2}
    s.insert(4);    //  {1, 2, 4}
    s.insert(5);    //  {1, 2, 4, 5}
    s.insert(1);    // will not insert because it is duplicate value
    s.insert(3);    //  {1, 2, 3, 4, 5} inserted at end but displays while maintaining order and sorted nature
    s.insert(3);    // will not insert because it is duplicate value

    for(auto i : s) {
        cout << i << " ";
    }

    // begin(), end(), rbegin(), rend(), size(), empty(), swap() works same as vector
    // {1, 2, 3, 4, 5}
    auto it = s.find(3);    // iterator pointing to the location where 3 is present
    // auto it = s.find(10);    //  if provided element which is not in set, it gives location of end element
    cout <<"\n" << *it; // on cout it will display element not location because we cannot display location i guess

    // {1, 2, 3, 4, 5}
    s.erase(2); //  {1, 3, 4, 5}
    s.erase(it);    //  {1, 4, 5}

    auto it1 = s.find(1);
    auto it2 = s.find(5);
    s.erase(it1, it2);  // erase(start, end+1)  {5}

    cout << "\nAfter erase : ";
    for(auto i : s) {
        cout << i << " ";
    }
    set<int> st = {1, 2, 4, 5};
    auto lb = st.lower_bound(2);   //  returns location 2
    // auto lb = st.lower_bound(3);   //  returns location 4
    // auto lb = st.lower_bound(6);   //  returns location after 5
     if (lb != st.end()) {
        cout << "\nThe lower bound of key is ";
        cout << (*lb) << endl;
    }
    else cout << "\nelement is not in the set";

    // {1, 2, 4, 5}
    auto ub = st.upper_bound(2);
    // auto ub = st.upper_bound(3);
    // auto ub = st.upper_bound(6);
     if (ub != st.end()) {
        cout << "\nThe upper bound of key is ";
        cout << (*ub) << endl;
    }
    else cout << "\nelement is not in the set";

}

void multiset_s() {
    // This is same as sets, it only differs as multiset can store duplicate values and sets cannot

    multiset<int> ms;

    ms.insert(1); //    {1}
    ms.insert(1); //    {1, 1}
    ms.insert(1); //    {1, 1, 1}

    int cnt = ms.count(1);
    cout << "Count :" << cnt << endl;

    
    // ms .erase(1);   //  it will erase all occurances of 1 cause we provided rease element
    auto it = ms.find(1);   //  iterator to find the location
    // cout << *it;

    // ms.erase(it); // (ms.erase(ms.find(1));  only element at the iterator location deleted

    // ms.erase(ms.find(1), ms.find(1)+1);  //  dont know why this is not wokring
    ms.erase(it, next(it, 2));  //  different way to delete a particular range in the multiset 

    for (auto i : ms) {
        cout << i << " ";
    }

    // rest all funtions are same as set
}

void unordered_set_s() {
    unordered_set<int> us;

    us.insert(1);
    us.insert(5);
    us.insert(3);
    us.insert(2);
    // us.insert(7);    // uncomment this and againg run to see changes how it stores in unodered order

    for (auto i : us) {
        cout << i << " ";
    }

    // lower_bound and upper_bound functions does not work in unordered set rest all functions are same as  as multiset or set
}

void map_s() {
    // map stores a key->value pair in sorted order of keys, keys can by of any datatype keys can also consist 2 values and same for value

    // multiple ways to store map
    map <int, int> way1;
    map <int, pair<int, int>> way2;
    map <pair<int, int>, int> way3;

    // insertion into map
    way1[1] = 2;
    way1.emplace(3, 4);
    way1.insert({2, 3});

    // for (auto i : way1) {
    //     cout << i.first << " " << i.second << endl;
    // }

    way2[1] = {10, 11};
    way2.emplace(3, make_pair(12, 13));
    way2.insert({2, make_pair(14, 15)});

    // for (auto i : way2) {
    //     cout << i.first << " " << i.second.first << " " << i.second.second << endl;
    // }

    way3[make_pair(1, 2)] = 10;
    way3.emplace(make_pair(3,4), 20);
    // way3.insert({make_pair(3,3), 30});   // comment out this to see how in order sorting happens
    way3.insert({make_pair(5,6), 30});

    for (auto i : way3) {
        cout << i.first.first << " " << i.first.second << " " << i.second << endl;
    }

    // gives 0 because element is not present at that key in map
    cout << way1[4] << endl;
    cout << way2[5].first << " " << way2[5].second << endl;
    cout << way3[make_pair(6,7)] << endl;

    // iterator
    auto it = way1.find(3);
    // auto it = way1.find(5); // points to end location if not 5 present
    cout << it->second;

    auto it1 = way1.lower_bound(2);
    auto it2 = way1.upper_bound(2);
    cout <<"\n" << it1->second << " " << it2->second;

    // erase, swap, empty, size are same as above

}

void multimap_s() {
    // everyting is same as map only it can store multiple keys 
    // only mpp[key] cannot be used here
}

void unorderedmap_s() {
    // same as set and unordered set diference
}

bool comp(pair<int, int> p1, pair<int, int> p2) {
    if (p1.second < p2.second) {
        return true;
    }
    else if(p1.second == p2.second) {
        if (p1.first > p2.first) {
            return true;
        }
    }
    return false;
}

void extra() {
    // this extra function contains sorting, 

    // syntax for sorting : sort (start_position, end position(does not includes so give always end position + 1));

    // how to use array in stl
    array<int, 5> array1 = {1, 5, 2, 4, 3};
    sort(array1.begin(), array1.end());
    // for (int i=0; i<5; i++) {
    //     cout << array1[i] << " ";
    // }

    int array[] = {1, 5, 2, 4, 3};
    sort(&array[0], &array[5]);
    // for (int i=0; i<5; i++) {
    //     cout << array[i] << " ";
    // }

    // If i need to sort only half array or some part of the array just provide iterator from that point
    int array2[] = {3, 2, 1, 9, 6, 5};
    sort(&array2[3], &array2[6]); 
    // for (int i=0; i<6; i++) {
    //     cout << array2[i] << " ";
    // }

    // sort in descending order
    sort(&array[0], &array[5], greater<int>());
    // for (int i=0; i<5; i++) {
    //     cout << array[i] << " ";
    // }

    // TO SORT IN OUR OWN WAY
    // we have seen sorting in ascending or descending order but to sort in the way we want creat our own comperator i.e. comp

    pair <int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};
    
    // suppose we have to sort element according to second element if they are equal then sort according to first element.

    // create boolen function created before this extra function
    sort(begin(a), end(a), comp);
    // for (int i=0; i<3; i++) {
    //     cout << a[i].first << " " << a[i].second << endl;
    // }


    // TO CALCULATE SET BITS- we use __builtin_popcount();
    int num = 7;
    int count = __builtin_popcount(num);
    // cout << count <<endl;
    // similarly we can use this function on long long number
    long long num1 = 124365343546454;
    int count1 = __builtin_popcount(num1);
    // cout << count1;


    // TO CALCULATE PERMUTATIONS OF A STRING- use next_permutation()

    string s ="123";
    do {
        // cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));
    
    // RETURNS MAXIMUM ELEMENT
    int arr[] {1, 5, 7, 4, 3, 9};
    int maxi = *max_element(&arr[0], &arr[6]);
    cout << maxi;
}

int main() {

    // explain_pairs();
    // vector_s();
    // list_s();
    // deque_s();
    // stack_s();
    // queue_s();
    // priorityqueue_s();
    // set_s();
    // multiset_s();
    // unordered_set_s();
    // map_s();
    // multimap_s();
    // unorderedmap_s();
    extra();

    return 0;
}