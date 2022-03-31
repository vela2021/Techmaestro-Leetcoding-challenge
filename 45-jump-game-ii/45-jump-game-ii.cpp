class Solution {
public:
  
//
  
/*int max(int x, int y) 
{ 
    return (x > y) ? x : y; 
} */
  
// Returns minimum number of jumps 
// to reach array1[n-1] from array1[0] 
 int jump(vector<int>& array1)
{ 
  int n=array1.size();
    // The number of jumps needed to 
    // reach the starting index is 0 
    if (n <= 1) 
        return 0; 
  
    // Return -1 if not possible to jump 
    if (array1[0] == 0) 
        return -1; 
  
    // initialization 
    // stores all time the maximum 
    // reachable index in the array. 
    int maxStepReach = array1[0]; 
  
    // stores the number of steps 
    // we can still take 
    int step = array1[0]; 
  
    // stores the number of jumps 
    // necessary to reach that maximal 
    // reachable position. 
    int jump = 1; 
  
    // Start traversing array 
    int i = 1; 
    for (i = 1; i < n; i++) { 
        // Check if we have reached the end of the array 
        if (i == n - 1) 
            return jump; 
  
        // updating maxStepReach 
        maxStepReach = max(maxStepReach, i + array1[i]); 
  
        // we use a step to get to the current index 
        step--; 
  
        // If no further steps left 
        if (step == 0) { 
            // we must have used a jump 
            jump++; 
  
            // Check if the current index/position or lesser index 
            // is the maximum reach point from the previous indexes 
            if (i >= maxStepReach) 
                return -1; 
  
            // re-initialize the steps to the amount 
            // of steps to reach maxStepReach from position i. 
            step = maxStepReach - i; 
        } 
    } 
  
    return -1; 
}};
