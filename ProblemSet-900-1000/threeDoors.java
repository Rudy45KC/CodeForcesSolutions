import java.util.Scanner;
public class threeDoors {
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t > 0){
            int key = 0, a = 0, b = 0, c = 0;
            key = in.nextInt();
            a = in.nextInt();
            b = in.nextInt();
            c = in.nextInt();
            int[] arr = {a, b, c};
            int count = 0;
            key = arr[key-1];
            if(key != 0){
                count++;
                key = arr[key-1];
            }
            if(key != 0){ 
                count++; 
                key = arr[key-1];
            }
            if(key != 0){
                count++;
                key = arr[key-1];
            }

            if(count == 2){
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
            }
            t--;
        }

    }
}
