class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {

        int i = 0;
        int bad = 0;
        int maxLen = 0;

        for (int j = 0; j < answerKey.size(); j++) {

            // Current element zero hai
            if (answerKey[j] == 'F')
                bad++;

            // K se zyada zero ho gaye
            while (bad > k) {

                if (answerKey[i] == 'F')
                    bad--;

                i++;
            }

            // Valid window
            maxLen = max(maxLen, j - i + 1);
        }

         i = 0;
         bad = 0;
      

        for (int j = 0; j < answerKey.size(); j++) {

            // Current element zero hai
            if (answerKey[j] == 'T')
                bad++;

            // K se zyada zero ho gaye
            while (bad > k) {

                if (answerKey[i] == 'T')
                    bad--;

                i++;
            }

            // Valid window
            maxLen = max(maxLen, j - i + 1);
        }

        return maxLen;
    }
};