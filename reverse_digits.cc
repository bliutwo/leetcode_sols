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
