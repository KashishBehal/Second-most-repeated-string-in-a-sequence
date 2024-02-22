class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
       unordered_map<string , int>mp;
       vector<int>v;
       for(int i=0;i<n;i++){
           mp[arr[i]]++;
       }
       for(auto i:mp){
           v.push_back(i.second);
       }
       sort(v.begin() , v.end());
       int m=v.size()-1;
       int second=v[m-1];
       for(auto i:mp){
           if(i.second==second){
               return i.first;
           }
       }
       return "";
    }
};
