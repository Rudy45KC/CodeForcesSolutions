import java.util.*;
public class findDuplicate {
    public static void main(String args[]){
        int array[] = {23,21,23,45,45,23,1,1,2,2};
        ArrayList<Integer> list = duplicates(array, 10);
        for(int element: list){
            System.out.print(element+" ");
        }
    }
    public static ArrayList<Integer> duplicates(int arr[], int n) {
        for (int i = 0; i < n; i++) {
            int index = arr[i] % n;
                arr[index] += n;
        }
        int count = 0;
        ArrayList<Integer> duplicateNumbers = new ArrayList<Integer>();

        for (int i = 0; i < n; i++) {
            if ((arr[i] / n) > 1) {
            duplicateNumbers.add(i);
            count = 1;
        }
    }
        if (count == 0) duplicateNumbers.add(-1);
        return duplicateNumbers;
}
}
