import java.util.Arrays;
public class MissingElement {
    int MissingNumber(int array[], int n) {
        int base = 1;
        Arrays.sort(array);
        for(int i = 0; i < array.length; i++){
            if(base != array[i]){
                
                return base;
            }
            else{
                base++;
            }
        }
        return base;
    }
}


