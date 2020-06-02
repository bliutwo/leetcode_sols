# Leetcode Memo

**TODO**: Organize these into sections based on which data structure is featured (i.e. sections should be `vector` or `map`, etc.).

## Original

Here are some things that I should know by heart:

- how to erase a character in a string *s* at index *i*
- get the index of character *c* in string *s*
- what data structure is best for lookup
  - caveat: what data structure is best for storing characters can still be
    used for lookup
- how to initialize a vector with *n* zeros
- how to get the length of a string *s*
- how to get the length of a vector *v*
- how to concatenate vectors *v1* and *v2*
- ~~how to return absolute value of *x*~~ leetcode doesn't have `#include <cstdlib>`
- convert an int to a string or a string to an int
- convert a [char to an int](https://stackoverflow.com/questions/5029840/convert-char-to-int-in-c-and-c)

I'll insert a link to a set of flashcards at some point.

## 5/28-5/30

- Insert integer *n* into vector *v* at index *i*, pushing the elements afterwards one index forward

```cpp
v.insert(v.begin() + i, n);
```

- Find integer *n* in vector *v* and store index where *n* is stored in *i*

```cpp
#include <algorithm>
auto it = v.find(v.begin(), v.end(), n);
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
- Reverse a vector *v*

- Question mark colon syntax for picking the greater of integer *a* or integer *b*

- Name for question mark colon syntax
  - ternary operator

- Do you need to write your own `abs()` function for leetcode c++?
  - Yes

- `for` loop for all elements in vector *v*

```cpp
for (int i = 0; i < v.size(); i++)
```

- `for` loop for all elements except last in vector *v*

```cpp
for (int i = 0; i < v.size() - 1; i++)
```

- store a lower case version of a char *c* in char *a*

```cpp
char a = tolower(c);
```

- convert char *c* to its lower case version

```cpp
c -= 32;
```

- convert char *c* to its upper case version

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

- check if integer key *i* in `unordered_map<int, int> m`

```cpp
if (m.find(i) != m.end())
```

- declare a `map` called `m` mapping `int` to `char`

```cpp
map<int, char> m;
```

- declare and initialize a `map` mapping first four alphanumeric chars to their
  zero-indexed position in alphabet

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

- output each key and value separated by a colon with a new line after each key-value printing with an iterator *it* for `map<char, int> m`

```cpp
map<char, int>::iterator it; for (it = m.begin(); it != m.end(); it++) cout << it->first << ':' << it->second << endl;
```

- output each key and value separated by a colon with a new line after each key-value printing for `map<char, int> m` with `auto` but WITHOUT keywords `key` and `val`

```cpp
for (auto const& x : m) cout << x.first << ':' << x.second << endl;
```

- output each key and value separated by a colon with a new line after each key-value printing for `map<char, int> m` with `auto` but WITH keywords `key` and `val`

```cpp
for (auto const& [key, val] : m) cout << key << ':' << val << endl;
```

- output elements of `set<int> s` using `auto`

```cpp
for (auto const& x : s) cout << x << endl;
```

- `rbegin()` and `rend()` iterators
- `iterator` vs. `reverse::iterator`
- sort a vector of ints *v* in increasing order
- sort a vector of ints *v* in decreasing order
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
  - `set_difference`

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

- initialize 2-d vector *v* with all 0's with dimensions *n* and *m*

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
for (size_t len = 1; len <= S.length(); len++)
    for (size_t i = 0; i < S.length() - len + 1; i++)
        cout << S.substr(i, len) << endl;
```
