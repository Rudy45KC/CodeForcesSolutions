class Solution
{
    //Function to find a continuous sub-array which adds up to a given number.
    static ArrayList<Integer> subarraySum(int[] arr, int n, int s) 
    {
        int sum, i, j;
        ArrayList<Integer> num = new ArrayList<Integer>();
        for(i = 0; i < n; i++){
            sum = arr[i];
            for(j = i + 1; j <= n; j++){
                if(sum == s){
                    num.add(i+1);
                    num.add(j);
                    return num;
                }
                else if(sum > s || j == n){
                    break;
                }
                sum = sum + arr[j];
            }
        }
        num.add(-1);
        return num;
    }
}