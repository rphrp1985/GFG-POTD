class Solution {
    
    vector<vector<pair<int,int>>> v;
    int c=0;
    
    
    pair<int,int> par(pair<int,int> p){
        if(v[p.first][p.second].first==-1)
        return p;
        return par({v[p.first][p.second]});
    }
    
    
     bool un(pair<int,int> a,pair<int,int> b){
        
        auto pa= par(a);
        auto pb = par(b);
        if(pa!=pb){
            
            v[pa.first][pa.second]= {pb.first,pb.second};
          return 1;  
        }
        
        return 0;
        
        
    }
    
    bool isValid(int a,int b,int n,int m){
        if(a>=0 && a<n && b>=0 && b<m)
        return 1;
        return 0;
        
    }
    
    
    
    
    
  public:
    vector<int> numOfIslands(int n, int m, vector<vector<int>> &op) {


        v.resize(n,vector<pair<int,int>>(m,{-1,-1}));
        vector<int> ans;
        vector<vector<int>> arr(n,vector<int>(m,0));
         
        vector<vector<int>> temp ={{1,0},{-1,0},{0,1},{0,-1} };
        
        
        for(auto it:op ){
            
            int a= it[0];
            int b = it[1];
            int merged=0;
            
            if(arr[a][b]==1){
                ans.push_back(c);
            continue;
            
            }
            
            arr[a][b]=1;
            for(auto it1: temp){
                
                
                int x= a+ it1[0];
                int y = b+ it1[1];
                
                if(isValid(x,y,n,m)){
                    
                    //valid
                    
                    
                    
                    if(arr[x][y]==1){
                        
                       
                        if(un({a,b},{x,y})){
                             
                            merged++;
                            
                        }
                        // cout<<a<<" "<<b<<"  y "<<x<<" "<<y<<"      "<<merged<<endl;
                        
                    }
                    
                    
                    
                }
                
                
                
            }
            
           
            c=1+c-merged;
            
            ans.push_back(c);
            
        }
      

return ans;




    }
};

