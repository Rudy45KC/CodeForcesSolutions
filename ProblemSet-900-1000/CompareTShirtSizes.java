import java.io.*;
import java.util.*;
 
public class CompareTShirtSizes{
    static class FastReader {
        BufferedReader br;
        StringTokenizer st;
 
        public FastReader(){
            br = new BufferedReader(new
                    InputStreamReader(System.in));
        }
 
        String next(){
            while (st == null || !st.hasMoreElements()){
                try{
                    st = new StringTokenizer(br.readLine());
                }catch (IOException e){
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }
 
        int nextInt(){
            return Integer.parseInt(next());
        }
 
        long nextLong(){
            return Long.parseLong(next());
        }
 
        double nextDouble(){
            return Double.parseDouble(next());
        }
 
        String nextLine(){
            String str = "";
            try{
                str = br.readLine();
            }catch (IOException e){
                e.printStackTrace();
            }
            return str;
        }
    }
 
    public static void main(String[] args) throws Exception{
        FastReader in = new FastReader();
        BufferedWriter out = new BufferedWriter(new OutputStreamWriter(new
                FileOutputStream(java.io.FileDescriptor.out), "ASCII"), 512);
 
        int q = in.nextInt();
        while (q-- != 0) {
            String s1 = in.next(), s2 = in.next();
            int a = 1, b = 1;
            for (int i = 0; i < s1.length() - 1; i++) {
                if (s1.charAt(i) == 'X') a++;
            }
            for (int i = 0; i < s2.length() - 1; i++) {
                if (s2.charAt(i) == 'X') b++;
            }
            if (s1.equals("M")) a = 0;
            if (s2.equals("M")) b = 0;
            if (s1.charAt(s1.length() - 1) == 'S') a *= (-1);
            if (s2.charAt(s2.length() - 1) == 'S') b *= (-1);
            if (a == b) System.out.println("=");
            else if (a < b) System.out.println("<");
            else System.out.println(">");
        }
    }
}