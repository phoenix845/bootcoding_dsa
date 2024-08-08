class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> counter;
        for (auto &element : arr) ++counter[element];

        for (auto &element : arr) {
            if (counter[element] == 1) {
                --k;
                if (k == 0) return element;
            }
        }
        return "";
    }
};
