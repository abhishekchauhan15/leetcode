class Solution {
public:
    int calPoints(vector<string>& ops) {
       int record = 0, score = 0;
        vector<int> rounds;
        for (string x : ops) {
            if (x == "C") {
                record -= rounds.back();
                rounds.pop_back();
                continue;
            }
            else if (x == "D") {
                record += score = rounds.back() * 2;
            }
            else if (x == "+") {
                record += score = rounds[rounds.size() - 1] + rounds[rounds.size() - 2];
            }
            else {
                record += score = stoi(x);
            }
            rounds.push_back(score);
        }
        return record;
        
    }
};