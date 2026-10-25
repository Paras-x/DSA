class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> count;
        vector<int> answer;

        for (int i = 0; i < boxes.size(); i++) {
            if (boxes[i] == '1') {
                count.push_back(i);
            }
        }

        for (int i = 0; i < boxes.size(); i++) {
            int sum = 0;

            for (int j = 0; j < count.size(); j++) {
                sum += abs(count[j] - i);
            }

            answer.push_back(sum);
        }

        return answer;
    }
};

