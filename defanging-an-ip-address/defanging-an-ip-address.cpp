class Solution {
public:
    string defangIPaddr(string address) {
        address = regex_replace(address, regex("\\."), "[.]");
        return address;
    }
};