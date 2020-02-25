// basically checking reliablility of for each to calculate len of array

// RESULT -- {PASSED}
import java.util.Scanner;
public class lenusingForEach{
    public static void main(String args[]) {
        int arr[]=new int[6];
Scanner sc=new Scanner(System.in);

        for(int i=0;i<6;i++){
            arr[i]=sc.nextInt();
        }
        int len=0;
        for(int tmp:arr){
            len++;
        }

        System.out.println("len of array is "+len);
    }
}