import java.util.*;
public class paaan 
{
    static List<Integer> customers=new ArrayList<>();       //list for customer waiting time.
    static List<Integer> que=new ArrayList<>();             //list for saving the sequence of waiting for all the customers one after the other.
    public static void main(String[] args) 
    {
        Scanner read=new Scanner(System.in);
        System.out.println("Enter the no.of customers:");
        int n=read.nextInt();                               //Taking the no. of inputs from user.
        int sum=0;                                          // variable for solving the sum.
        for(int i=0;i<n;i++)
        {
            System.out.print(i+" ");                        //Displaying the order time and the time taken for their order.
            customers.add((read.nextInt())-i);              //taking input for the time taken for the order and storing the time taken for their order.
            System.out.println(customers.get(i));           //Displaying the time for each cutomers order.
        }
        Collections.sort(customers);                        //Sorting the list for having the shortest time first. 
        for(int a: customers)
        {
            sum=sum+a;
            que.add(sum);                                   //Adding to que the waiting time of each consecutive customers.
        }
        // for(int a:customers)
        // {
        //     System.out.print(a+" ");
        // }
        // System.out.println();
        sum=0;
        for(int a: que)
        {
            sum=sum+a;                                      //Summation of all the waiting times to calculate the average waiting time.                                       
        }
        // for(int a:que)
        // {
        //     System.out.print(a+" ");
        // }
        // System.out.println();
        System.out.println(sum/(que.size()));               //Displaying the best average waiting time
        read.close();       
    }    
}
