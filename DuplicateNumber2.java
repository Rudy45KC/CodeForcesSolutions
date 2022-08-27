import java.util.ArrayList;
import java.util.Arrays;

public class DuplicateNumber2 {
    public static void main(String args[]){

    }

    public static ArrayList<Integer> findDuplicateNumbers(int arr[], int n){
        final ArrayList<Integer> duplicateNumber = new ArrayList<>();
        Arrays.sort(arr);
        for(int i = 0; i < n - 1; i++){
            for(int j = i + 1; j < n; j++){
                if(arr[i] == arr[j]){
                    if(!duplicateNumber.contains(arr[i])){
                        duplicateNumber.add(arr[i]);
                    }
                    else{
                        continue;
                    }
                }
            }
        }
        return duplicateNumber;
    }
}
