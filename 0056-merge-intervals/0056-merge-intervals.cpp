using namespace std;
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
     int i;
    vector<vector<int>> result;
     sort(intervals.begin(),intervals.end());
     result.push_back(intervals[0]);
        
        for(i=0;i<intervals.size();i++){
                if(intervals[i][0]<=result.back()[1]){
                    result.back()[1]=max(intervals[i][1],result.back()[1]);

                }
                else{
                    result.push_back(intervals[i]);
                }
                

                }
                return result;

        }

};