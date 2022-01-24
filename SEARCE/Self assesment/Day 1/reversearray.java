import java.util.*;
public class reversearray //creation of class reversearray. 
{
    public static int[] reverseArray(int a[]) // method which will be called for reversing the array which is passed as the parameter.
    {
        int[] b=new int[a.length];
        int size=a.length;
        for(int i=0;i<a.length;i++)
        {
            size-=1;
            b[i]=a[size]; // writing from 0th index of new array, the elements from the last to first of the parameter array.
        }
         return b; // returning the array to main.
    }   
    public static void main(String[]args)
    {
        int n;                                                   // variable for count of elements.
        Scanner s=new Scanner(System.in);
        System.out.println("Enter the Length for the array:");
        n=s.nextInt();                                           // taking the input for the no. of elements.
        int[] array=new int[n];
        System.out.println("Enter the elements for the array:");
        for(int i=0;i<n;i++)
        {
            array[i]=s.nextInt();                                // input for array.
        }
        System.out.println("The elements entered are:");
        for(int i=0;i<n;i++)
        {
            System.out.println(array[i]);                        // printing elements for check. 
        }
        int[] revarray=new int[n];                               
        revarray=reverseArray(array);                           // function call.
        System.out.println("The reversed elements are:");
        for(int i=0;i<n;i++)
        {
            System.out.println(revarray[i]);                    // printing the returned function.
        }
        s.close();
    }
    }