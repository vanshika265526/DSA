class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int time=0;           //variable for storing total time
        for(int i=1;i<points.size();i++){    //traverse start from second point because we will use pairs and pair will automatically contain the first point because we will use i-1
            int x=abs(points[i][0]-points[i-1][0]);     //calculates horizontal distance between first and previous point
            int y=abs(points[i][1]-points[i-1][1]);      //calculates for y axis
            time+=max(x,y);
        }
        return time;
    }
};
