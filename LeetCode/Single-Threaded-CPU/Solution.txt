class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
      
        vector<int>ans;
        int n=tasks.size();
       for(int i=0;i<tasks.size();i++)
       {
          tasks[i].push_back(i);
       }
       sort(tasks.begin(),tasks.end());
       int i=0;
       long long time=tasks[i][0];
       priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
       
       while(!q.empty() || i<n)
       {
        while(i<n && time>=tasks[i][0])
        {
            q.push({tasks[i][1],tasks[i][2]});
            i++;
        }
        if(q.empty())
        {
            time=tasks[i][0];
        }
        else{
            ans.push_back(q.top().second);
            time+=q.top().first;
            q.pop();
        }
       }
       return ans;
    }
};