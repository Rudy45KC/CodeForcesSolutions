import java.util.*;
public class DuplicateNumber3 {
    public static void main(String args[]){
        
    }

    public static ArrayList<Integer> findDuplicate(int arr[], int n){
        Arrays.sort(arr);
        ArrayList<Integer> duplicateNumber = new ArrayList<>();
        int i = 0;
        while(i < n){
            if(arr[i] == arr[i+1]){
                if(duplicateNumber.contains(arr[i])){
                    i += 2;
                    continue;
                }
                else{
                    duplicateNumber.add(arr[i]);
                    i += 2;
                }
            }
            else{
                i++;
            }
        }
        return duplicateNumber;
    }
}
