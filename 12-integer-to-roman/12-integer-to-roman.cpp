class Solution {
public:
    string intToRoman(int num) 
    {
        string symbol[] = {"-", "I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"}, roman = "";
        int value[] = {0, 1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000}, i = 13;
        while(num > 0 && i)
        {
            if(num >= value[i])
            {
                roman = roman + symbol[i];
                num -= value[i];
            }
            else
                i--;
        }
        return roman;
    }
};
