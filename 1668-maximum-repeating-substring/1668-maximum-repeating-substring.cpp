class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int k =0;
        string pattern ="";
        while(true)
        {
            pattern+=word;
            if(sequence.find(pattern)==string::npos)break;
            k++;
        }
        return k;

        
    }
};