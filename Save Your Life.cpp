class Solution{
public:
      string maxSum(string w,char x[], int b[],int n){
          
          
          map<char,int> mp;
          
          for(int i=0;i<n;i++){
              mp[x[i]]= b[i];
          }
          
          
          vector<int> v;
          
          for(char c: w){
              if(mp.find(c)!=mp.end())
              {
                  v.push_back(mp[c]);
              }else
              v.push_back(c);
          }
          
          n = v.size();
          
          int maxi=INT_MIN;
          int maxtill=0;
          string ans="";
          string temp="";
          for(int i=0;i<n;i++){
              maxtill+= v[i];
              temp+= w[i];
              
              if(maxtill>maxi){
                  maxi= maxtill;
                  ans= temp;
                  
              }
              if(maxtill<=0){
                  temp="";
                  maxtill=0;
              }
              
              
          }
          
          
          return ans;
          
          
          
          
          
          
          // code here        
      }
};

