// My solution as of 5/30/20

vector<int> arraysIntersection(vector<int>& arr1, vector<int>& arr2, vector<int>& arr3) {
    vector<int> v1(arr1.size() + arr2.size());
    vector<int>::iterator it;
    it = set_intersection(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), v1.begin());
    v1.resize(it - v1.begin());
    vector<int> v2(v1.size(), arr3.size());
    it = set_intersection(v1.begin(), v1.end(), arr3.begin(), arr3.end(), v2.begin());
    v2.resize(it - v2.begin());
    return v2;
}