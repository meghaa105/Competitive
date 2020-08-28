import java.util.*;
import java.io.*;
public class Solution {

    // Complete the hourglassSum function below.
    static int hourglassSum(int[][] arr) 
    {
        int mid=0;int i=0;int j=0;int temp=0;int max_sum=-999999;int sum=0;
        for(i=0;i<4;i++)
        {
            while(mid<4)
            {   sum=0;
                temp=i+2;
                for(j=mid;j<mid+3;j++)
                {
                    sum=sum+arr[i][j];
                    sum=sum+arr[temp][j];
                }
                mid++;temp--;
                sum=sum+arr[temp][mid];
                if(sum>max_sum)
                {
                    max_sum=sum;
                }

            }
            if(mid>=4)
            {
                mid=0;
            }
        }
        return max_sum;

    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int[][] arr = new int[6][6];

        for (int i = 0; i < 6; i++) {
            String[] arrRowItems = scanner.nextLine().split(" ");
            scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

            for (int j = 0; j < 6; j++) {
                int arrItem = Integer.parseInt(arrRowItems[j]);
                arr[i][j] = arrItem;
            }
        }

        int result = hourglassSum(arr);

        bufferedWriter.write(String.valueOf(result));
        bufferedWriter.newLine();

        bufferedWriter.close();

        scanner.close();
    }
}
