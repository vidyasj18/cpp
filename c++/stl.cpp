// pairs: syntax - pair<int,string> p;

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
//int main() {
//     pair<int,string> p;
//     //p = make_pair(2,"abc");
//     p = {2,"abc"};
//     pair<int,string> & p1 = p;// copy created
//     p1.first = 3;
//     cout << p.first << " " << p.second << endl;

//     int a[] = {1,2,3};
//     int b[] = {2,3,4};
//     pair<int,int> p_array[3];
//     p_array[0] = {1,2};
//     p_array[1] = {2,3};
//     p_array[2] = {3,4};

//     for(int i = 0; i<3; i++) {
//         cout << p_array[i].first << " " << p_array[i].second << endl;
//     }

// void printvec(vector<int> v) {
//     cout << " size: " << v.size() << endl;
//     for(int i = 0; i<v.size(); i++) {
//         cout << v[i] << " ";
//     }
//     cout << endl;
// }
// int main() {
//     vector<int> v(10,3);
//     int x = 2;
//     v.push_back(x);
//     printvec(v);

//     vector<int> &v2 = v;
//     v2.push_back(7);
//     printvec(v);
//     printvec(v2);
// }

// void printvec(vector<string> v) {
//     cout << " size: " << v.size() << endl;
//     for(int i = 0; i<v.size(); i++) {
//         cout << v[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     vector<string> v('gsd');
//     v.push_back("s");
//     printvec(v);

//     vector<string> &v2 = v;
//     v2.push_back("v");
//     printvec(v);
//     printvec(v2);
// }

// #include<iostream>
// #include<bits/stdc++.h>
// #include<array>
// using namespace std;

// int main() {
//     array<int,4> a = {1,2,3,4};
//     int size = a.size();
//     for(int i = 0; i<size; i++) {
//         cout << a[i] << endl;
//     }
//     //cout << " ele at 2nd index " << a.at[2] << endl;
//     cout << " empty or not " << a.empty() << endl;
//     cout << " first ele " << a.front() << endl;
//     cout << " last ele " << a.back() << endl;
// }

// vector

// #include<iostream>
// #include<bits/stdc++.h>
// #include<vector>
// using namespace std;
// int main() {
//     vector<int> v;
//     cout << v.capacity() << endl;

//     v.push_back(1);
//     cout << v.capacity() << endl;

//     v.push_back(2);
//     cout << v.capacity() << endl;

//     v.push_back(3);
//     cout << v.capacity() << endl;

//     cout << v.size() << endl;

//     cout << " front " << v.front();
//     cout << " back " << v.back();

//     cout << " before pop " << endl;
//     for(int i = 0; i<v.size(); i++) {
//         cout << v[i] << " ";
//     }
//     cout << endl;

//     v.pop_back();

//     cout << " after pop " << endl;
//     for(int i = 0; i<v.size(); i++) {
//         cout << v[i] << " ";
//     }
//     cout << endl;

//     v.clear();
//     for(int i = 0; i<v.size(); i++) {
//         cout << v[i] << " ";
//     }
//     cout << endl;
//     cout << " after clear " << endl;
// }

// deque

// #include<iostream>
// #include<deque>
// using namespace std;

// int main() {
//      deque<int> d;
//      d.push_back(1);
//      d.push_front(2);

//     for(int i = 0; i<d.size(); i++) {
//         cout << d[i] << " ";
//     }
//     cout << endl;
//     cout << " first index " << d.at(1) << endl;
//     //d.pop_front();
//     for(int i = 0; i<d.size(); i++) {
//         cout << d[i] << " ";
//     }
//     cout << endl;
//     cout << d.front() << endl;
//     cout << d.back() << endl;

//     cout << " empty or not " << d.empty() << endl;

//     cout << " befor erase " << d.size() << endl;
//     d.erase(d.begin(),d.begin()+1);
//     cout << " after erase " << d.size() << endl;
// }

// #include<iostream>
// #include<list>
// using namespace std;

// int main() {
//     list<int> l;

//     l.push_back(1);
//     l.push_back(2);
//     cout << " before erase " << endl;
//     for(int i = 0; i<l.size(); i++) {
//         cout << i << " ";
//     }
//     cout << endl;

