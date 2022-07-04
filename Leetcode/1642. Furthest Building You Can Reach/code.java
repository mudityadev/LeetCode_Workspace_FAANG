C. shopping disha 

import java.util.*;

public class MyClass {

  public static void main(String args[]) {

      Scanner sc = new Scanner(System.in);

      System.out.println("Number of items");

      int num = sc.nextInt();

      System.out.println("Number of Amount of Money");

      int n = sc.nextInt();

      String[] arr_str = new String[num];

      System.out.println("Please enter value of items");

      for (int i = 0; i < num; i++) {

        String userInput = sc.next();

        arr_str[i] = userInput;

      }

      System.out.println("The String array input from user is : ");

   

 // System.out.println(Arrays.toString(arr_str));

      int size = arr_str.length;

      int [] arr = new int [size];

      for(int i=0; i<size; i++) {

       arr[i] = Integer.parseInt(arr_str[i]);

      }

      sc.close();

      int count = 0;

      int i;

     int sum = 0;

      Arrays.sort(arr);

     while (sum < n){
          for (i=0;i<num;i++){
             sum = sum + arr[i];
             if(sum >= n){
              break;
              }
              count = count + 1;
          }
      }
      System.out.println(count);
  }
}