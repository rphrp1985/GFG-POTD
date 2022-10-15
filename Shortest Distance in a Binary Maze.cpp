class Solution {
    
    vector<vector<int>> dist;
    int n,m;
    
    bool isValid(int a,int b){
        if(a<0 || a>=n || b<0 || b>=m)
        return 0;
        return 1;
    }
    vector<vector<int>> temp= {{1,0},{0,1},{-1,0},{0,-1} } ;
    

    
  public:
    int shortestPath(vector<vector<int>> &grid, pair<int, int> s,
                     pair<int, int> des) {
             n= grid.size();
             m= grid[0].size();
            //  dist.clear();
             dist.resize(n,vector<int>(m,0));
            
            queue<pair<int,int>> q;
            
            q.push(s);
            int dis=0;
            dist[s.first][s.second]=1;
            while(!q.empty()){
                
                int size= q.size();
                
               
                
                 for(int i=0;i<size;i++){
                     
               auto ind= q.front();
                q.pop();
                
                int a = ind.first;
                int b = ind.second;
                if(a==des.first && b== des.second)
                return dis;
                     for(auto it: temp){
                         int x= it[0]+a;
                         int y= it[1]+b;
                         
                          if(isValid(x,y) && grid[x][y]==1 && dist[x][y]!=1 ){
                              dist[x][y]=1;
                          q.push({x,y});
                            }
                         
                         
                         
                     }
                     
                     
                     
                 }
                
                
                dis++;
                
                
                
            }
            
            
            
            
             
             
             
             
             return -1;
     
                         
                         
        // code here
    }
};
