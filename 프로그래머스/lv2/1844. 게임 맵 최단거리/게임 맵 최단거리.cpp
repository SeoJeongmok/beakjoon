#include<vector>
#include<queue>
#define X first
#define Y second
using namespace std;
int dx[4] = {0,1,0,-1}, dy[4]={1,0,-1,0};
int visit[101][101]={0};
int solution(vector<vector<int> > maps)
{
    queue<pair<int,int>> Q;
    Q.push({0,0});
    visit[0][0]=1;
    while(!Q.empty())
    {
        auto cur = Q.front();
        Q.pop();
        if(cur.X==maps.size()-1 && cur.Y==maps[0].size()-1)
            return visit[cur.X][cur.Y];
        for(int i=0;i<4;i++)
        {
            int nx = cur.X + dx[i];
            int ny = cur.Y + dy[i];
            if(nx < 0 || nx >= maps.size() || ny < 0 || ny >= maps[0].size())
                continue;
            if(maps[nx][ny]==1 && visit[nx][ny]==0)
            {
                Q.push({nx,ny});
                visit[nx][ny]=visit[cur.X][cur.Y]+1;
            }
        }
    }
    return -1;
}