class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int arr[gain.size()+1], maxi = 0; arr[0] = 0;
        for(int i = 0; i < gain.size(); i++){
            arr[i+1] = arr[i] + gain[i];
            if(arr[i+1] > maxi) maxi = arr[i+1];
        }
        return maxi;
    }
};