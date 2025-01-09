class Solution {
    public int busyStudent(int[] startTime, int[] endTime, int queryTime) {
        int s = startTime.length;
        int e = endTime.length;
        int count =0;
        for(int i=0;i<s;i++){
            
                if (startTime[i] <= queryTime && endTime[i] >= queryTime) {
            count++;
        }
            
        }
        return count;
    }
}