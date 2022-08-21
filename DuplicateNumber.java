import java.util.ArrayList;

class DuplicateNumber{
    public static void main(String[] args){
        int arr[] = {4,5,5,32,1,4,32,32};
        int n = arr.length;
        ArrayList<Integer> returnList = new ArrayList<>();
        returnList = findDuplicate(arr, n);
        for(int element : returnList){
            System.out.println(element);
        }
    }

    public static ArrayList<Integer> findDuplicate(int arr[], int n){
        ArrayList<Integer> duplicateNumber = new ArrayList<>();
        for(int i = 0; i < n-1 ; i++){
            for(int j = i+1; j < n; j++){
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
        if(duplicateNumber.isEmpty()){
            duplicateNumber.add(-1);
            return duplicateNumber;
        }
        return duplicateNumber;
    }
}