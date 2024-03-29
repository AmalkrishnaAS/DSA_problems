class Solution {
public:
    bool dfs(vector<vector<char>> &arr, string word, int k, int r, int c)//pass arr by reference
    {
        
        if(r>=arr.size()||r<0||c>=arr[0].size()||c<0||arr[r][c] != word[k])
            return false;

            k++;
            if(k==word.size())
                return true;
            
			arr[r][c]='*'; // changed in orignal arr to avoid taking same occurence of alphabet in arr for different occurences in word
            
			bool res =  dfs(arr,word,k,r+1,c) || 
						dfs(arr,word,k,r-1,c) || 
						dfs(arr,word,k,r,c+1) ||
						dfs(arr,word,k,r,c-1);
            
            arr[r][c]=word[k-1]; //as arr is passed by reference all changes must be reversed before next iteration
        return res;
            


    }
    
    bool exist(vector<vector<char>>& arr, string word) 
    {
        for(int i=0;i<arr.size();i++)
            for(int j=0;j<arr[0].size();++j)
                if(dfs(arr,word,0,i,j))
                    return true;
        return false;
        
    }
};