compress string

class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int i = 0;         // read pointer
        int index = 0;     // write pointer

        while (i < n) {
            char current = chars[i];
            int count = 0;

            // Count how many times current character repeats
            while (i < n && chars[i] == current) {
                count++;
                i++;
            }

            // Write the character
            chars[index++] = current;

            // Write the count if > 1
            if (count > 1) {
                string cntStr = to_string(count);
                for (char c : cntStr) {
                    chars[index++] = c;
                }
            }
        }

        return index;
    }
};
