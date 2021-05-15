class Solution {
public:
    bool squareIsWhite(string coordinates) {
        // if MOD 2 of sum of both coords (in ASCII) is ODD then it's WHITE otherwise BLACK
        return (coordinates[0] + coordinates[1]) % 2;
    }
};