class Solution {
public:
  static bool compare(vector<int>&a,vector<int>&b)
    {
        return a[1]>b[1];
    }
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int n=boxTypes.size();
         int limit=0, total=0, temp=0;
        sort(boxTypes.begin(), boxTypes.end(), compare);
        for(int i=0; i<=n-1; i++){
            if(limit+boxTypes[i][0]<=truckSize){
                total+=boxTypes[i][0]*boxTypes[i][1];
                limit+=boxTypes[i][0];
               
                
}            else{
                temp=truckSize-limit;
                total+=temp*boxTypes[i][1];
                break;
            }     
        
               
             
        }
        return total;
        

        
        
        
    }
};