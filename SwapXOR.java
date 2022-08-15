import java.util.Scanner;
class SwapXOR{
    public static void main(String args[]){
    int a = 9;
    int b = 8;
    a ^= b;
    b ^= a;
    a ^= b;
    System.out.println(a);
    System.out.println(b);
    }
}