//     l.erase(l.begin());
//     cout << " after erase " << endl;
//     for(int i = 0; i<l.size(); i++) {
//         cout << i << " ";
//     }
//     cout << endl;

//}

// stacks

// #include<iostream>
// #include<stack>
// using namespace std;

// int main() {
//     stack<string> s;

//     s.push("love");
//     s.push("babbar");
//     s.push("kumar");

//     cout << " top ele " << s.top() << endl;

//     s.pop();
//     cout << " top ele after pop " << s.top() << endl;

//     cout << " size of stack " << s.size() << endl;

//     cout << " empty or not " << s.empty() << endl;
// }

// // queue

// // #include<iostream>
// // #include<queue>
// // using namespace std;

// // int main() {
// //     queue<string> q;

// //     q.push("love");
// //     q.push("babbar");
// //     q.push("kumar");

// //     cout << " size before pop " << q.size() << endl;
// //     cout << " first element " << q.front() << endl;
// //     q.pop();
// //     cout << " first element " << q.front() << endl;
// //     cout << " size after pop " << q.size() << endl;

// //     cout << endl;
// // }

// #include<iostream>
// #include<queue>

// using namespace std;
// int main() {
//     // max heap
//     priority_queue<int> maxi;

//     // min heap
//     priority_queue<int,vector<int>, greater<int> > mini;

//     maxi.push(1);
//     maxi.push(2);
//     maxi.push(3);
//     maxi.push(0);

//     cout << " size is " << maxi.size() << endl;
//     for(int i = 0; i<maxi.size(); i++) {
//         cout << maxi.top() << " ";
//         maxi.pop();
//     }
//     cout << endl;
//     cout << " size is " << maxi.size() << endl;
// }

// set 

// #include<iostream>
// #include<set>

// using namespace std;
// int main() {
//     set<int> s;
//     s.insert(1);
//     s.insert(2);
//     s.insert(3);
//     s.insert(4);
//     s.insert(5);
//     s.insert(6);

//     for(auto i:s) {
//         cout << i << endl;
//     }
//     cout << endl;
//     set<int> :: iterator it = s.begin();
//     it++;
//     s.erase(it);

//     for(auto i:s) {
//         cout << i << endl;
//     }
//     cout << endl;
//     cout << " is -5 present " << s.count(-5) << endl;

//     set<int> :: iterator itr = s.find(5);

//     for(auto it = itr; it!=s.end(); it++) {
//         cout << *it << " ";
//     }
//     cout << endl;

// }

// map

// #include<iostream>
// #include<map>

// using namespace std;
// int main() {
//     map<int,string> m;
//     m[1] = "babbar";
//     m[2] = "love";
//     m[13] = "kumar";
//     m.insert( {5,"bheem"});

//     cout << " before erase " << endl;
//     for(auto i:m) {
//         cout << i.first << " " << i.second << endl;
//     }
//     cout << " finding -13 " << m.count(-13) << endl;

//     m.erase(13);
//     cout << " after erase " << endl;
//     for(auto i:m) {
//         cout << i.first << " " << i.second << endl;
//     }
//     cout << endl;

//     auto it = m.find(5);

//     for(auto i = it; i!=m.end(); i++) {
//         cout << (*i).first << endl;
//     }

// }

// STL  algorithms

// #include<iostream>
// #include<algorithm>
// #include<vector>

// using namespace std;
// int main() {
//     vector<int> v;

//     v.push_back(1);
//     v.push_back(3);
//     v.push_back(6);
//     v.push_back(7);

//     //cout << " finding 6 " << binary_search(v.begin(),v.end(),6) << endl;

//     cout << "lower bound " << lower_bound(v.begin(),v.end(),6) -v.begin() << endl;
//     cout << " upper bound " << upper_bound(v.begin(),v.end(),6) -v.begin() << endl;

//     int a = 3;
//     int b = 5;

//     cout << max(a,b);
//     cout << min(a,b);
//     cout << endl;
//     swap(a,b);
//     cout << "a->" << a << endl;

//     string abcd = "abcd";
//     reverse(abcd.begin(),abcd.end());
//     cout << " string->" << abcd << endl;

//     rotate(v.begin(),v.end()+1,v.end());
//     cout << " after rotate" << endl;
//     for(int i:v) {
//         cout << i << " ";
//     }
//     cout << endl;
// }




