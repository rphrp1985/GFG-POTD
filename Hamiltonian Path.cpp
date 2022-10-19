class Solution
{
    // int count=0;
    
    vector<vector<int>> v;
    vector<int> vis;
    int ans=0;
     void dfs(int n,int count){
        
       
        count++;
        
        if(count==vis.size()-1)
        {
            ans=1;
            return ;
        }
        
        
         for(int x: v[n]){
               if(ans)
             return;
            
             
             if(vis[x]==0){
             vis[x]=1;
             dfs(x,count);
             
              if(ans)
             return;
             
             vis[x]=0;
             
             }
             
            
             
         }
        
        
        // count--;
             
        
        
    }
    
    
    
    public:
    bool check(int n,int m,vector<vector<int>> ed)
    {
        // count?=0;
        v.clear();
        v.resize(n+1);
        vis.clear();
        vis.resize(n+1,0);
        
        for(auto it:ed){
            v[it[0]].push_back(it[1]);
            v[it[1]].push_back(it[0]);
        }
        
        
        for(int i=1;i<=n&& !ans;i++){
            // count=0;
            vis[i]=1;
            dfs(i,0);
            vis[i]=0;
            
        }
        
        return ans;
        
        
        
        
        
        // code here
    }
};
