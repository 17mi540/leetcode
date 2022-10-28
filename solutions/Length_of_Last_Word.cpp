class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int i=s.length()-1;
        while (i && s[i]==' '){
        i--;
        }
        int count =0;
         for(i;i>=0;i--){
          if(s[i]!=' ')
            count++;
          if(s[i]==' ')
           break;   
    }
        
        return count;
}
};    
