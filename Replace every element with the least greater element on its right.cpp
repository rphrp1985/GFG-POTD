class Solution{
    public:
    vector<int> findLeastGreater(vector<int>& arr, int n) {
        
        
        set<int> st;
        
        vector<int> ans(n);
        
        int maxi=0;
        
        for(int i= n-1;i>=0;i--){
            
           
            
            if(arr[i]>= maxi)
            {
                ans[i]=-1;
                maxi= arr[i];
                 st.insert(arr[i]);
                continue;
            }
            
            set<int>::iterator it= st.upper_bound(arr[i]);
            
          
            if(it== st.end())
            ans[i]=-1;
            else
            ans[i]= *it;
            
            
            
            st.insert(arr[i]);
            
        }
        // reverse(ans.begin(),ans.end());
        
        return ans;
        
        
        
        
    }
};
