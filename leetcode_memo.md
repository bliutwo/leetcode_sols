# Things to Memorize for Leetcode (C++ and Some Python)

This is a list of things you should memorize in order to complete leetcode problems.

**TODO**: Organize these into sections based on which data structure is featured (i.e. sections should be `vector` or `map`, etc.).

**NOTE**: All cards are written for C++, unless specified to be for Python.

[Anki collection (7-9-20)](https://drive.google.com/file/d/1hGu1aEWVE_ieuclmBrak6Rv3l5079fkC/view?usp=sharing)

[(Old) Text file](https://drive.google.com/file/d/1MgthutGnuFLUzl3uMxvAT7J4f5kfKHLY/view?usp=sharing) containing notes. Can be converted into cards/notes using [Quizlet](https://help.quizlet.com/hc/en-us/articles/360029977151-Creating-sets-by-importing-content) or [Anki](https://docs.ankiweb.net/#/importing).

## Cards

Here are some things that I should know by heart:

- erase a character in a string *s* at index *i*

```cpp
s.erase(i, 1);
```

- store index of character *c* in string *s* into size_t *found*

```cpp
size_t found = s.find(c);
```

- write a conditional that checks if the variable *found* from `size_t found = s.find(c);` is *not* "not found"

```cpp
if (found != string::npos)
```

- what data structure is best for lookup
  - caveat: what data structure is best for storing characters can still be
    used for lookup

- how to initialize a vector with *n* zeros

```cpp
vector<int> v(n, 0);
```

- store length of string *s* into size_t *length*

```cpp
size_t length = s.length();
```

- store length of vector *v* into size_t *length*

```cpp
size_t length = v.size();
```

- append vector *v2* to *v1* (concatenate vectors *v1* and *v2*)

```cpp
v1.insert( v1.end(), v2.begin(), v2.end() );
```

- ~~how to return absolute value of *x*~~ leetcode doesn't have `#include <cstdlib>`

Convert an int to a string or a string to an int:

- convert [char *c* to int *i*](https://stackoverflow.com/questions/5029840/convert-char-to-int-in-c-and-c)

```cpp
int i = c - '0';
```

- convert int *i* to char *c*

```cpp
char c = i + '0';
```

- convert string *s* to int *num*

```cpp
int num = stoi(s);
```

- store into int *i* the index of the place of char *c* in the alphabet (e.g. `'a' -> 0`, `'b' -> 1`, etc.)

```cpp
int i = c - 'a';
```

I'll insert a link to a set of flashcards at some point.

- Insert integer *n* into vector *v* at index *i*, pushing the elements afterwards one index forward

```cpp
v.insert(v.begin() + i, n);
```

- Find integer *n* in vector *v* and store index where *n* is stored in *i*

```cpp
#include <algorithm>
auto it = find(v.begin(), v.end(), n);
int index = distance(v.begin(), it);
```

- Basic plan/pseudocode of *recursive* `dfs` search on a `BST`.
- Basic plan/pseudocode of *iterative* `dfs` search on a `BST`.
- Store double *base* raised to the power of double *power* in double *result*

```cpp
#include <math.h>
double result = pow(base, power);
```

- Reverse a string *s*

```cpp
reverse(s.begin(), s.end());
```

- algorithm for reversing an array *arr* in place

- Reverse a vector *v*

```cpp
reverse(v.begin(), v.end());
```

- store the greater of integer *a* or integer *b* into integer *c* using question mark colon syntax

```cpp
int c = a > b ? a : b;
```

- Name for question mark colon syntax
  - ternary operator

- Do you need to write your own `abs()` function for leetcode C++?
  - Yes

- `for` loop for all elements in vector *v* without using auto, range-based, or iterators

```cpp
for (size_t i = 0; i < v.size(); i++)
```

- `for` loop for all elements except last in vector *v* without using auto, range-based, or iterators

```cpp
for (size_t i = 0; i < v.size() - 1; i++)
```

- store a lower case version of a char *c* in char *a*

```cpp
char a = tolower(c);
```

- store an upper case version of a char *c* in char *a*

```cpp
char a = toupper(c);
```

- convert char *c* to its lower case version without `tolower()`

```cpp
c -= 32;
```

- convert char *c* to its upper case version without `toupper()`

```cpp
c += 32;
```

- check if char *c* is upper case alphabetical

```cpp
if (c >= 'A' && c <= 'Z')
```

- check if char *c* is lower case alphabetical

```cpp
if (c >= 'a' && c <= 'z')
```

[Differences between `map` and `unordered_map`](https://www.geeksforgeeks.org/map-vs-unordered_map-c/).

- difference between `map` and `unordered_map`, ordering
- difference between `map` and `unordered_map`, implementation
- difference between `map` and `unordered_map`, search time
- difference between `map` and `unordered_map`, insertion time
- difference between `map` and `unordered_map`, deletion time

- when to use `map`
- when to use `unordered_map`

- how is a map ordered?
  - increasing order (by default)

- how is an unordered_map ordered?
  - no ordering

- how is a map implemented?
  - self balancing BST like red-black tree

- how is an unordered_map implemented?
  - hash table

- what is the search time of map?
  - log(n)

- what is the search time of unordered_map?
  - O(1) -> average, O(n) -> worst case

- what is the insertion time of map?
  - log(n) + rebalance

- what is the insertion time of unordered_map?
  - O(1) -> average, O(n) -> worst case

- what is the deletion time of map?
  - log(n) + rebalance, which, in a red-black tree, takes log(n) time

- what is the deletion time of unordered_map?
  - O(1) -> average, O(n) -> worst case
  
- when to use map instead of unordered_map?
  - you need ordered data; you would have to print/access the data (in sorted order); you need predecessor/successor of elements

- when to use unordered_map instead of map?
  - you need to keep count of some data (example - strings) and no ordering is required; you need single element access i.e. no traversal

- check if integer key *i* in `unordered_map<int, int> m`

```cpp
if (m.find(i) != m.end())
```

- declare a `map` called `m` mapping `int` to `char`

```cpp
map<int, char> m;
```

- declare and initialize a `map` called `m` mapping first four alphanumeric chars to their zero-indexed position in alphabet

```cpp
map<char, int> m = { {'a', 0}, {'b', 1}, {'c', 2}, {'d', 3} };
```

- add a new entry to `map<int, char> m;` mapping `4` to 'd'

```cpp
m[4] = 'd';
```

- declare an `unordered_map` called `um` mapping `string` to `int`

```cpp
unordered_map<string, int> um;
```

- output each key and value separated by a colon with a new line after each key-value printing with an iterator *it* for `map<char, int> m` (no `auto` or `[key, value]`)

```cpp
map<char, int>::iterator it; for (it = m.begin(); it != m.end(); it++) cout << it->first << ':' << it->second << endl;
```

- output each key and value separated by a colon with a new line after each key-value printing for `map<char, int> m` with `auto` but WITHOUT keywords `key` and `val` (and with const ref) and WITHOUT the use of an explicit iterator

```cpp
for (auto const& x : m) cout << x.first << ':' << x.second << endl; // x is a pair
```

- output each key and value separated by a colon with a new line after each key-value printing for `map<char, int> m` with `auto` but WITH keywords `key` and `val` (and with const ref)

```cpp
for (auto const& [key, val] : m) cout << key << ':' << val << endl;
```

- output elements of `set<int> s` using `auto`

```cpp
for (auto const& x : s) cout << x << endl;
```

- `rbegin()` and `rend()` iterators
- `iterator` vs. `reverse::iterator`
- how to use [`partial_sort`](https://www.cplusplus.com/reference/algorithm/partial_sort/)
- [Difference between `set`, `multiset`, `unordered_set`, `unordered_multiset`](https://www.geeksforgeeks.org/difference-set-multiset-unordered_set-unordered_multiset/)
  - when to use `multiset` vs `set`

- convert vector of ints *v* to a set of ints *s* [geekforgeeks](https://www.geeksforgeeks.org/how-to-convert-a-vector-to-set-in-c/)

```cpp
set<int> s(v.begin(), v.end());
```

- convert set of ints *s* to a vector (that you will declare) of ints *v*

```cpp
vector<int> v(s.begin(), s.end());
```

- store intersection of sets of integers *s1* and *s2* into set of integers *s3*, which you will declare

```cpp
set<int> s3;
set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s3, s3.begin()));
```

- Talk it out: How do you store intersection of vectors of integers *v1* and *v2* into vector of integers *v3* (that you will declare) WITHOUT duplicates?
  - convert *v1* and *v2* into sets, store their intersection in a new set, and then convert the new set to the new vector *v3*

- Talk it out: Given two lists, return a third list that is the intersection of the two lists, in *O(1)* space (don't consider the third list as part of the space you use) and *O(n)* time. Don't use built-in set intersection functions, and don't convert the lists to sets.
  - First, sort the two lists. Have two pointers (iterators) point to the first elements of the two lists. Declare a new list. While either pointer (iterator) hasn't reached the end of its respective list, if the two elements pointed to by both iterators are equal, add that "equal" element to the new list, and increment the iterators/pointers until you get to a new element in each list. Now that you're pointing to... 

```python
def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
    # sort first list, (nums1)
    nums1.sort()
    # sort second list, (nums2)
    nums2.sort()
    # declare third list, result
    result = []

    # i and j iterate over l_list and r_list, respectively
    i = 0
    j = 0

    while i < len(nums1) and j < len(nums2):
        if nums1[i] == nums2[j] and (not result or nums1[i] != result[-1]):
            result.append(nums1[i])
        if nums1[i] < nums2[j]:
            i += 1
        else:
            j += 1

    return result
```

**TODO**: C++ version of above Python code

- get union of sets *s1*, *s2*, *s3*

- store intersection of vectors of integers *v1* and *v2* into vector of integers *v3*, which you will declare

```cpp
vector<int> v3; set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), back_inserter(v3)); // v3 contains duplicates
```

- when to use `priority_queue`
- when to use `heap`
- store bigger of two integers *i* and *j* into integer *a* WITHOUT using `max()`

```cpp
int a = i > j ? i : j;
```

- store bigger of two integers *i* and *j* into integer *a* using `max()`

```cpp
int a = max(i, j);
```

- get element(s) exclusive to set *b* when you have sets *a* and *b*
  - `set_difference` (TODO)

- store size of set *s* into size_t *n*

```cpp
size_t n = s.size();
```

- insert integer *n* into set of integers *s*

```cpp
s.insert(n);
```

- remove integer *n* from set of integers *s*

```cpp
s.erase(n);
```

- check if integer *n* is in set *s*

```cpp
if (s.find(n) != s.end())
```

- initialize 2-d vector *v* with all 0's with *n* rows and *m* columns

```cpp
vector<vector<int>> v(n, vector<int> (m, 0));
```

- initialize vector *v* with *n* 0's

```cpp
vector<int> v(n, 0);
```

- pass *a* into existing function *foo()* by reference

```cpp
foo(a);
```

- pass *a* into existing function *foo* by value

```cpp
foo(a);
```

- write void function prototype *foo()* where integer *a* is a parameter by reference

```cpp
void foo(int& a);
```

- write void function prototype *foo()* where integer *a* is a parameter by value

```cpp
void foo(int a);
```

- write void function prototype *foo()* with parameter *a* where *a* is a pointer to an integer

```cpp
void foo(int* a);
```

- store substring of *s1* between indices *n* and *m* into string *s2*

```cpp
string s2(s1.begin() + n, s1.begin() + m);
```

- store substring of *s1* from index *i* with length *len* into string *s2*

```cpp
string s2 = s1.substr(i, len);
```

- remove character in string *s* at index *i* WITHOUT iterators

```cpp
s.erase(i, 1);
```

- remove character in string *s* at index *i* WITH iterators

```cpp
s.erase(s.begin() + i);
```

- remove *n* characters in string *s* at index *i*

```cpp
s.erase(i, n);
```

- remove characters in string *s* ranging from index *start* to index *end*

```cpp
s.erase(s.begin()+start, s.begin()+end);
```

- what is a valid parentheses string?
- what is a *primitive* valid parentheses string?
- how do you determine the primitive strings in a valid parentheses string?

- output all substrings of string *s*

```cpp
for (size_t len = 1; len <= s.length(); len++) {
    for (size_t i = 0; i <= n - len; i++) {
        int j = i + len - 1;
        for (int k = i; k <= j; k++) {
            cout << str[k];
        }
        cout << endl;
    }
}
```

Alternatively,

```cpp
for (size_t len = 1; len <= s.length(); len++)
    for (size_t i = 0; i < s.length() - len + 1; i++)
        cout << s.substr(i, len) << endl;
```

- how many valid substrings are in a string with a single repeating character that repeats *n* times?

- ~~convert char *c* to int *i* (leetcode version)~~
  - NOTE: this doesn't always work on leetcode either

```cpp
int i = atoi(&c);
```

- store subvector of *v1* into *v2* from index *i* to *j*

```cpp
vector<int> v2(v1.begin() + i, v1.begin() + j);
```

- store max element from vector *v* into *x*

```cpp
auto x = *max_element(v.begin(), v.end());
```

- store min element from vector *v* into *x*

```cpp
auto x = *min_element(v.begin(), v.end());
```

- sort a vector *v* in increasing order

```cpp
sort(v.begin(), v.end());
```

- sort a vector *v* in decreasing order

```cpp
sort(v.begin(), v.end(), greater<int>());
```

- store into `size_t` *i* the first occurrence of char *c* in string *s*

```cpp
size_t i = s.find(c);
```

- store into `size_t` *i* the last occurrence of char *c* in string *s*

```cpp
size_t i = s.rfind(c);
```

- given an integer *i* that is either 0 or 1, convert it to the other one (i.e. `0 -> 1` or `1 -> 0`)

```cpp
i ^= 1;
```

- sort a string *s* in reverse alphabetical order

```cpp
sort(s.begin(), s.end(), greater<char>());
```

- sort a string *s* in alphabetical order

```cpp
sort(s.begin(), s.end());
```

- check if string *s* is empty

```cpp
if (s.empty())
```

- check if `s.find(c)` found nothing

```cpp
if (s.find(c) == string::npos)
```

- check if `s.find(c)` found something

```cpp
if (s.find(c) != string::npos)
```

- check if key *k* is in map *m*

```cpp
if (m.find(k) != m.end())
```

- erase key *k* from map *m*

```cpp
m.erase(k);
```

- check if map *m* is empty

```cpp
if (m.empty())
```

- store distance between two iterators *it1* and *it2* into *d*

```cpp
auto d = distance(it1, it2);
```

Need a section on useful bit operations, what they do, and when to use them. Useful guide [here](https://leetcode.com/problems/sum-of-two-integers/discuss/84278/a-summary-how-to-use-bit-manipulation-to-solve-problems-easily-and-efficiently).

- difference between queue and deque
  - both can insert elements at both ends, but a deque can use the random access `operator[]` (like a vector that can insert and delete at the beginning with `push_front()` and `pop_front()`

- what are the 5 useful methods of an STL queue?
  - `front()`
  - `push()`
  - `pop()`
  - `empty()`
  - `size()`
  
- what are the 5 useful methods of an STL stack?
  - `push()`
  - `pop()`
  - `empty()`
  - `size()`
  - `top()`
  
- what are the 8 most useful STL data structures?
  - stack
  - queue
  - deque
  - priority_queue
  - list
  - vector
  - string
  - set
  - array

- what are the 5 most useful methods of an STL priority_queue?
  - `empty()`
  - `size()`
  - `top()`
  - `push()`
  - `pop()`
  
- when would you use a STL stack?
- when would you use a STL queue?
- when would you use a STL deque?
- when would you use a STL list?
- when would you use a STL vector?

- initialize a queue of ints *q*

```cpp
queue<int> q;
```

- push int *i* into queue *q*

```cpp
q.push(i);
```

- store into integer *total* the sum of all elements of `vector<int> v`

```cpp
int total = accumulate(v.begin(), v.end(), 0);
```

- What does this C++ code output: map<int, int> m; cout << m[1] << endl;
  - 0, because maps default to 0 value
  
- get all positions of char *c* in string *s*

- reverse substring in string *s* from index *i* to index *j*

```cpp
reverse(s.begin() + i, s.begin() + j);
```

- given `string s = "012345";`, what is the output of `reverse(s.begin() + 1, s.begin() + 4); cout << s << endl;`
  - 032145
  
- Python: reverse a string s
 
```python
s = s[::-1]
```

- count the number of set bits in integer *i*
- sort map *m* by value
- Python: sort dictionary *d* by value

```python
{k: v for k, v in sorted(d.items(), key=lambda item: item[1])}
```

[Bit Tricks for Competitive Programming](https://www.geeksforgeeks.org/bit-tricks-competitive-programming/)

- Python: use `enumerate()` function in for loop over `some_list`

```python
for counter, value in enumerate(some_list):
```

- Python: given a matrix (list of lists of integers) *mat*, use a list comprehension to build a list *l* of pairs (*a*, *b*), where *a* is the sum of each row, and *b* is the index of the row in the matrix

```python
l = [(sum(row), i) for i, row in enumerate(mat)]
```

- Python: sort list of pairs *l* by the second element in each pair

```python
l.sort(key=lambda x: x[1])
```

- Python: sort a list *l*

```python
l.sort()
```

- What is the output of `cout << 5/2 << endl;`
  - 2
  
- what does `std::vector::back` do? How is it different from `vector::end`?
  - Returns a reference to the last element in the vector. Unlike member vector::end, which returns an iterator just past this element, this function returns a direct reference. Calling this function on an empty container causes undefined behavior.

- store the last element of vector *v* into *x*

```cpp
auto x = v.back();
```

- Problem: Remove all pairs of duplicate adjacent characters (i.e. "aaab" -> "ab" or "aa" -> ""). Describe 2 ways to solve this, and for each algorithm, what is the edge case(s) you should consider, and what is the time and space complexity?

1. Brute force: Loop through each index, checking if there is any pair of adjacent, equivalent letters. If there is, erase those two characters, then reset the counter to -1 since the for loop will ++ (to bring you to index 0). The edge case is if you have an empty string, so break out of the loop if the string is empty (i.e. you get "aaaa" -> "", or if you just get ""). Time: O(n^2), where n is the length of the string, since you could double back on the string for each character; Space: O(n), where n is the length of the string.

2. Stack: Declare an empty stack (or just use an empty string, which we'll refer to as the "stack-string"), push the first character of the original string into the newly declared stack / stack-string, and loop over each remaining character in the original string. If your stack / stack-string is non-empty AND the current character in the original string is the same as the top character on your stack / the last character in your stack-string, pop the element from the stack / pop off the last character from the stack-string. Otherwise, push the character onto the stack / onto the end of the string. If you have a stack, construct a new string by popping off each character into a new empty string. If you have the stack-string, just return that stack-string. Time: O(n), Space: O(n), where n is the length of the string.

- delete last character of string *s*

```cpp
s.pop_back();
```

- append character *c* to end of string *s*

```cpp
s.push_back(c);
```

- what are two string methods that can let you treat strings like a stack?
  - pop_back(), push_back()
  
- store the top element from a stack *s* into *e* and then pop it off

```cpp
auto e = s.top();
s.pop();
```

- check if element *m* is in vector *v*

```cpp
if (find(v.begin(), v.end(), m) != v.end())
```

- erase element *key* from map *m*

```cpp
m.erase(key);
```

- what is the output of: `vector<int> v(26); cout << v[6] << endl;`
  - 0

- If you have a finite number of elements--specifically, the letters in the alphabet--that you need to keep count of, what's the most space efficient way to keep track of those counts?
  - Make an array where each index corresponds to a letter of the alphabet. For non-alphabet elements, if you need to keep track of order, use a map mapping elements to integer counts. If you don't need to keep track of order, use an unordered_map.

- what's the difference between `pair` and `tuple` in C++? ([link](https://stackoverflow.com/questions/6687107/difference-between-stdpair-and-stdtuple-with-only-two-members))

1. It's a bit easier to get the contents of a `pair` than a `tuple`. You have to use a function call in the `tuple` case, while the `pair` case is just a member field.
2. Basically, `std::pair<T, Y>` is standard-layout if both `T` and `Y` are standard-layout,  while `std::tuple` is never required to be standard-layout.

- what is `std::is_standard_layout`, and what is its C++ definition? ([link](https://www.cplusplus.com/reference/type_traits/is_standard_layout/))
  - Trait class that identifies whether T is a standard-layout type. `template <class T> struct is_standard_layout;`

- (OPTIONAL) what is a *standard-layout type*?
  - a type with a simple linear data structure and access control that can easily be used to communicate with code written in other programming languages, such as C, either cv-qualified or not. This is true for scalar types, standard-layout classes and arrays of any such types.
  
- (OPTIONAL) what is a *standard-layout class*?
  - a class (defined with `class`, `struct` or `union`) that:
    - has no virtual functions and no virtual base classes.
    - has the same access control (`private`, `protected`, `public`) for all its non-static data members.
    - either has no non-static data members in the most derived class and at most one base class with non-static data members, or has no base classes with non-static data members.
    - its base class (if any) is itself also a *standard-layout class*. And,
    - has no base classes of the same type as its first non-static data member.

- What are two ways to traverse a binary search tree? (2 parts for each way)
  - 1) DFS, or recursively, 2) BFS, or using a stack (iteratively)

- What's it called when you eliminate an entire subtree from being required to be searched?
  - pruning

- iterate over elements of vector of ints *v* backwards using classic for loop

```cpp
for (int i = v.size() - 1; i >= 0; i--) // NOTE: int not size_t because size_t doesn't go below 0!
```

- check if vector *v* is sorted

```cpp
if(is_sorted(v.begin(), v.end()))
```

- Talk it out: How do you find the diameter of a binary tree, where the diameter is the length of the **longest** path between any two nodes in a tree?
  - Intuition: Any path can be written as two arrows (in different directions) from some node, where an arrow is a path that starts at some node and only travels down to child nodes. If we knew the maximum length arrows L, R for each child, then the best path touches L + R + 1 nodes.
  - Algorithm: Declare a variable *d* to contain the diameter of the tree. Call a helper function called *depth()* that returns an integer with arguments: root and *d*. Pass *d* by reference. Return *d*. This ends the main function. In the helper function *depth()*, if the root is NULL, return 0. Declare two integers, *left* and *right*, which both call the helper function *depth* on the root's left and right nodes. Set *d* to the maximum between *d* and the sum of left and right. Return the maximum of left and right plus 1. This ends the helper function *depth()*.

- How to represent the greatest double possible WITHOUT numeric_limits?

```cpp
double maximum = DBL_MAX;
```

- How to represent the smallest double possible WITHOUT numeric_limits?

```cpp
double minimum = DBL_MIN;
```

- How to represent the greatest integer possible?

```cpp
int maximum = INT_MAX;
```

- How to represent the smallest integer possible? (WITHOUT numeric_limits)

```cpp
int minimum = INT_MIN;
```

- Talk it out: How do you get the largest element of a map by value, where all keys are unique, and all values are unique?
  - As you construct the map, keep a vector of the keys. Then sort the vector keys in decreasing order, and then do m[v[0]]. Or just have a map of values to keys, and then use the reverse iterator to get the "first" element in the map.

- insert char *c* at front of string *s*

```cpp
s.insert(s.begin(), c);
```

- convert int *i* to char *c*

```cpp
char c = '0' + i;
```

- Talk it out: How do you check if a really long string is a palindrome (it's the same string if reversed)? WITHOUT recursion
  - Have two pointers to each end of the string. Increment/decrement each one by one until you get to the middle (at which point it's true). If at any point the chars are different, then it's not a palindrome.

- Talk it out: How do you check if a really long string is a palindrome (it's the same string if reversed), if you are able to delete a single character?
  - Have two pointers to each end of the string. Increment/decrement each one by one until you get to the middle (at which point it's true). If at any point the chars are different, then check two cases: Increment one end one character faster than the other (one case for each end), and do the regular two-pointer approach for the two new inner strings, each of which has a deleted character. If either one reaches the middle without differing characters, the whole thing is true.
  
- check if char *c* is alphanumeric (regardless of uppercase or lowercase)

```cpp
if (isalnum(c))
```

- List it out, out loud: What are some common mistakes you make while coding that you should check for before submitting your solution? (3)
  - you often use `--` instead of `++`, or vice versa
  - you often forget punctuation
  - you often don't check the problem statement before submitting
  
- store square root of *x* into double *a* (you will declare *a*)

```cpp
double a = sqrt(x);
```

- how much time does this take: finding all subsets of a set
  - O(2^n)

- how much time does this take: finding all permutations of a string
  - O(n!)

- how much time does this take: sorting using mergesort
  - O(n log (n))

- how much time does this take: iterating over all the cells in a matrix of size n by m
  - O(nm)

- check if x is even using bitwise operator(s)

```cpp
if (x & 1 == 0)
```
- check if x is odd using bitwise operator(s)

```cpp
if (x & 1 == 1)
```

- Python: reverse a list *l*

```python
l.reverse()
```

- Python: store the last element of list *l* into *e*

```python
e = l[-1]
```

- given `string s = "012345";`, what is the output of `reverse(s.begin() + 1, s.begin() + 2); cout << s << endl;`
  - 012345

- given `string s = "012345";`, what is the output of `reverse(s.begin() + 3, s.begin() + 5); cout << s << endl;`
  - 012435

- given `string s = "012345";`, what is the output of `reverse(s.begin() + 2, s.begin() + 6); cout << s << endl;`
  - 015432

- given `string s = "012345";`, what is the output of `reverse(s.begin() + 1, s.begin() + 1); cout << s << endl;`
  - 012345

- given `string s = "012345";`, what is the output of `reverse(s.begin() + 1, s.begin()); cout << s << endl;`
  - 012345

- given `string s = "012345";`, what is the output of `reverse(s.begin() + 4, s.begin()); cout << s << endl;`
  - 012345

- delete first character of string *s*

```cpp
s.erase(0, 1);
```

- Talk it out: How do check if a string has a balanced number of parentheses via a linear search through the string?
  - Set a counter *balance* to 0. For each character in the string, if the character is a '(', increment *balance*; if the character is a ')', decrement *balance*; if *balance* is negative at any point during the for loop, return false. At the end, outside of the for loop, check if *balance* is 0.

- Talk it out: what's the general algorithm for removing parentheses in a string in order to make sure the string is valid (has balanced parentheses?), with a minimal number of removals?


- Delete all occurrences of char *c* in string *s*

```cpp
s.erase(remove(s.begin(), s.end(), c), s.end());
```

- How long does adding, removing, or even changing one character anywhere in a string take? Why?
  - O(n), because strings are immutable. The entire string is rebuilt for every change.

- How long does it take to check if an item is in a list?
  - O(n) if linear search, or O(log n) if binary search

- How long does it take to add or remove *not from the end* of a list, vector, or array?
  - O(n) because the other items are moved up to make a gap or down to fill in the gap.

- Python: what is the output of the following:

```python
l = [1, 2, 3]
l.pop()
print(l)
```

```
[1, 2]
```

- Python: add element *e* to existing list *l*

```python
l.append(e)
```

- Talk it out: Given two sparse matrices A and B, how do you calculate the product of the two matrices, C? Give the "smart" solution, and then say why it's smart.
  - For each value `A[i][k]` in matrix A, if it is not zero, we calculate `A[i][k] * B[k][j]` and accumulate it into `C[ i ][ j ]` (Key part: the `C[ i ][ j ]` by now is not the final value in the result matrix !! Remember, in the brute force solution, the final value of `C[i][j]`, takes sum of all multiplication values of K corresponding values from A and B? here `C[ i ][ j ]` is only sum of some multiplication values, NOT ALL until the program is done ) BY NOW, it is very clear that, if the value `A[ i ][ k ]` from matrix is zero, we skip a For-loop- calculation, which is a loop iterating nB (number of columns in B) times, and this is the key part of why the smart solution is smart!!!

- Talk it out: Given an array *nums* of *n* integers where *n > 1*,  return an array `output` such that `output[i]` is equal to the product of all the elements of `nums` except `nums[i]`. No division allowed, and maximum time taken is *O(n)*. Bonus: do it in *O(1)* space, where `output` doesn't count towards space.
  - Use three arrays: *L*, *R*, and *output*. `L[i]` will contain the product of all the elements *to the left of the element at index i*. `R[i]` will contain the product of all the elements *to the right of the element at index i*. Finally, `output[i]` will contain `R[i] * L[i]`. This takes *O(n)* because you're looping through the original array three times, or *3n* operations, where *n* is the length of the original array.
  - *O(1)* space solution intuition: The *O(1)* space solution is similar, except you use only one additional array *answer* (in addition to the original given array *nums*), and keep a variable storing the running product of elements to the right. Algorithm: Initialize the empty array `answer` where for a given index `i`, `answer[i]` would contain the product of all the numbers to the left of `i`. We construct the `answer` array the same way we constructed the `L` array in the previous approach. These two algorithms are exactly the same except that we are trying to save up on space. The only change in this approach is that we don't explicitly build the `R` array from before. Instead, we simply use a variable to keep track of the running product of elements to the right and keep updating *answer* array by doing `answer[i] = answer[i] * R`. For a given index `i`, `answer[i]` contains the product of all the elements to the left and `R` would contain product of all the elements to the right. We then update `R` as `R = R * nums[i]`.

- Talk it out: Given an array *nums* of *n* integers where *n > 1*,  return an array `output` such that `output[i]` is equal to the product of all the elements of `nums` except `nums[i]`. No division allowed, and maximum time taken is *O(n)*. Fill in the blank for this *O(1)* solution: Algorithm: Initialize the empty array `answer` where for a given index `i`, `answer[i]` would contain the **FILL IN THE BLANK HERE**. We construct the `answer` array the same way we constructed the `L` array in the previous approach. These two algorithms are exactly the same except that we are trying to save up on space. The only change in this approach is that we don't explicitly build the `R` array from before. Instead, we simply use a variable to keep track of the running product of elements to the right and keep updating *answer* array by doing `answer[i] = answer[i] * R`. For a given index `i`, `answer[i]` contains the product of all the elements to the left and `R` would contain product of all the elements to the right. We then update `R` as `R = R * nums[i]`.
  - product of all the numbers to the left of `i`

- Talk it out: Given an array *nums* of *n* integers where *n > 1*,  return an array `output` such that `output[i]` is equal to the product of all the elements of `nums` except `nums[i]`. No division allowed, and maximum time taken is *O(n)*. Fill in the blank for this *O(1)* solution: Algorithm: Initialize the empty array `answer` where for a given index `i`, `answer[i]` would contain the product of all the numbers to the left of `i`. We construct the `answer` array the same way we constructed the `L` array in the previous approach. These two algorithms are exactly the same except that we are trying to save up on space. The only change in this approach is that we don't explicitly build the `R` array from before. Instead, we simply use a variable to keep track of **FILL IN THE BLANK HERE** and keep updating *answer* array by doing `answer[i] = answer[i] * R`. For a given index `i`, `answer[i]` contains the product of all the elements to the left and `R` would contain product of all the elements to the right. We then update `R` as `R = R * nums[i]`.
  - the running product of elements to the right

- Talk it out: Given an array *nums* of *n* integers where *n > 1*,  return an array `output` such that `output[i]` is equal to the product of all the elements of `nums` except `nums[i]`. No division allowed, and maximum time taken is *O(n)*. Fill in the blank for this *O(1)* solution: Algorithm: Initialize the empty array `answer` where for a given index `i`, `answer[i]` would contain the product of all the numbers to the left of `i`. We construct the `answer` array the same way we constructed the `L` array in the previous approach. These two algorithms are exactly the same except that we are trying to save up on space. The only change in this approach is that we don't explicitly build the `R` array from before. Instead, we simply use a variable to keep track of the running product of elements to the right and keep updating *answer* array by doing **FILL IN THE BLANK HERE**. For a given index `i`, `answer[i]` contains the product of all the elements to the left and `R` would contain product of all the elements to the right. We then update `R` as `R = R * nums[i]`.
  - answer[i] = answer[i] * R

- Talk it out: Given an array *nums* of *n* integers where *n > 1*,  return an array `output` such that `output[i]` is equal to the product of all the elements of `nums` except `nums[i]`. No division allowed, and maximum time taken is *O(n)*. Fill in the blank for this *O(1)* solution: Algorithm: Initialize the empty array `answer` where for a given index `i`, `answer[i]` would contain the product of all the numbers to the left of `i`. We construct the `answer` array the same way we constructed the `L` array in the previous approach. These two algorithms are exactly the same except that we are trying to save up on space. The only change in this approach is that we don't explicitly build the `R` array from before. Instead, we simply use a variable to keep track of the running product of elements to the right and keep updating *answer* array by doing `answer[i] = answer[i] * R`. For a given index `i`, `answer[i]` contains **FILL IN THE BLANK HERE** and `R` would contain **FILL IN THE BLANK HERE**. We then update `R` as `R = R * nums[i]`.
  - the product of all the elements to the left, the product of all the elements to the right

- Talk it out: Given an array *nums* of *n* integers where *n > 1*,  return an array `output` such that `output[i]` is equal to the product of all the elements of `nums` except `nums[i]`. No division allowed, and maximum time taken is *O(n)*. Fill in the blank for this *O(1)* solution: Algorithm: Initialize the empty array `answer` where for a given index `i`, `answer[i]` would contain the product of all the numbers to the left of `i`. We construct the `answer` array the same way we constructed the `L` array in the previous approach. These two algorithms are exactly the same except that we are trying to save up on space. The only change in this approach is that we don't explicitly build the `R` array from before. Instead, we simply use a variable to keep track of the running product of elements to the right and keep updating *answer* array by doing `answer[i] = answer[i] * R`. For a given index `i`, `answer[i]` contains the product of all the elements to the left and `R` would contain product of all the elements to the right. We then update `R` as **FILL IN THE BLANK HERE**.
  - R = R * nums[i]

- What are some important properties of a BST? (1)
  1. The inorder traversal of a BST gives us the elements in a sorted order.

- What is a term related to "amortized time complexity"?
  - average time complexity

- What's the difference between amortized time complexity and average time complexity?
  - Amortized analysis differs from average-case analysis in that probability is not involved; an amortized analysis guarantees the *average performance of each operation in the worst case.*
  - [stackoverflow answer](https://stackoverflow.com/questions/7333376/difference-between-average-case-and-amortized-analysis/7335098#7335098)

- What is done in an *amortized analysis*?
  - In an **amortized analysis**, we average the time required to perform a sequence of data-structure operations over all the operations performed. With amortized analysis, we can show that the average cost of an operation is small, if we average over a sequence of operations, even though a single operation within the sequence might be expensive.

- Talk it out: Implement an iterator over a binary search tree (BST). Your iterator will be initialized with the root node of a BST. Input is (a pointer to) the root node of the tree. Calling `next()` will return the next smallest number in the BST. Calling `hasNext()` will return whether there is a next smallest number in the BST. Constraints: `next()` and `hasNext()` should run in average *O(1)* time and use *O(h)* memory, where *h* is the height of the tree. Also, give a more obvious solution and explain why it uses more than *O(h)* memory.
  - In the initialization of the iterator (constructor), initialize an empty stack. Make a helper function that adds all the nodes in the leftmost branch of the tree rooted at `root` to the stack until there is no left child of the "currently pointed to" node.
  - `hasNext()` just returns if the stack is empty. *O(1)* time.
  - `next()`: Get the node stored at the top of the stack, which will be the next smallest element. To maintain the invariant that the element on top of the stack will always be the next smallest element, check if the node has a right child. If it *doesn't* have a right child, it's a leaf node, and we don't have to do anything extra other than pop the node off the stack and return its value. If it *does* have a right child, call our helper function on the node's right child. *O(n)* in the worst case, *O(1)* on average because even if we call the helper function, it won't always process *N* nodes.
  - The stack will only ever take up *O(h)* space.
  - A more obvious solution is to traverse the tree in order and add each value to an array that we can then traverse with a pointer or index. However, although this is fast with *O(n)* time, it also takes *O(n)* space because the array contains every single element (*n*) instead of the height in elements of the tree (*h*).

- Python: Given a list *nums* and an integer *k* where 1 <= *k* <= `len(nums)`, return the *kth* largest element.

```python
return heapq.nlargest(k, nums)[-1]
```

- if you're traversing a binary tree, what are some edge cases you should always check for? (3)
  - current node is null
  - left child is null
  - right child is null

- Binary Tree Right Side View: Given a binary tree, imagine yourself standing on the *right* side of it, return the values of the nodes you can see ordered from top to bottom. Example: Input: `[1,2,3,null,5,null,4]`, Output: `[1, 3, 4]`

- differences between BFS and DFS? (1)
  - BFS traverses level by level, and DFS first goes to the leaves.

- how to BFS through a binary tree?

```
declare a queue
push the root into the queue
while the queue is not empty:
    pop out a node from the front
    push that node's left child into the queue
    push that node's right child into the queue
```

- delete an element in vector *v* at index *i*

```cpp
v.erase(v.begin() + i);
```

- delete the second through fourth elements, `v[1]`, `v[2]`, and `v[3]`, in vector *v*

```cpp
v.erase(v.begin() + 1, v.begin() + 4);
```

- what kind of problem is merging e-mail accounts, and how do you solve it?
  - graph problem: Draw an edge between two emails if they occur in the same account. The problem comes down to finding connected components of this graph.

- What does it mean for a graph to be bipartite? How to determine if a graph is bipartite?
  - A graph is bipartite if we can split its set of nodes into two independent subsets A and B such that every edge in the graph has one node in A and another node in B.
  - To determine if a graph is bipartite, color a node one color, then color its connected nodes (neighbors, which are connected by edges) another color. If at any point you want to color a node the opposite color, it's not bipartite.

- Talk it out: How do you initialize a set with elements?
  - (Declare the (empty) set), make a vector of the elements, then use the vector to (initialize the set / ) make a set of the elements.

- What are the 13 most useful methods of an STL deque?
  - size()
  - empty()
  - front()
  - back()
  - operator[]
  - at()
  - assign()
  - push_back()
  - push_front()
  - pop_back()
  - pop_front()
  - insert()
  - erase()
  
- Talk it out: A binary matrix means that all elements are 0 or 1. For each individual row of the matrix, this row is sorted in non-decreasing order. Given a row-sorted binary matrix binaryMatrix, return leftmost column index(0-indexed) with at least a 1 in it. If such index doesn't exist, return -1.
  - Binary search each row.
  - Start at upper right, only move left and down.

- Given a binary tree, find the lowest common ancestor (LCA) of two given nodes in the tree. According to the definition of LCA on Wikipedia: “The lowest common ancestor is defined between two nodes p and q as the lowest node in T that has both p and q as descendants (where we allow a node to be a descendant of itself).”
  - **Approach 1: Recursive approach**: The approach is pretty intuitive. Traverse the tree in a depth first manner. The moment you encounter either of the nodes p or q, return some boolean flag. The flag helps to determine if we found the required nodes in any of the paths. The least common ancestor would then be the node for which both the subtree recursions return a True flag. It can also be the node which itself is one of p or q and for which one of the subtree recursions returns a True flag. Time: O(N); Space: O(N)
    - **Algorithm**: If the root is null or is either p or q, return the root. Recurse with the original function, but using left and right as the new "root" arguments. Store each recursion (left and right) into `TreeNode* left` and `TreeNode* right`. If they're both null, return null. If they're both not null, return root. If only left is null, return right; otherwise, return left.
  - Approach 2: Iterative using parent pointers: If we have parent pointers for each node we can traverse back from p and q to get their ancestors. The first common node we get during this traversal would be the LCA node. We can save the parent pointers in a dictionary as we traverse the tree. Time: O(N); Space: O(N)
  - Approach 3: Iterative without parent pointers: In the previous approach, we come across the LCA during the backtracking process. We can get rid of the backtracking process itself. In this approach we always have a pointer to the probable LCA and the moment we find both the nodes we return the pointer as the answer. Time: O(N); Space: O(N)

- Give 2 intuitions for this problem: Given a collection of intervals, merge all overlapping intervals. Example 1: Input: [[1,3],[2,6],[8,10],[15,18]] Output: [[1,6],[8,10],[15,18]] Explanation: Since intervals [1,3] and [2,6] overlaps, merge them into [1,6]. Example 2: Input: [[1,4],[4,5]] Output: [[1,5]] Explanation: Intervals [1,4] and [4,5] are considered overlapping.
  - Approach 1: Connected Components: If we draw a graph (with intervals as nodes) that contains undirected edges between all pairs of intervals that overlap, then all intervals in each connected component of the graph can be merged into a single interval.
  - Approach 2: Sorting: If we sort the intervals by their start value, then each set of intervals that can be merged will appear as a contiguous "run" in the sorted list.

- Trie data structure

- declare a pair of int and char called *p*

```cpp
pair<int, char> p;
```

- declare and initialize a pair of int and char called *p* with 100 and 'c'

```cpp
pair<int, char> p(100, 'c');
```

- given a pair *p1*, declare and initialize *p2* with the same values as *p1* (both of type pair<int, char>)

```cpp
pair<int, char> p2(p1);
```

- given a pair *p*, set the first element to 'c' and the second element to 69

```cpp
p.first = 'c'; p.second = 69;
```

- rightshift variable *x*

```cpp
x >>= 1;
```

- rightshift variable *x* until no more set bits

```cpp
while(x) x >>= 1;
```

- store last bit of integer *x* into integer *last_bit* (you declare *last_bit*)

```cpp
int last_bit = x & 1; // last_bit contains either 0 or 1
```

- store maximum possible integer into *i_max* WITHOUT using `INT_MAX`

```cpp
int i_max = numeric_limits<int>::max();
```

- store minimum possible integer into *i_min* WITHOUT using `INT_MIN`

```cpp
int i_min = numeric_limits<int>::min();
```

- store maximum possible float into *f_max* WITHOUT using `FLT_MAX`

```cpp
float f_max = numeric_limits<float>::max();
```

- store minimum possible float into *f_min* WITHOUT using `FLT_MIN`

```cpp
float f_min = numeric_limits<float>::min();
```

- store maximum possible double into *d_max* WITHOUT using `DBL_MAX`

```cpp
double d_max = numeric_limits<double>::max();
```

- store minimum possible double into *d_min* WITHOUT using `DBL_MIN`

```cpp
double d_min = numeric_limits<double>::min();
```

- print out log base e of 10

```cpp
cout << log(10) << endl;
```

- print out absolute value of integer *x*

```cpp
cout << abs(x) << endl;
```

- print out absolute value of float / double *x*

```cpp
cout << fabs(x) << endl;
```

- swap values of *x* and *y*

```cpp
swap(x, y);
```

- erase the lowest set bit of *x* (i.e. the least significant 1 becomes 0)

```cpp
x = x & (x - 1);
```

- if *x* = (00101100)_2, then what is the result of `x & (x - 1)`?

```
(00101000)_2
```

- Talk it out: Write a program that takes a double *x* and an integer *y* and returns `x^y`. You can ignore overflow and underflow. You cannot use built-in libraries. How is your solution better than the brute-force solution? What's the brute-force time complexity, and what's the optimal algorithm time complexity?
  - Intuition: Generalizing, if the least significant bit of *y* is 0, the result is (x^(y/2))^2; otherwise, it is x \* (x^(y/2))^2. Algorithm: Declare a double result = 1.0. Declare a long long `power` = y. If y is negative, set power to -power, and set x to 1.0 / x. While power still has set bits: { if the last bit of power is set: { result \*= x } x \*= x, rightshift power by 1. } return result. This improves on the brute-force algorithm of multiplying *x* *y* times because it uses fewer multiplications by getting more work done with each multiplication--specifically iterated squaring, i.e. forming x, x^2, (x^2)^2 = x^4, (x^4)^2 = x^8, etc. The brute-force algorithm is O(2^n), while the optimal algorithm is O(n).

- Talk it out: Write a program that takes a double *x* and an integer *y* and returns `x^y`. You can ignore overflow and underflow. You cannot use built-in libraries. What's the intuition for this problem?
  - Generalizing, if the least significant bit of *y* is 0, the result is (x^(y/2))^2; otherwise, it is x \* (x^(y/2))^2.

- Fill in the blank: Write a program that takes a double *x* and an integer *y* and returns `x^y`. You can ignore overflow and underflow. You cannot use built-in libraries. Algorithm: Declare a double result = **FILL IN THE BLANK HERE**. Declare a long long `power` = y. If y is negative, set power to -power, and set x to 1.0 / x. While power still has set bits: { if the last bit of power is set: { result \*= x } x \*= x, rightshift power by 1. } return result.
  - 1.0

- Fill in the blank: Write a program that takes a double *x* and an integer *y* and returns `x^y`. You can ignore overflow and underflow. You cannot use built-in libraries. Algorithm: Declare a double result = 1.0. Declare a **FILL IN THE BLANK HERE**. If y is negative, set power to -power, and set x to 1.0 / x. While power still has set bits: { if the last bit of power is set: { result \*= x } x \*= x, rightshift power by 1. } return result.
  - long long power = y

- Fill in the blank: Write a program that takes a double *x* and an integer *y* and returns `x^y`. You can ignore overflow and underflow. You cannot use built-in libraries. Algorithm: Declare a double result = 1.0. Declare a **FILL IN THE BLANK HERE** `power` = y. If y is negative, set power to -power, and set x to 1.0 / x. While power still has set bits: { if the last bit of power is set: { result \*= x } x \*= x, rightshift power by 1. } return result.
  - long long

- Fill in the blank: Write a program that takes a double *x* and an integer *y* and returns `x^y`. You can ignore overflow and underflow. You cannot use built-in libraries. Algorithm: Declare a double result = 1.0. Declare a long long `power` = y. If y is **FILL IN THE BLANK HERE**, set power to -power, and set x to 1.0 / x. While power still has set bits: { if the last bit of power is set: { result \*= x } x \*= x, rightshift power by 1. } return result.
  - negative

- Fill in the blank: Write a program that takes a double *x* and an integer *y* and returns `x^y`. You can ignore overflow and underflow. You cannot use built-in libraries. Algorithm: Declare a double result = 1.0. Declare a long long `power` = y. If y is negative, set power to **FILL IN THE BLANK HERE**, and set x to 1.0 / x. While power still has set bits: { if the last bit of power is set: { result \*= x } x \*= x, rightshift power by 1. } return result.
  - -power

- Fill in the blank: Write a program that takes a double *x* and an integer *y* and returns `x^y`. You can ignore overflow and underflow. You cannot use built-in libraries. Algorithm: Declare a double result = 1.0. Declare a long long `power` = y. If y is negative, set power to -power, and set x to **FILL IN THE BLANK HERE**. While power still has set bits: { if the last bit of power is set: { result \*= x } x \*= x, rightshift power by 1. } return result.
  - 1.0 / x

- Fill in the blank: Write a program that takes a double *x* and an integer *y* and returns `x^y`. You can ignore overflow and underflow. You cannot use built-in libraries. Algorithm: Declare a double result = 1.0. Declare a long long `power` = y. If y is negative, set power to -power, and set x to 1.0 / x. While power **FILL IN THE BLANK HERE**: { if the last bit of power is set: { result \*= x } x \*= x, rightshift power by 1. } return result.
  - still has set bits

- Fill in the blank: Write a program that takes a double *x* and an integer *y* and returns `x^y`. You can ignore overflow and underflow. You cannot use built-in libraries. Algorithm: Declare a double result = 1.0. Declare a long long `power` = y. If y is negative, set power to -power, and set x to 1.0 / x. While power still has set bits: { if **FILL IN THE BLANK HERE**: { result \*= x } x \*= x, rightshift power by 1. } return result.
  - the last bit of power is set

- Fill in the blank: Write a program that takes a double *x* and an integer *y* and returns `x^y`. You can ignore overflow and underflow. You cannot use built-in libraries. Algorithm: Declare a double result = 1.0. Declare a long long `power` = y. If y is negative, set power to -power, and set x to 1.0 / x. While power still has set bits: { if the last bit of power is set: { **FILL IN THE BLANK HERE** } x \*= x, rightshift power by 1. } return result.
  - result \*= x

- Fill in the blank: Write a program that takes a double *x* and an integer *y* and returns `x^y`. You can ignore overflow and underflow. You cannot use built-in libraries. Algorithm: Declare a double result = 1.0. Declare a long long `power` = y. If y is negative, set power to -power, and set x to 1.0 / x. While power still has set bits: { if the last bit of power is set: { result \*= x } **FILL IN THE BLANK HERE**, rightshift power by 1. } return result.
  - x \*= x

- Fill in the blank: Write a program that takes a double *x* and an integer *y* and returns `x^y`. You can ignore overflow and underflow. You cannot use built-in libraries. Algorithm: Declare a double result = 1.0. Declare a long long `power` = y. If y is negative, set power to -power, and set x to 1.0 / x. While power still has set bits: { if the last bit of power is set: { result \*= x } x \*= x, **FILL IN THE BLANK HERE**. } return result.
  - rightshift power by 1

- store converted string *s* to long long, into long long i

```cpp
long long i = stoll(s);
```

- store converted string *s* to long, into long i

```cpp
long i = stol(s);
```

- Write a program that takes an integer *x* and returns the integer corresponding to the digits of the input written in reverse order. For example, the reverse of 42 is 24, and the reverse of -314 is -413. Do this without making a new string. Give the time complexity as a comment.

```cpp
long long Reverse(int x) {
    long long result = 0;
    while (x) {
        /* If x is negative, x % 10 is the negative of the least significant digit.*/
        /* For example, -256 % 10 = -6. */
        result = result * 10 + x % 10;
        x /= 10;
    }
    return result;
    // Time complexity is O(n), where n is the number of digits in k.
}
```

- Talk it out: What's the time complexity to delete the element at index *i* from an array of length *n*? Why?
  - O(n - i). Deleting an element from an array entails moving all successive elements one over to the left to fill the vacated space. For example, if the array is <2,3,5,7,9,11,13,17>, then deleting the element at index 4 results in the array <2,3,5,7,11,13,17,0>. (We do not care about the last value.)

- Given a pointer to a vector of integers, `vector<int>* A_ptr`, declare a statement that allows you to work with the vector as *A*, as if *A* were a vector declared on the stack.

```cpp
vector<int>& A = *A_ptr;
```

- Given a sorted vector *v* of integers, store into boolean *found* whether or not 42 was found using binary search.

```cpp
bool found = binary_search(v.begin(), v.end(), 42);
```

- lower_bound
- upper_bound
- rotate

- How do you include all standard library functions?

```cpp
#include <bits/stdc++.h>
```

- Talk it out: Write a program that takes an array *A* and an index *i* into *A*, and rearranges the elements such that all elements less than *A[i]* (the "pivot") appear first, followed by elements equal to the pivot, followed by elements greater than the pivot. Give a O(n^2) time solution and then give a O(n) time solution.
  - O(n^2) solution: You'll want to do two passes over the array: one going forwards, one going backwards. In the first pass going forwards from the front, for each element, you'll want to find the first element less than the pivot. Swap the two elements, then break out of the inner loop to move onto the next element. In other words, you'll need two for loops, one for each element going *forwards*, and then one for each element *after* that element. In the second pass going backwards from the back, for each element, you'll want to find the first element greater than the pivot. Swap the two elements, then break out of the inner loop to move onto the next element. In other words, you'll need two for loops, one for each element going *backwards*, and then one for each element *before* that element.
  - O(n) solution: Make two passes over the array. In the first pass, move all the elements less than the pivot to the beginning. In the second pass, move all the elements greater than the pivot to the end.
  - Bonus single pass solution: Maintain four subarrays: *bottom* (elements less than pivot), *middle* (elements equal to pivot), *unclassified*, and *top* (elements greater than pivot). Initially, all elements are in *unclassified*. We iterate through elements in *unclassified*, and move elements into one of *bottom*, *middle*, and *top* groups according to the relative order between the incoming unclassified element and the pivot.

- Talk it out: Given an array denoting the daily stock price, where each price corresponds to a single day, return the maximum profit that could be made by buying and then selling one share of the stock. There is no need to buy if no profit is possible. Example: <310, 315, 275, 295, 260, 270, 290, 230, 255, 250>. The maximum profit that can be made with one buy and one sell is 30--buy at 260 and sell at 290. Note that 260 is not the lowest price, nor 290 the highest price. Give a O(n^2) time algorithm, give an O(n log n) time algorithm, then give a O(n) time algorithm.
  - Brute force, O(n^2): For each pair of indices *i* and *j > i*, if *S[i] - S[i]* is greater than the largest difference seen so far, update the largest difference to *S[j] - S[i]*. Time complexity: The outer loop is invoked *n - 1* times, and the *i*th iteration processes *n - 1 - i* elements. Processing an element entails computing a difference, performing a compare, and possibly updating a vavriable, all of which take constant time. Hence, the run time is proportional to summation from *i = 0* to *n-2* of *(n - 1 - i) = (n - 1)(n)/2*, i.e. the time complexity of the brute-force complexity is *O(n^2)*. Space is *O(1)* additional space because iterators and one floating point variable take up constant space (we don't count the original array).
  - Divide and conquer, O(n log n): Split *S* into two subarrays, *S[0, floor(n/2)]* and *S[floor(n/2) + 1, n-1]*; compute the best result for the first and second arrays, and combine these results. In the combine step we take the better of the results for the two subarrays. However, we also need to consider the case where the optimum buy and sell take place in separate subarrays. When this is the case, the buy must be in the first subarray, and the sell in the second subarray, since the buy must happen before the sell. If the optimum buy and sell are in different subarrays, the optimum buy price is the minimum price in the first subarray, and the optimum sell price is in the maximum price in the second subarray. We can compute these prices in O(n) time with a single pass over each subarray. Therefore, the time complexity *T(n)* for the divide-and-conquer algorithm satisfies the recurrence relation *T(n) = 2T(n/2) + O(n)*, which solves to O(n log n).
  - Linear loop, O(n): Intuition: The maximum profit that can be made by selling on a specific day is determined by the minimum of the stock prices over the previous days. Since the maximum profit corresponds to selling on *some* day, the following algorithm correctly computes the maximum profit. Algorithm: Iterate through *S*, keeping track of the minimum element *m* seen thus far. If the difference of the current element and *m* is greater than the maximum profit recorded so far, update the maximum profit. Time and space complexity: O(n) time, since the algorithm performs a constant amount of work per array element. It uses O(1) additional space because it uses two float-valued variables (the minimum element and the maximum profit recorded so far) and an iterator.

- print out a random integer in the range [1,6], inclusive

```cpp
unsigned seed = chrono::system_clock::now().time_since_epoch().count();
default_random_engine generator(seed);
uniform_int_distribution<int> distribution(1, 6);
cout << distribution(generator) << endl;
```

- print out a random double in the range [1.3, 2.9], inclusive

```cpp
unsigned seed = chrono::system_clock::now().time_since_epoch().count();
default_random_engine generator(seed);
uniform_real_distribution<double> distribution(1.3, 2.9);
cout << distribution(generator) << endl;
```

- print out a random double in the range [0, 1], inclusive

```cpp
unsigned seed = chrono::system_clock::now().time_since_epoch().count();
default_random_engine generator(seed);
cout << generate_canonical<double, 10>(generator) << endl;
```

- EPI version of random integer generator

```cpp

```

- Talk it out: Implement an algorithm that takes as input an array of distinct elements and a size, and returns a subset of the given size of the array elements. All subsets should be equally likely. Return the result in input array itself.
  - For each element array[i] in the array up to index *k*, pick a random number *r* from 0 to `array.size - 1`. Swap array[i] with array[r].

- Talk it out: Write a program which takes an *n* x *n* 2D array and returns the spiral ordering of the array.
  - The important part is that you'll go right, down, left, and up until you either reach (past) the bounds of the matrix, or until you've reached an entry you've already visited. You can represent each of these directions as a pair of ints (i, j) where going in that direction is what you do to *x* and *y*, i.e. *x+i* and *y+j*. You can represent whether you've visited an entry by having a second matrix keeping track of visited, or set a visited entry in the original matrix to a value not in the matrix. The tricky parts are resetting the direction and checking the conditions for whether you've reached those aforementioned bounds.

- Talk it out: Write a program which takes as input an array of digits encoding a nonnegative decimal integer *D* and updates the array to represent the integer *D + 1*. For example, if the input is <1,2,9> then you should update the array to <1,3,0>.
  - Reverse the array. Declare an integer carry with 0. Make a for loop through each element of the array. Increment the element. If the element is 10, then set that element to 0 and carry to 1. Else, set carry to 0 and break out of the loop. After the for loop, if carry is 1, append a 1 to the array. Reverse the array again. Return the array. Importantly, the edge case you must remember is if the last integer is incremented to 10. Time complexity: O(n).

- Talk it out: To check the validity of a sudoku matrix, what do you need to check?
  - Check if there are duplicates in three different parts: each row, each column, and each 3x3 region.

- What is the output of: `int i = 0; cout << ++i << endl;`
  - 1

- What is the output of: `int i = 0; cout << i++ << endl;`
  - 0

- Is it faster to update a string from the front or back?
  - back

- string compare

- What do you need to remember when converting a string to an int, and an int to a string, without library help?
  - `int i = c - '0';`
  - `char c = i + '0';`
  - If it's a negative number

- store in size_t found the index at which char *c* occurs in string *s* after but *including* index *i*

```cpp
size_t found = s.find(c, i);
```

- store in size_t found the index at which char *c* occurs after but *NOT* including index *i*

```cpp
size_t found = s.find(c, i+1);
```

- store the natural logarithm of *x* into [fill in the blank with the appropriate type] *result*

```cpp
double result = log(x);
```

- Talk it out: Write a program that performs base conversion. The input is a string, an integer b1, and another integer b2. The string represents an integer in base b1. The output should be the string representing the integer in base b2. Assume 2 <= b1, b2 <= 16. Use "A" to represent 10, "B" for 11, ..., and "F" for 15. Example: Input: s = "615, b1 = 7, b2 = 13; Output: "1A7" since 6x7^2 + 1x7 + 5 = 1x13^2 + 10x13+7).
  - If b1 == b2 or the original string is "0", return the original string. Check if the first character is a negative sign. If it is, set a boolean to indicate so. You'll use this boolean at the end. Reverse the string. Make two maps mapping 'A' to 10, 'B' to 11, etc., and vice versa. Declare an integer *num*. For each character in the (reversed) string, convert each character to an integer, especially to use the map if it's a letter, and then multiply it by b1^i, where i is the index of the character. Add this result to *num*. After the for loop, declare an empty string. While *num* > 0, initialize an integer *digit* to be *num* mod b2. Do the appropriate checking and conversion with your maps, and add the converted digit to the string. Set *num* = *num* / b2. After the while loop, if the original string was negative, add a '-' to the answer string. Reverse the answer string. Return the answer string.

- Write a program which takes as input an array of characters, and removes each `b` and replaces each `a` by two `d`s. Input: an array of characters, and an integer indicating the size of the "string." You can assume the array has enough space for all changes to the array relevant to this problem. DO IT IN PLACE, I.E. WITHOUT USING ADDITIONAL SPACE.
  - Make two loops over the array, one going forwards, one going backwards. In the one going forwards, count the number of `a`s while simultaneously shifting the non `b`s over (in effect, removing the `b`s). Using the data from the previous loop (specifically, how many `b`s  you removed) and the number of `a`s there are (and, of course, the original "size" of the array), calculate the final size of the array. Then iterate over the array backwards, building the final array backwards.

- Implement a function for reversing the words in a string *s*. For example, "Alice likes Bob" transforms to "Bob likes Alice".
  - Reverse the entire string, then reverse each word.

- Merge two sorted linked lists and return it as a new sorted list. The new list should be made by splicing together the nodes of the first two lists. Example: Input: 1->2->4, 1->3->4; Output: 1->1->2->3->4->4
  - Recursion: Intuition: the smaller of the two lists' heads plus the result of a merge on the rest of the elements. Algorithm: If either of l1 or l2 is initially null, there is no merge to perform, so we simply return the non-null list. Otherwise, we determine which of l1 and l2 has a smaller head, and recursively set the next value for that head to the next merge result. Given that both lists are null-terminated, the recursion will eventually terminate. Time: O(n + m). Because each recursive call increments the pointer to `l1` or `l2` by one (approaching the dangling `null` at the end of each list), there will be exactly one call to `mergeTwoLists()` per element in each lists. Space: O(n + m). The first call to `mergeTwoLists()` does not return until the ends of both `l1` and `l2` have been reached, so `n+m` stack frames consume O(n+m) space.
  - Iteration: It's more complicated, but you basically iterate over the two lists and keep two pointers: `prehead` and `prev`, where `prehead` is what you use to return the head of the newly merged list, and `prev` keeps track of what comes next in the newly merged list. You'll use the original nodes `l1` and `l2` to iterate through the two lists. At the end, exactly one of `l1` or `l2` is null because you'll still have one more node in one of the lists, and set that to the end. You'll return `prehead.next` because you set `prehead` to a "sentinel" pointer.

- Reverse a linked list from position m to n. Do it in one-pass. Note: 1 ≤ m ≤ n ≤ length of list. Example: Input: 1->2->3->4->5->NULL, m = 2, n = 4; Output: 1->4->3->2->5->NULL
  - You need a "sentinel pointer", or dummy pointer, to point to the head of the list. You'll return `dummy.next` at the end, which is the head. You'll need to iterate through to create a pointer to the beginning of the sub-list that will be reversed. You'll also need a pointer to a node that will be reversed. Then you'll iterate through starting with first node to be reversed, and using three pointers, you'll change each arrow to point the opposite direction.

- Given a linked list, determine if it has a cycle in it.
  - Hash table: You can use a hash table (unordered_set) to determine if there is a cycle. Algorithm: Declare a hash table / unordered_set. If you've seen the current node before, return true / there's a cycle. If you haven't seen this one before, add it to the hash table / unordered_set. Keep going until you either reach the end of the list (last one will be null) or until you've seen a node before.
  - Two pointer: Also called "Floyd's Tortoise and Hare", if you have two pointers going at different speeds, one fast and one slow, if there's a cycle, eventually they will point at the same node. If there isn't, you'll reach null.

- Write a program that takes two cycle-free singly linked lists, and determines if there exists a node that is common to both lists. Give 3 solutions with their time and space complexities.
  - Brute force: Declare a hash table, and insert each node in the first list into the hash table. Then traverse the second list and check if any node in the second list is in the first. O(n) time, O(n) space.
  - Two nested loops: For each node in the first list, iterate through all the nodes in the second list and check if they match. If they do, then there exists a node that is common to both lists. Else, there does not exist a common node. O(n^2) time, O(1) space.
  - Two pointers: Compute the length of each list. Traverse the longer list by the difference in their lengths, and then start traversing the shorter list at the same time as traversing the longer list, while comparing the two pointed-to nodes. If at any point the two pointers point to the same node, that's the first node that is common to both lists. Otherwise--that is, they never point to the same node--they don't have any nodes in common. O(n) time, O(1) space.

- Given a singly linked list and an integer *k*, write a program to remove the *k*th last element from the list. Your algorithm cannot use more than a few words of storage, regardless of the length of the list. In particular, you cannot assume that it is possible to record the length of the list.
  - Use two iterators to traverse the list. Advance the first one by *k* steps, and then advance the two iterators in tandem / simultaneously. Once the first one reaches the tail, the second iterator is *at* the *k+1*th last node, and we can remove the *k*th node.

- Given a binary tree, return the *level order* traversal of its nodes' values. (i.e., from left to right, level by level). Ex: Given binary tree [3,9,20,null,null,15,7], return its level order traversal as: [[3], [9,20], [15,7]].
  - You need two queues for this problem. If the root is NULL, return an empty vector of vector of ints. Otherwise, declare two queues, *parents* and *children*, declare a vector of ints, *v*, which will hold the values of the nodes at a single level, and declare a vector of vectors of ints, *ans*, which will be the end result. Push the root node into the *parents* queue. While either of them have elements, get the front element from the *parents* queue, and pop it off. If its left and right children aren't null, you can push them onto the *children* queue. The most important part of this is when the *parents* queue is empty: when *parents* doesn't have any more elements, you've traversed the entire level. You'll want to do 3 things: 1) set *parents* to *children* so that you can traverse the next level, 2) set *children* to an empty queue, and 3) push the vector of ints of this level *v* onto the resultant vector of vectors of ints, *ans*, and then set the vector of ints *v* to an empty vector. Once both queues are empty, you can return the vector of vectors of ints, *ans*.

- What is RPN? Write a program that takes an arithmetical expression in RPN and returns the number that the expression evaluates to.
  - Reverse Polish Notation. A string is said to be an arithmetical expression in Reverse Polish notation (RPN) if:
    1. It is a single digit or a sequence of digits, prefixed with an option -, e.g., "6", "123", "-42".
    2. It is of the form "A, B, *o*", where A and B are RPN expressions and *o* is one of +, -, x, /.
    For example, the following strings satisfy these rules: "1729", "3,4,+,2,x,1,+", "1,1,+,-2,x", "-641,6,/,28,/".
    An RPN expression can be evaluated uniquely to an integer, which is determined recursively. The base case corresponds to Rule (1.), which is an integer expressed in base-10 positional system. Rule (2.) corresponds to the recursive case, and the RPNs are evaluated in the natural way, e.g., if A evalutes to 2 and B evaluates to 3, then "A,B,x" evaluates to 6. Division is integer division, i.e. "7,2,/" evalutes to 3, not 3.5. You can assume the operands to division are always positive.
  - Process subexpressions, keeping values in a stack. Observe that we need to record partial results, and as we encounter operators, we apply them to the partial results. The partial results are added and removed in last-in, first-out order, which makes a stack the natural data structure for evaluating RPN expressions.

- Write a lambda function that takes as input integers *x* and *y* and outputs their sum. AND use function annotation(s) to indicate that the output should be an integer. Store the function into *func*.

```cpp
function<int(int, int)> func = [](int x, int y) -> int { return x + y; };
```

- Declare template types X, Y, and Z

```cpp
template<typename X, typename Y, typename Z>
```

- Initialize a (already declared) vector *v* with initial capacity *n*.

```cpp
v(n);
```

- Double the capacity of vector *v*.

```cpp
v.resize(v.size() * 2);
```

- TODO (8.7 in EPI, [Design Circular Queue](https://leetcode.com/problems/design-circular-queue/) on Leetcode): Implement a queue API using an array for storing elements. Your API should include a constructor function, which takes as argument the initial capacity of the queue, enqueue and dequeue functions, and a function which returns the number of elements stored. Implement dynamic resizing to support storing an arbitrarily large number of elements.
  - Basically, you'll need a vector, two integer indices to store where the head and tail of the queue are, and an integer to store how many elements are in the queue. When you construct the queue, just initialize the vector to have an initial capacity as requested. When you enqueue an element, if the number of elements in the queue is equal to the capacity of the vector, double the capacity of the vector. The tricky part is how you keep track of the head and tail indices. 

- Given a binary tree, determine if it is height-balanced. For this problem, a height-balanced binary tree is defined as: "a binary tree in which the left and right subtrees of every node differ in height by no more than 1." Example 1: Input: [3,9,20,null,null,15,7]; Output: true. Example 2: Input: [1,2,2,3,3,null,null,4,4]; Output: false.
  - Top-down recursion: Check the height of each node's tree, starting from the root. The height of a tree is the greater depth between its left and right subtrees. Then check the validity of the heights of the root's left and right subtrees, recursively. O(n log n) time, O(n) space.
  - Bottom-up recursion: First check if the child subtrees are balanced before comparing their heights. Similar to top-down, but visit the children subtrees first. "Check if the child subtrees are balanced. If they are, use their heights to determine if the current subtree is balanced as well as to calculate the current subtree's height." O(n) time, O(n) space.

- Given a binary tree, check whether it is a mirror of itself (ie, symmetric around its center). For example, this binary tree [1,2,2,3,4,4,3] is symmetric, but the following [1,2,2,null,3,null,3] is not.
  - A tree is symmetric if the left subtree is a mirror reflection of the right subtree. Two trees are a mirror reflection if 1) Their two roots have the same value. 2) The right subtree of each tree is a mirror reflection of the left subtree of the other tree.

- What is the search order for BFS?
  - left->right; top->bottom

- What are the three search orders for DFS?
  - postorder, preorder, inorder

- What is the search order for postorder (DFS)?
  - bottom->top; left->right

- What is the search order for preorder (DFS)?
  - top->bottom; left->right

- What is the search order for inorder (DFS)?
  - left->node->right

- In a *preorder* traversal, what is the first element visited?
  - root

- In an *inorder* traversal, what are the three sections (and order) visited?
  - left subtree, root, right subtree

- Given preorder and inorder traversal of a tree, construct the binary tree.
  - The key is that in preorder traversal, the first element is the root. Then you can separate the inorder traversal at the root, where all elements to the left of the root belong in the left subtree and all the elements to the right of the root belong in the right subtree. So using these two lists, you'll go through the preorder list linearly, where each node is the root of its own subtree. You'll use the inorder list to determine whether that node belongs in the left or right subtree.

- Declare a min-heap of strings called *min_heap* where the strings are ordered by size.

```cpp
priority_queue<string, vector<string>, function<bool(string, string)>> min_heap([](const string& a, const string& b) { return a.length() >= b.length(); });
```

- Declare a min-heap of ints called *min_heap* where the integers are ordered by size.

```cpp
priority_queue<int, vector<int>, greater<>> min_heap;
```

- Declare a max-heap of ints called *max_heap* where the integers are ordered by size.

```cpp
priority_queue<int> max_heap;
```

- Write a program that takes as input a set of sorted sequences and computes the union of these sequences as a sorted sequence. For example, if the input is <3, 5, 7>, <0, 6>, and <0, 6, 28>, then the output is <0,0,3,5,6,6,7,28>.
  - The solution I came up with that uses heaps is to use a min_heap, add each element into the min_heap, and then pop each element in order into a new vector, which we will return. This uses O(n) additional space. The solution in EPI uses a similar approach, but repeatedly picks the smallest element amongst the first element of each of the remaining part of each of the sequences.
  - The variation on Leetcode is that you can't use any additional space, but the first vector/array contains enough space to contain all the elements from both arrays. In that variation, my solution was to put all the elements from the second array at the end of the first one, and then compare from each subvector (one pointer starting from the beginning, and one pointer starting from the beginning of the newly added elements), swapping elements along the way if they didn't belong.

- Can you copy a `const_iterator` into a regular `iterator`? If not, what should you do instead? Can you increment a / iterate using a `const_iterator`?
  - No. You should copy a `const_iterator` into another `const_iterator`. You can increment a / iterate using a `const_iterator`.

- In general, how to get the *k* smallest or largest elements of a set of elements?
  - Put them into a heap, and then pop out the first *k* elements.

- How to get the *k* smallest or largest elements of a set of elements, if there are a *TON* of elements?
  - Put them into a heap, but only keep *k* elements in the heap at a time. While looping over the elements you need, if the size of the heap becomes *k+1*, pop out the top (max/min, depending on whether it's a max or min heap) element. This obviously saves a ton on space, since you only ever keep track of *k* elements.

- How would you compute the *k* stars which are closest to Earth?
  - Use a max heap. Loop over all the stars, placing them into the heap. If the size of the heap exceeds *k* (i.e. size == k + 1), pop off the top element (the max element).

- Write a program which takes as input a very long sequence of numbers and prints the numbers in sorted order. Each number is at most *k* away from its correctly sorted position. (Such an array is sometimes referred to as being *k*-sorted.) For example, no number in the sequence <-3,-1,2,6,4,5,8> is more than 2 away from its final sorted position.
  - "Sort an Almost-Sorted Array." Intuition: Take advantage of the almost-sorted property. Specifically, after we have read *k+1* numbers, the smallest number in that group must be smaller than all the following numbers. Algorithm: Declare a min_heap (*min_heap*). Add the first *k* elements into the min_heap. Stop if there are fewer than *k* elements. Declare a vector (*result*) to store the result. For every new element, add it to *min_heap* and extract the smallest (into *result*). Once we are done going through the elements in the original array, put all the remaining elements into the *result* vector by repeatedly popping off the *min_heap* until it's empty. Return *result*.

- Implement binary search with function prototype `int binary_search(int t, const vector<int>& A);`.

```cpp
int binary_search(int t, const vector<int>& A) { int L = 0; int U = A.size() - 1; while (L <= U) { int M = (U - L) / 2 + L; if (A[M] < t) { L = M + 1; } else if (A[M] == t) { return M; } else { U = M - 1; } } return -1; }
```

- Return an iterator to the first element `target` in STL container A

```cpp
auto it = find(A.begin(), A.end(), target);
```

- Store into `found` whether `target` is present in sorted STL container A

```cpp
bool found = binary_search(A.begin(), A.end(), target);
```

- In STL container A, find the first element that is not less than a targeted value, `target`. In other words, find the first element that is greater than or equal to the target value.

```cpp
auto it = lower_bound(A.begin(), A.end(), target); // `it` is an iterator
```

- In STL container A, find the first element that is greater than a targeted value, `target`.

```cpp
auto it = upper_bound(A.begin(), A.end(), target); // `it` is an iterator
```

- What does `lower_bound()` do?
  - Return (an iterator to) the first element greater than or equal to the target value.

- What does `upper_bound()` do?
  - Return (an iterator to) the first element greater than the target value.

- Write a method that takes a sorted array and a key and returns the index of the *first* occurrence of that key in the array. Return -1 if the key does not appear in the array. Give the naive brute force solution and explain why that doesn't save any time over a linear search, and then give the optimal solution and its time complexity.
  - The naive solution is to binary search until you hit the key, and then go left until you get a value not equal to the key. The reason that doesn't save any time over a linear search is that in the worst case, you hit the key at the right of the array, but then all of the elements are the same as the key, which means going left until the first element will take total O(n) time. The optimal solution is to do binary search, except that when you hit the key, you eliminate all elements to the right of it and keep proceeding with binary search (because no elements to the right of that one will be the *leftmost* key). One key difference is that, in normal binary search, you return -1 after the while loop if you don't find it, but in this one, you declare a *result* index at the beginning with value -1, and *result* won't change if you never find the key (return *result* at the end). A second key difference is that the element at the middle index *is* equal to the key, you set *result* to that middle index and then set *right* to *mid - 1*.

- Write a program which takes a nonnegative integer and returns the largest integer whose square is less than or equal to the given integer. For example, if the input is 16, return 4; if the input is 300, return 17, since 17^2 = 289 < 300 and 18^2 = 324 > 300. What's the key intuition for this problem?
  - If x^2 < k, then no number smaller than x can be the result, and if x^2 > k, then no number greater than or equal to x can be the result.

- Design an algorithm for computing the *k*th largest element in an array, where all elements are distinct.
  - Brute force, O(n log n) time, O(1) additional space solution: sort the array in descending order and return the element at index k - 1.
  - O(n log k) time, O(k) additional space solution: store a candidate set of *k* elements in a min-heap, and return the top element after looping through the elements.
  - O(n) time, O(1) additional space solution: Similar to quicksort, select an element at random, the "pivot", and partition the remaining entries into those greater than the pivot and those less than the pivot. Since the problem states all elements are distinct, there cannot be any other elements equal to the pivot. If there are exactly k - 1 elements greater than the pivot, the pivot must be the kth largest element. If there are more than k-1 elements greater than the pivot, we can discard elements less than or equal to the pivot--the k-largest element must be greater than the pivot. If there are less than k-1 elements greater than the pivot, we can discard elements greater than or equal to the pivot.

- An array is said to be cyclically sorted if it is possible to cyclically shift its entries so that it becomes sorted. For example, the array <4,5,0,1,2> is cyclically sorted--a cyclic left shift by 2 leads to a sorted array. Design an O(log n) algorithm for finding the position of the smallest element in a cyclically sorted array. Assume all elements are distinct. For example, in the array mentioned above, your algorithm should return 0.
  - You'll basically be implementing a variation of binary search. The key points are the following: for any m, if A[m] > A[n - 1] where n is the size of the array, then the minimum value must be an index in the range [m + 1, n - 1]. Conversely, if A[m] < A[n - 1], then no index in the range [m + 1, n - 1] can be the index of the minimum value. The differences in implementation of this algorithm from binary search are that you end when left < right, rather than left <= right, because the loop ends when left == right. The condition is A[mid] > A[right] instead of A[mid] == key in binary search. You set left = mid + 1 if the condition is true, otherwise you set right = mid. At the end, return left.

- Suppose you were given a file containing roughly one billion IP addresses, each of which is a 32-bit quantity. How would you programmatically find an IP address that is not in the file? Assume you have unlimited drive space but only a few megabytes of RAM at your disposal.
  - You don't want to sort it and then iterate through it, searching for a gap between values, because although time complexity is O(n log n), where n is the number of entries, you'll need to use the disk as storage to keep RAM usage low which means it'll be super slow.
  - We can't compute the largest entry and add one to it because if the largest entry is 255.255.255.255 (the highest possible IP address), adding one to it will lead to overflow. Same with smallest entry and underflow. (In practice, this would be a good heuristic).
  - You don't want to add them all to a hash table, since that would take more than half a GB, not to mention additional memory overhead of a hash table can get up to 6 GB in this case.
  - What you'll want to do is to make multiple passes through the file, where you group IP addresses into categories based on their leading bits. For example, you can count the number of IP addresses whose leading bit is a 1, and count those whose leading bit is a 0. One of these counts must be less than 2^31, since at least one IP address must exist that is not present in the file. Then we can focus our attention on IP addresses in the file that begin with the bit that has a lower count, and continue the process of elimination based on the second bit. This entails 32 passes, and uses only two integer-valued count variables as storage.
  - Since we have more storage, we can count on groups of bits. Specifically, we can count the number of IP addresses in the file that begin with 0, 1, 2, ..., 2^16 - 1 using an array of 2^16 integers that can be represented with 32 bits.
  - I'm tired, so you can check out the rest in EPI, problem 11.9, but the process is similar with this array of 2^16 integers.

- Write a program which takes text for an anonymous letter and text for a magazine and determines if it is possible to write the anonymous letter using the magazine. The anonymous letter can be written using the magazine if for each character in the anonymous letter, the number of times it appears in the anonymous letter is no more than the number of times it appears in the magazine.
  - Make a single pass over the letter, storing the character counts for the letter in a single hash table--keys are characters, and values are the number of times that character appears. Next, we make a pass over the magazine. When processing a character *c*, if *c* appears in the hash table, we reduce its count by 1; we remove it from the hash when its count goes to zero. If the hash becomes empty, we return true. If we reach the end of the magazine and the hash is nonempty, we return false--each of the characters remaining in the hash occurs more times in the letter than the magazine. In the worst case, the letter is not constructible or the last character of the magazine is essentially required. Therefore, the time complexity is O(m + n) where m and n are the number of characters in the letter and magazine, respectively. The space complexity is the size of the hash table constructed in the pass over the letter, i.e., O(L), where L is the number of distinct characters appearing in the letter.

- check if element *x* is in a deque of ints, *q*

```cpp
if (find(q.begin(), q.end(), x) == q.end())
```

- store in an iterator *it* an iterator to element *x* from a deque of ints, *q*

```cpp
deque<int>::iterator it = find(q.begin(), q.end(), x);
```

- erase element *x* from a deque of ints, *q*

```cpp
deque<int>::iterator it = find(q.begin(), q.end(), x); q.erase(it);
```

- is STL list doubly-linked or singly-linked?
  - doubly-linked

- Given an STL list *l*, store an iterator to the beginning of the list into iterator *it*

```cpp
list<int>::iterator it = l.begin();
```

- Given an STL list *l*, store an iterator to the end of the list into iterator *it*

```cpp
list<int>::iterator it = l.end();
```

- Given an STL list *l*, store a reverse iterator to the reverse beginning of the list into reverse iterator *rit*

```cpp
list<int>::reverse_iterator rit = l.rbegin();
```

- Given an STL list *l*, store a reverse iterator to the reverse end of the list into reverse iterator *rit*

```cpp
list<int>::reverse_iterator rit = l.rend();
```

- Check if STL list *l* is empty

```cpp
if (l.empty())
```

- Check if STL list *l* has 2 elements

```cpp
if (l.size() == 2)
```

- Access a reference to the first element in STL list *l*

```cpp
l.front();
```

- Access a reference to the last element in STL list *l*

```cpp
l.back();
```

- Put element *x* onto the front of STL list *l*

```cpp
l.push_front(x);
```

- Delete the first element of STL list *l*

```cpp
l.pop_front();
```

- Put element *x* onto the back of STL list *l*

```cpp
l.push_back(x);
```

- Delete the last element of STL list *l*

```cpp
l.pop_back(x);
```

- Insert element *x* into STL list *l* at position *i*

```cpp
l.insert(l.begin() + i, x);
```

- Delete element from STL list *l* at position *i*

```cpp
l.erase(l.begin() + i);
```

- Design and implement a data structure for Least Recently Used (LRU) cache. It should support the following operations: get and put. `get(key)` - Get the value (will always be positive) of the key if the key exists in the cache, otherwise return -1. `put(key, value)` - Set or insert the value if the key is not already present. When the cache reached its capacity, it should invalidate the least recently used item before inserting a new item. The cache is initialized with a positive capacity. All keys and values are integers.
  - You'll need an STL list of ints to store the recently used items, an unordered_map of integers to integers to store key-value pairs, and an unordered_map of integers to `list<int>::iterator`s to store the positions of the keys in the STL list of ints. The STL list of ints will store integer keys in order of most recent to least recent. That is, the most recent items will be in the front, and the least recent items will be in the back. `put()` and `get()` are pretty easy, but you'll need a helper function called `use()` in order to keep track of the status of the STL list of ints, a.k.a. the most recently used items.
  - Constructor: Assign the given capacity to our class variable, capacity.
  - `put()`: Call helper function `use()` with argument key, then use the unordered_map of integers to integers to set the key and value appropriately.
  - `get()`: If your unordered_map contains the key, call helper function `use()` with argument key and return the value corresponding to that key. Otherwise, return -1.
  - `use()`: This is the key function, which takes one argument, key. If the key is in your unordered map of integers to list iterators, erase it from the list using the unordered map of integers to list iterators (we mapped each key to its position in the list [its iterator]). Else if the list size is greater than or equal to the capacity assigned at the beginning, get the element from the back of the list (the oldest element), then pop it off from the back. Erase that old element from our unordered map of integers to integers (keys to values), and erase it from our unordered map of integers to iterators (keys to positions in list). Outside of the if statements, push the given key onto the front of the list. Use the unordered map of integers to iterators (keys to positions in list) to assign the key to an iterator to the beginning of the list.

- People do not like reading text in which a word is used multiple times in a short paragraph. You are to write a program which helps identify such a problem. Write a program which takes as input an array and finds the distance between a closest pair of equal entries. For example, if s = <"All","work","and","no","play","makes","for","no","work","no","fun","and","no","results">, then the second and third occurrences of "no" is the closest pair.
  - Declare a `min_distance` variable to keep track of what the minimum distance between identical words has been so far, and set it to the maximum value of an integer. Scan through the array. As we scan through the array, for each value seen so far, we store in a hash table the latest index at which it appears. When processing the element, we use the hash table to see the latest index less than the current index holding the same value. Furthermore, during element processing, if we *have* seen the element before, we can use the difference between the latest index and the current index (distance) and compare it to the `min_distance` so far. If it's less than the `min_distance`, update the `min_distance` variable to hold this distance.

- Write a program to test whether the letters forming a string can be permuted to form a palindrome. For example, "edified" can be permuted to form "deified".
  - The key intuition: If a string has an even length, each character must occur an even number of times. If it has an odd length, all but one character must occur an even number of times.

- Write a program which takes as input two sorted arrays, and returns a new array containing elements that are present in both of the input arrays. The input arrays may have duplicate entries, but the returned array should be free of duplicates. For example, the input is <2,3,3,5,5,6,7,7,8,12> and <5,5,6,8,8,9,10,10>, your output should be <5,6,8>.
  - Declare an answer array. Go through the two arrays A and B simultaneously in increasing order, using index variables i and j. While i < size of A and j < size of B: { If the two elements from each array match, AND (i == 0 OR A[i-1] != A[i]), add the element to the answer array, and increment i and j. Else if A[i] < B[j], increment i. Else, increment j. }. Return the answer array.

- Write a program which takes as input two sorted arrays of integers, and updates the first to the combined entries of the two arrays in sorted order. Assume the first array has enough empty entries at its end to hold the result.
  - English explanation: Basically, have two pointers to the last element of each array, and have a pointer to the end of the (unfilled part of) the first array. Compare the pointed-to elements in each array, starting from the end. Whichever element is greater, that element belongs at the end of the overall array (pointed to by the third pointer), so write that element at the end of the overall array. Decrement the pointer of the array from which the greater element came from, and decrement the end-array pointer. This will put all the greatest elements in order, starting from the end. You'll stop once either of the first two pointers points past the first element in either array. Once this happens, if the pointer of the second array isn't pointing past its first element, put all the remaining elements of the second array into the remaining empty slots of the first array until it does point past the second array's first element.
  - Pseudocode algorithm: Let A be the first array, and B be the second array. Let m be the number of elements originally in A, and n be the number of elements originally in B. Set index i equal to m - 1. Set index j equal to n - 1. Set k equal to m + n - 1; While both i and j are greater than or equal to 0, { If A[i] > B[j], A[k] = A[i]. Decrement k, decrement i. Else, A[k] = B[j]. Decrement k, decrement j. }. While j is greater than or equal to 0, { A[k] = B[j]. Decrement k, decrement j. }.

- For `set` and `map`, the iterator returned by `begin()` traverses keys in ascending order. (To iterate over keys in descending order, use `rbegin()`.)
- For `set` and `map`, `*begin()/*rbegin()` yield the smallest and largest keys in the BST.
- For {{c1::`set` and `map`}}, `lower_bound(x)/upper_bound(x)` return the first element that is greater than or equal to x / first element greater than the argument x.
- For `set` and `map`, `equal_range(x)` return the range of values equal to the argument x.

- Definition of a binary search tree:
  - The left subtree of a node contains only nodes with keys less than the node's key.
  - The right subtree of a node contains only nodes with keys greater than the node's key.
  - Both the left and right subtrees must also be binary search trees.

- To validate if a binary tree is a valid binary search tree:
  - Intuition: Do an in-order traversal, and make sure that each node is less than the previously visited node.
  - Algorithm: If the root is null, return true. (We are about to do an in-order traversal.) Declare an empty stack. Declare a `pre` TreeNode, and set it to null. While root is not null OR the stack is not empty: { While root is not null: { Push the root onto the stack. Set root to its left child. (We are traversing the left branch of the tree/subtree, putting all the left nodes along the left branch of the tree/subtree into the stack.) } Set root to the top of the stack, and pop off the top of the stack. If `pre` is not null and root.val <= pre.val, return false. Set pre to root. Set root to its right child. } If you reach this point outside the while loop, return true.

- To find the first element greater than a search query *x* in a BST:
  - Declare a null node pointer *first_so_far* that we will return at the end.
  - Go through the tree starting from the root, comparing each node's value to the query.
    - If the node's value is greater than the query *x*, set *first_so_far* to this node, and go into the left subtree by setting node to node->left.
    - Otherwise, this node's value and all the values of the nodes in its left subtree are less than or equal to our query *x*, so traverse the right subtree by setting node to node->right.
  - Return *first_so_far*.

- Write a program that takes as input a BST and an integer *k*, and returns the *k* largest elements in the BST in decreasing order.
  - Perform a reverse in-order traversal, and stop once you have visited *k* nodes.
  - To perform said traversal, recurse first on the right subtree and then on the left subtree.

- Solve the Towers of Hanoi problem, where the function prototype is `vector<vector<int>> ComputeTowerHanoi(int num_rings)`. You have three pegs to use.
  - Algorithm Big idea: Let's number each peg as P1, P2, and P3. 1) Move all but the lowest ring from P1 to P3 using P2 as an intermediary. 2) Move the lowest ring from P1 to P2. 3) Move the rings from P3 to P2 using P1. 4) Solved!
  - How to represent the things you need: To represent the pegs and their rings, you'll need an array of size 3 (number of pegs) in which the elements are stacks of integers, where the integers represent the rings.

- Declare an empty array of size `kNumPegs` called `pegs` in which the elements are stacks of integers.

```cpp
array<stack<int>, kNumPegs> pegs;
```

- A nonattacking placement of queens is one in which no two queens are in the same row, column, or diagonal. Write a program which returns all distinct nonattacking placements of *n* queens on an *n x n* chessboard, where *n* is an input to the program.
  - How to represent the things you need: You can actually represent all positions using an array of size *n*, where the *i*th entry is the location of the queen on row *i*. That is, j = array[i], where (i, j) is a position on the board.
  - Algorithm big idea: Keep filling in each entry in the array, while checking if there are conflicts. If there's a conflict, backtrack. If you get a full array with no conflicts, that's a solution.

- convert an existing string *s* into all lowercase letters

```cpp
transform(s.begin(), s.end(), s.begin(), ::tolower);
```

- convert an existing string *s* into all uppercase letters

```cpp
transform(s.begin(), s.end(), s.begin(), ::toupper);
```

- Given two non-negative integers num1 and num2 represented as string, return the sum of num1 and num2.

Note:

1. The length of both num1 and num2 is < 5100.
2. Both num1 and num2 contains only digits 0-9.
3. Both num1 and num2 does not contain any leading zero.
4. You must not use any built-in BigInteger library or convert the inputs to integer directly.

Algorithm: 

- Initialize an empty `res` structure. Once could use array in Python and StringBuilder in Java.
- Start from `carry = 0`.
- Set a pointer at the end of each string: `p1 = num1.length() - 1`, `p2 = num2.length() - 1`
- Loop over the strings from the end to the beginning using `p1` and `p2`. Stop when both strings are used entirely.
  - Set `x1` to be equal to a digit from string `nums1` at index `p1`. If `p1` has reached the beginning of `nums1`, set `x1` to `0`.
  - Do the same for `x2`. Set `x2` to be equal to digit from string `nums2` at index `p2`. If `p2` has reached the beginning of `nums2`, set `x2` to `0`.
  - Compute the current value: `value = (x1 + x2 + carry) % 10`, and update the carry: `carry = (x1 + x2 + carry) / 10`.
  - Append the current value to the result: `res.append(value)`.
- Now both strings are done. If the carry is still non-zero, update the result: `res.append(carry)`.
- Reverse the result, convert it to a string (because Java StringBuilder requires this), and return that string.