class Solution {
public:
    int countOperations(int a, int b) {
        int operations = 0;
        int larger = max(a, b);
        int smaller = min(a, b);

        while (larger > 0 && smaller > 0) {
            operations += larger / smaller;
            larger = larger % smaller;
            swap(larger, smaller);
        }
        return operations;
    }
};
