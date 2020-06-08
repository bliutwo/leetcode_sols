# Things to Memorize for Leetcode (C++ and Python)

This is a list of things you should memorize in order to complete leetcode problems.

**TODO**: Organize these into sections based on which data structure is featured (i.e. sections should be `vector` or `map`, etc.).

**NOTE**: All cards are written for C++, unless specified to be for Python.

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

- get intersection of sets *s1*, *s2*, *s3*
- get union of sets *s1*, *s2*, *s3*
- get intersection of vectors *v1* and *v2*
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
string s2 = s1.substr(s1.begin() + n, s1.begin() + m);
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
  
- what are the 6 most useful STL data structures?
  - stack
  - queue
  - deque
  - list
  - vector
  - string
  
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