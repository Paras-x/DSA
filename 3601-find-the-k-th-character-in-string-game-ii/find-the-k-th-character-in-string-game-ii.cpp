class Solution {
public:

    char solve(long long k, int i, vector<int>& operations) {

    // 1. Base case
    if (i == 0) {
        return 'a';
    }
    // Agar previous string ki length k se already badi hai
        if (i - 1 >= 62) {
            return solve(k, i - 1, operations);
        }

    // 2. Previous string ki length
    long long len = 1LL << (i - 1);

    // 3. First half
    if (k <= len) {
        return solve(k, i - 1, operations);
    }

    // 4. Second half me hai
    k = k - len;

    // 5. Previous position ka character nikalo
    char ch = solve(k, i - 1, operations);

    // 6. Operation ka effect
    if (operations[i - 1] == 1) {
        ch = (ch - 'a' + 1) % 26 + 'a'; //z ke bad a aana chahiye
    }

    return ch;
}

    char kthCharacter(long long k, vector<int>& operations) {
    return solve(k, operations.size(), operations);
}

};