using namespace std;
class Solution {
public:
    int differenceOfSums(int n, int m) {
        int false_total = 0;
        int true_total = 0;
        unsigned int i = 0;

        for (i = 0; i < n+1; i++) {
            if (i % m == 0) {
                true_total += i;
            }
            else {
                false_total += i;
            }
        }

        return (false_total - true_total);
    }
};
