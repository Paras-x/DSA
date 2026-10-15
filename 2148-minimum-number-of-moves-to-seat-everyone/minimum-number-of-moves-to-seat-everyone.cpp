class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());

        int p = 0;
        int i = 0;
        int j = 0;

        while (i < seats.size() && j < students.size())

        {
            p += abs(seats[i] - students[j]);

            i++;
            j++;
        }

        return p;
    }
};