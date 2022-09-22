package a1;
        import java.util.Scanner;
public class Array2D {
    public static void main(String args[]){
        int i,j,r,c,s,k=0;
        Scanner sc= new Scanner(System.in);
        System.out.println("enter the number of rows: ");
        r=sc.nextInt();
        System.out.println("Enter the number of columns: ");
        c=sc.nextInt();
        System.out.println("Enter the elements of 2d array:");
        int a[][] = new int[r][c];
        s=r*c;
        int arr[]= new int[s];
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                a[i][j] = sc.nextInt();
            }
        }
        System.out.println("the 2d array is: ");
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                System.out.print(a[i][j]+" ");
            }
            System.out.print("\n");
        }
        for(i=0;i<r;i++){
            for(j=0;j<c;j++) {
                arr[k]=a[i][j];
                k=k+1;
            }
        }
        System.out.println("The 1d array is: ");
        for(i=0;i<s;i++){
            System.out.print(arr[i]+" ");

        }
    }
}