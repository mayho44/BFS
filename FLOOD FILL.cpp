#include <iostream>
#include <iomanip>
#include <cmath>
#include <numeric>
#include<bits/stdc++.h>
#include <string>
using namespace std;
#define endl '\n'
#define ll long long
#define fio cin.tie(0); cin.sync_with_stdio(0);
const int n=1e5,m=2e5+5,OO=0x3f3f3f3f;
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        queue<pair<int,int>>q;
        int dr[] = {1,-1,0,0};
int dc[] = {0,0,1,-1};
        q.push({sr,sc});
        int ori=image[sr][sc];
        image[sr][sc]=color;
        while(!q.empty()){
          pair<int,int>u=q.front();
          q.pop();
          for(int i=0;i<4;i++){
            int nr=u.first+dr[i];
            int nc=u.second+dc[i];
            if(nr<image.size()&&nr>=0&&nc<image[0].size()&&image[nr][nc]==ori){
              image[nr][nc]=color;
              q.push({nr,nc});
            }
          }
        }
        return image;
    }
};


