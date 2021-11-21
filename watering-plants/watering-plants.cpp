class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int steps=0;
        int currCap=capacity;
        
        for(int i=0; i<plants.size(); i++){
          if(currCap>=plants[i]){
              currCap-=plants[i];
              steps++;
              
          }else{
              steps+=(i*2)+1;
              currCap=capacity;
              currCap-=plants[i];
              
          }
            
        }
        return steps;
        
        
    }
};