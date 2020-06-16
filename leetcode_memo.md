# Things to Memorize for Leetcode (C++ and Some Python)

This is a list of things you should memorize in order to complete leetcode problems.

**TODO**: Organize these into sections based on which data structure is featured (i.e. sections should be `vector` or `map`, etc.).

**NOTE**: All cards are written for C++, unless specified to be for Python.

[Text file](https://drive.google.com/file/d/1MgthutGnuFLUzl3uMxvAT7J4f5kfKHLY/view?usp=sharing) containing notes. Can be converted into cards/notes using [Quizlet](https://help.quizlet.com/hc/en-us/articles/360029977151-Creating-sets-by-importing-content) or [Anki](https://docs.ankiweb.net/#/importing).

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

- convert char *c* to int *i*

```cpp
int i = c - '0';
```

- convert string *s* to int *num*

```cpp
int num = stoi(s);
```
  
- convert a [char to an int](https://stackoverflow.com/questions/5029840/convert-char-to-int-in-c-and-c)
  - looks like you can't do this on leetcode because you'll get a runtime error

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

- check if char *c* is upper case alphanumeric

```cpp
if (c >= 'A' && c <= 'Z')
```

- check if char *c* is lower case alphanumeric

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
  - log(n) + rebalance

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

- add a new entry to `map<int, char> m;` mapping `4` to `d`

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

- output each key and value separated by a colon with a new line after each key-value printing for `map<char, int> m` with `auto` but WITHOUT keywords `key` and `val` (and with const ref)

```cpp
for (auto const& x : m) cout << x.first << ':' << x.second << endl;
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
- store bigger of two integers *i* and *j* into integer *a*

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
  
- what are the 7 most useful STL data structures?
  - stack
  - queue
  - deque
  - list
  - vector
  - string
  - set
  
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
  
- what does `std::vector::back` do?
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

- What are two ways to traverse a binary search tree?
  - 1) recursively, 2) using a stack

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
  - For every node, length of longest path which pass it = MaxDepth of its left subtree + MaxDepth of its right subtree. Make sure you have a variable keeping track of the maximum depth you've seen so far.

- How to represent the greatest double possible?

```cpp
double maximum = DBL_MAX;
```

- How to represent the smallest double possible?

```cpp
double minimum = DBL_MIN;
```

- How to represent the greatest integer possible?

```cpp
int maximum = INT_MAX;
```

- How to represent the smallest integer possible?

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

- Talk it out: How do you check if a really long string is a palindrome (it's the same string if reversed)?
  - Have two pointers to each end of the string. Increment/decrement each one by one until you get to the middle (at which point it's true). If at any point the chars are different, then it's not a palindrome.

- Talk it out: How do you check if a really long string is a palindrome (it's the same string if reversed), if you are able to delete a single character?
  - Have two pointers to each end of the string. Increment/decrement each one by one until you get to the middle (at which point it's true). If at any point the chars are different, then check two cases: Increment one end one character faster than the other (one case for each end), and do the regular two-pointer approach for the two new inner strings, each of which has a deleted character. If either one reaches the middle without differing characters, the whole thing is true.
  
- check if char *c* is alphanumeric (regardless of uppercase or lowercase)

```cpp
if (isalnum(c))
```

- List it out, out loud: What are some common mistakes you make while coding that you should check for before submitting your solution? (1)
  - use `--` instead of `++`, or vice versa
  
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
  - Use three arrays: *L*, *R*, and *output*. `L[i]` will contain the product of all the elements *to the left of the element at index i*. `R[i]` will contain the product of all the elements *to the right of the element at index i*. Finally, `output[i]` will contain `R[i] * L[i]`. This takes *O(n)* because you're looping through the original array three times, or *3n* operations, where *n* is the length of the original array. The *O(1)* space solution is the same, except you use *only* the array *output*, and make it functionally `L`, then functionally `L*R`, which is the same as the *output* array.

- What are some important properties of a BST? (1)
  1. The inorder traversal of a BST gives us the elements in a sorted order.

- What is another name "amortized time complexity"?
  - average time complexity

- Talk it out: Implement an iterator over a binary search tree (BST). Your iterator will be initialized with the root node of a BST. Input is (a pointer to) the root node of the tree. Calling `next()` will return the next smallest number in the BST. Calling `hasNext()` will return wheter there is a next smallest number in the BST. Constraints: `next()` and `hasNext()` should run in average *O(1)* time and use *O(h)* memory, where *h* is the height of the tree. Also, give a more obvious solution and explain why it uses more than *O(h)* memory.
  - In the initialization of the iterator (constructor), initialize an empty stack. Make a helper function that adds all the nodes in the leftmost branch of the tree rooted at `root` to the stack until there is no left child of the "currently pointed to" node.
  - `hasNext()` just returns if the stack is empty. *O(1)* time.
  - `next()`: Get the node stored at the top of the stack, which will be the next smallest element. To maintain the invariant that the element on top of the stack will always be the next smallest element, check if the node has a right child. If it *doesn't* have a right child, it's a leaf node, and we don't have to do anything extra other than pop the node off the stack and return its value. If it *does* have a right child, call our helper function on the node's right child. *O(n)* in the worst case, *O(1)* on average because even if we call the helper function, it won't always process *N* nodes.
  - The stack will only ever take up *O(h)* space.
  - A more obvious solution is to traverse the tree in order and add each value to an array that we can then traverse with a pointer or index. However, although this is fast with *O(n)* time, it also takes *O(n)* space because the array contains every single element (*n*) instead of the height in elements of the tree (*h*).