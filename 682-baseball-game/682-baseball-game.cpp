class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> rec;
        for (string ch : ops) 
        {
            if (ch == "+")
                rec.push_back(rec.back() + rec[rec.size() - 2]); // add new: sum of last two scores
            else if (ch == "D")
                rec.push_back(rec.back() * 2); // add new: double the last score
            else if (ch == "C")
                rec.pop_back(); // remove last: invalidate the last score
            else 
                rec.push_back(stoi(ch)); // add new score
        }
        
        return accumulate(rec.begin(), rec.end(), 0); // return sum of all scores
    }
};