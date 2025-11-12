class Solution {
public:
    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
         vector<int>adj[n];
        vector<int>Indegree(n,0);
        queue<int>q;
        int ans=0;
        int P=relations.size();
        vector<int>CourseTime(n,0);
        for(int i=0;i<P;i++)
        {   //convert in 0 based indexing
            adj[relations[i][0]-1].push_back(relations[i][1]-1);
            Indegree[relations[i][1]-1]++;
        }
        for(int i=0;i<n;i++)
        {
            if(Indegree[i]==0)
            {
                q.push(i);
              
            }
        }
        while(!q.empty())
        {   
             int node=q.front();
           
            q.pop();
            
            for(int i=0;i<adj[node].size();i++)
            {
                Indegree[adj[node][i]]--;
                if(Indegree[adj[node][i]]==0)
                {
                    q.push(adj[node][i]);
                    
                }
                CourseTime[adj[node][i]]=max(CourseTime[adj[node][i]],CourseTime[node]+time[node]);
            }
        }
        for(int i=0;i<n;i++)
        {
            ans=max(ans,CourseTime[i]+time[i]);
        }
        return ans;
    }
};