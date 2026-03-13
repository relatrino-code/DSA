#include<bits/stdc++.h>
using namespace std;

// Algorithms
// Containers
// Functions
// Iterators

void print() {
    cout << "Hello, world!";
}

int sum (int a, int b) {
    int c = a + b;
    return c;
}

void print_vector(vector<int> v) {
    for(auto i : v) {
        cout << i << " ";
    }
    cout << endl;
}

void print_list(list<int> v) {
    for(auto i : v) {
        cout << i << " ";
    }
    cout << endl;
}

void print_deque(deque<int> v) {
    for(auto i : v) {
        cout << i << " ";
    }
    cout << endl;
}

int main (){
    print();
    cout << endl;
    int c = sum(5,7);
    cout << c << endl;

    // PAIRS
    pair<int, string> p = {1, "Priyam"};
    cout << p.first << " " << p.second << endl;
    pair<int, pair<int, string>> r = {56, {4, "Yo!"}};
    cout << r.second.first << " " << r.first << " " << r.second.second << endl;
    pair<int, int> arr[] = {{3, 4}, {3, 5}, {5, 3}, {1, 9}};

    // return 0;

    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        cout << arr[i].first << " " << arr[i].second << endl;
    }

    
    // VECTORS
    vector<int> v;
    v.push_back(1);
    cout << "Vector is: " << v[0] << endl;
    v.emplace_back(33);
    cout << "Vector is: " << v[0] << " " << v[1] << endl;
    // return 0;

    vector<pair<int, int>> vp;
    vp.push_back({1, 100});
    cout << "Vector is: " << vp[0].first << " " << vp[0].second << endl;
    vp.emplace_back(87, 67);
    cout << "Vector is: " << vp[0].first << " " << vp[0].second << " " << vp[1].first << " " << vp[1].second << endl;

    vector<int> vec1(5, 100);
    vector<int> vec2(5);
    for(int i = 0; i < vec1.size(); i++){
        cout << vec1[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < vec2.size(); i++){
        cout << vec2[i] << " ";
    }
    cout << endl;

    vector<int> v3(5, 20); // {20, 20, 20, 20, 20}
    vector<int> v4(v3); // {20, 20, 20, 20, 20}
    v3.push_back(94);
    for(int i = 0; i < v3.size(); i++){
        cout << v3[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < v4.size(); i++){
        cout << v4[i] << " ";
    }
    cout << endl;

    // Other way to access a vector --> Iterator
    vector<int> v5 = {1, 2, 3, 4, 5};
    vector<int>::iterator i = v5.begin();
    
    i++;
    cout << *(i) << endl;

    vector<int>::iterator i1 = v5.end();
    
    i1--;
    cout << *(i1) << endl;

    // vector<int>::reverse_iterator i2 = v5.rend();
    
    // i2++;
    // cout << *(i2) << endl;

    // vector<int>::iterator i3 = v5.rbegin();
    
    // i3++;
    // cout << *(i3) << endl;

    cout << *(v5.begin()) << " " << v5.back() <<endl;

    // Print entire vector using iterator
    for(vector<int>::iterator i = v5.begin(); i != v5.end(); i++) {
        cout << *(i) << " ";
    }
    cout << endl;

    // Using auto and iterator
    for(auto i = v5.begin(); i != v5.end(); i++) {
        cout << *(i) << " ";
    }
    cout << endl;

    // Using for-each and auto
    for(auto i : v5) {
        cout << i << " ";
    }
    cout << endl;

    // Delete one element in a vector
    // v5.erase(v5.begin()+1); //Deletes the 2nd element in the vector

    // Delete multiple elements in a vector
    // v5.erase(v5.begin()+1, v5.begin()+3) // Deletes the 2nd and 3rd element; the 2nd parameter is exclusive

    // Insert elements in a vector
    vector<int> vi(2, 100);
    print_vector(vi);
    vi.insert(vi.begin(), 300);
    print_vector(vi);
    vi.insert(vi.begin()+2, 500);
    print_vector(vi);
    vi.insert(vi.begin()+2, 3, 700);
    print_vector(vi);

    // Insert one vector into another
    vector<int> vi_copy(2, 50);
    print_vector(vi_copy);
    vi.insert(vi.begin(), vi_copy.begin(), vi_copy.end());
    print_vector(vi);

    // Size of a vector
    cout << vi.size() << endl;

    // Pop out last element from vector --> Pop == Remove
    vi.pop_back(); // Removes last element
    print_vector(vi);

    // Swap 2 vectors
    // vi.swap(vi_copy); // Swaps the values of vi and vi_copy

    // Remove all values in a vector
    // vi.clear() // Makes vi an empty vector

    // Check if a vector is empty or not
    cout << vi.empty() << endl;

    // LIST ---> Similar to vector; but provides front operations as well
    list<int> ls;
    ls.push_back(9);
    print_list(ls);
    ls.emplace_back(45);
    print_list(ls);
    
    ls.push_front(76);
    print_list(ls);
    ls.emplace_front(54);
    print_list(ls);
    // Backend implementation for a vector is a dynamic array while for a list is doubly linked list

    // Rest all functions are same : begin, end, rbegin, rend, clear, insert, swap, size
    
    // DEQUE
    deque<int> dq;
    dq.push_back(9);
    print_deque(dq);
    dq.emplace_back(45);
    print_deque(dq);
    
    dq.push_front(76);
    print_deque(dq);
    dq.emplace_front(54);
    print_deque(dq);

    dq.pop_back();
    print_deque(dq);
    dq.pop_front();
    print_deque(dq);
    cout << dq.back() << " " << dq.front() << endl;

    // Rest all functions are same : begin, end, rbegin, rend, clear, insert, swap, size

    // STACK - LIFO
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.emplace(6);
    cout << st.top() << endl; // Returns the top element in the stack
    st.pop(); // Removes the top element in the stack
    cout << st.top() << endl;

    // Indexing access isn't allowed in stack; only top element can be accessed; use push, pop and top functions mostly

    cout << st.size() << endl; // Returns the size of the stack 
    cout << st.empty() << endl; // Returns true if stack is empty, else false
    // st1.swap(st2); // Swaps the contents of st1 and st2
    // Every operation in a stack happens in contant time i.e. O(1)

    // QUEUE - FIFO
    queue<int> q;
    q.push(1);
    q.push(9);
    q.emplace(67);

    cout << q.back() << endl;
    q.back() += 3;
    cout << q.back() << endl;
    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;

    // Rest other functions like size swap empty are same as a stack
    // All operations in O(1)

    // PRIORITY QUEUE
    priority_queue<int> pq;
    pq.push(9);
    pq.push(17);
    pq.push(2);
    pq.emplace(88);

    // Largest element has the highest priority - {88, 17, 9, 2}

    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;

    // size, swap, empty fnxs are the same as othes

    // Minimum Heap
    priority_queue<int, vector<int>, greater<int>> mh;
    mh.push(3);
    mh.push(1);
    mh.push(0);
    mh.emplace(5);

    cout << mh.top() << endl;

    //push(), pop() ---> log(N); top ---> O(1)

    // SET - SORTED AND UNIQUE
    set<int> ste;
    ste.insert(1); // {1}
    ste.emplace(1); // {1}
    ste.insert(0); // {0, 1}
    ste.insert(5); // {0, 1, 5}

    // begin(), end(), rbegin(), rend(), size(), empty(), swap() are same as above
    
    auto it = ste.find(1); // returns an iterator that ponts to the memory address of the element
    auto it1 = ste.find(7); // if the particular element isn't present it returns ste.end()

    cout << "Hello" << endl;
    
    cout << *it << " " << &it1 << endl;

    ste.erase(5);

    for(auto i : ste) {
        cout << i << " ";
    }
    cout << endl;

    int cnt = ste.count(1); // will give 1 if the element is present else 0; can be used to check if a element is present in a set or not
    cout << cnt << endl;

    // You can pass an element to erase() to remove it or just pass its reference
    auto it2 = ste.find(0);
    ste.erase(it2);

    for(auto i : ste) {
        cout << i << " ";
    }
    cout << endl;

    // You can also give starts and ends to erase, the end being exclusive
    // auto it3 = ste.find(0);
    // auto it4 = ste.find(1);
    // ste.erase(it3, it4);

    // Other functions work the same way as vector

    // lower_bound() and upper bound()
    // auto it = ste.lower_bound(2);
    // auto it = ste.upper_bound(3);

    // Rest fxns are same as vector
    // In a set everything happens in log(N) time

    // MULTISET - A SET THAT STORES DUPLICATES AS WELL

    multiset<int> mse;
    mse.insert(1);
    mse.insert(1);
    mse.insert(1);
    mse.insert(2);

    cout << "Multiset" << endl;

    for(auto i : mse) {
        cout << i << " ";
    }
    cout << endl;

    // mse.erase(1); // Will erase all 1s
    // cout << mse.count(1) << endl;
    // mse.erase(1) will delete all 1s but mse.erase(mse.find(1)) deletes the iterator (and hence the element) of just the first 1
    // If you want to delete two 2s

    auto it01 = mse.find(1);
    auto it02 = next(it01, 2);
    mse.erase(it01, it02);

    for(auto i : mse) {
        cout << i << " ";
    }
    cout << endl;

    // UNORDERED SET - A SET THAT STORES ELENTS IN RANDOM ORDER
    // Almost all operations have O(1) but lower_bound() and upper_bound() don't work
    
    unordered_set<int> uste;

    // Worst case complexity would be O(N)

    // MAP - Stores data in the form of key-value pairs
    map<int, int> mpp;
    // map<pair<int, int>, int> mpp;
    // mpp[{2, 4}] = 3;
    mpp[1] = 2;
    mpp.emplace(2, 4);
    mpp.insert({3, 1});
    mpp.insert({1, 3});

    cout << "Map" << endl;
    for (auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }

    // Map stores unique keys in sorted order kinda like a set

    cout << mpp[1] << endl;  // 2
    cout << mpp[5] << endl;  // 0

    auto it_map = mpp.find(3);
    cout << (*(it_map)).second << endl;  // 1

    auto it_map02 = mpp.find(5);  // points to mpp.end()

    // auto it = mpp.lower_bound(2);
    // auto it = mpp.upper_bound(3);

    // Rest all functions size, swap, erase, empty work the same

    // MULTIMAP - Everything similar to map, can store duplicate keys
    // mpp[key] cannot be used here

    // UNORDERED MAP - Same as a map but keys are not stored in sorted order
    // Map gors for O(log(N)) while Unordered Map goes for O(1) [worst case O(N)]

    return 0;
}

