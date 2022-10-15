import java.util.Scanner;
class reverse_Numbers{
    public static void main(String args[]){
        int num[] = new int[4];
        int num1 = 5342;
        for(int i = 0; i < 4; i++){
            num[i] = num1%10;
            num1 = num1/10;
        }
        for(int j : num){
            System.out.println(j);
        }
    }
}