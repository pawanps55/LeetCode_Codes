class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int ans1 = 0;
        for(int i=0;i<seats.size();i++){
          

             ans1 = ans1 +  abs(students[i]- seats[i]);
                
            
        }
        return ans1;
    }
};