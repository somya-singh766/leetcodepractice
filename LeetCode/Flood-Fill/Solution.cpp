class Solution {
public:
    int r,c;
    int row[4]={1,-1,0,0};
    int col[4]={0,0,1,-1};
    bool valid(int i,int j)
    {
        if(i>=0 && i<r && j>=0 && j<c)
        {
            return 1;
        }
        return 0;
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        r=image.size();
        c=image[0].size();
        queue<pair<int,int>>q;
       
        int colour=image[sr][sc];
        if(colour==color)
        {
            return image;
        }
        q.push({sr,sc});
        image[sr][sc]=color;
       
                 while(!q.empty())
        {
            int i=q.front().first;
            int j=q.front().second;
            q.pop();
            for(int k=0;k<4;k++)
            {
               if(valid(i+row[k],j+col[k]) && image[i+row[k]][j+col[k]]==colour)
               {
                 image[i+row[k]][j+col[k]]=color;
                 q.push({i+row[k],j+col[k]});
               }
            }
        }
           
        return image;
    }
};