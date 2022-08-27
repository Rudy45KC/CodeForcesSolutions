import java.util.*;
public class DuplicateNumber4 {
    public static ArrayList<Integer> duplicates(int arr[], int n) {
        Arrays.sort(arr);
        ArrayList<Integer> duplicateNumber = new ArrayList<>();
        int i = 0;
        while(i < n-1){
            if(arr[i] == arr[i+1]){
                if(!duplicateNumber.contains(arr[i])){
                    duplicateNumber.add(arr[i]);
                    i += 2;
                    continue;
                }
                i += 2;
            }
            else{
                i++;
            }
        }
        if(duplicateNumber.isEmpty()){
            duplicateNumber.add(-1);
        }
        return duplicateNumber;
    }

    public static void main(String args[]){

    }
}
