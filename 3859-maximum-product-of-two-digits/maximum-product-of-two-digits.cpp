class Solution {
public:
    int maxProduct(int n) {
        vector<int> v;
        int max = 0;

        while (n) {
            int x = n % 10;
            v.push_back(x);
            n = n / 10;
        }

        for (int i = 0; i < v.size() - 1; i++) {
            for (int j = i + 1; j < v.size(); j++) {
                int m = v[i] * v[j];

                if (max < m) {
                    max = m;
                }
            }
        }
        return max;
    }
};