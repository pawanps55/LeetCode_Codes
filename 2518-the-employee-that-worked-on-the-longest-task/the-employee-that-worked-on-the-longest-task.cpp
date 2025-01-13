class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
         vector<int> nums(n, 0);
        int ans = -1, maxi = 0;
        int start = 0;
        for (auto& i : logs) {
            // isse particular task ka run-time nikaal liye hai.
            int temp = (i[1] - start);
            // start time update hoga, current task ke end time se.
            start = i[1];
            // Agar jyada aa gaya tab :-
            if (temp > maxi) {
                maxi = temp;
                ans = i[0];
            }
            // Agar equal aa gaya tab small id wala.
            else if(temp==maxi){
                ans = min(ans,i[0]);
            }
            
         
    }return ans;
    }
};