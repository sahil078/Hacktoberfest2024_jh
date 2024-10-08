import java.util.Scanner;

public class BubbleSort {

    static void input(int[] arr){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the elements of the array: ");
        for(int i=0;i<10;i++){
            arr[i]=sc.nextInt();
        }
        System.out.println("The entered elements are : ");
    }
    static void display(int arr[]){
        for(int i=0;i<10;i++){
            System.out.print(arr[i]+" ");
        }
    }

    static void swap(int[] arr,int x, int y){
        int temp=arr[x];
        arr[x]=arr[y];
        arr[y]=temp;
    }

    static void sort_asc(int[] arr,int n){
        int i;
        for(i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1]){
                    swap(arr,j,j+1);
                }
            }
        }
        System.out.println("The ascendingly sorted array is :");
        display(arr);
    }

    static void sort_desc(int[] arr,int n){
        int i,j,temp;
        for(i=0;i<n-1;i++){
            for(j=0;j<n-i-1;j++){
                if(arr[j]<arr[j+1]){
                    swap(arr,j,j+1);
                }
            }
        }
        System.out.println("The descendingly sorted array is :");
        display(arr);
    }

    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int[] arr=new int[10];
        input(arr);
        int n=arr.length;
        display(arr);
        System.out.println("\nEnter your choice : \n1.Sort ascending \n2.Sort Descending");
        int ch=sc.nextInt();
        switch(ch){
            case 1 : sort_asc(arr,n);
                break;

            case 2 : sort_desc(arr,n);
                break;

        }

    }
}

