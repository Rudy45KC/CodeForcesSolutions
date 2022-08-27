import java.util.Scanner;

public class ConsecutiveDeletion {
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int arr[] = new int[n];
        for(int m = 0; m < n; m++){
            arr[m] = in.nextInt();
        }

        int i;
        for(i = 0; i < n; i++){
            if(arr[i] == arr[i+1]){
                if(i < n){
                    n -= 1;
                    for(int j = i; j < n; j++){
                        arr[j] = arr[j+1];
                        for(int element : arr){
                            System.out.print(element+" ");
                        }
                        System.out.println();
                    }
                }
            }
        }
    }

}
