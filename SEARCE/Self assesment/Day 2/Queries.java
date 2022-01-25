import java.util.*;
import java.lang.*;
public class Queries
{
    static int top=-1;
    static String[] stringstack=new String[100];
    public static void push(String data)
    {
        top+=1;
        stringstack[top]=data;
    }
    public static void pop() 
    {
        if(top<0)
        return;
        else
        top--;
    }
    public static int max(String[] stringstack) 
    {
        int[] y=new int[stringstack.length];
        for(int i=0;i<stringstack.length;i++)
        {
            y[i]=Integer.parseInt(stringstack[i]);
        }
        Arrays.sort(y);
        return y[(y.length)-1]; 

    }
    public static int[] getMax(String[] list)
    {
        int[] as=new int[list.length];
        String s;
        int b;
        for(int i=0;i<list.length;i++)
        {
            s=list[i];
            String[] split=s.split(" ");
            if(split[0]=="1")
            {
                if(split[1]!=null || split[1]!="0")
                push(split[1]);
            }
            if(split[0]=="2");
            {
                pop();
            }
            if(split[0]=="3");
            {
                b=max(stringstack);
            }
            for(i=0;i<stringstack.length;i++)
            {
                if(as[i]==0)
                {
                    as[i]=b;
                    break;
                }
            }
        }
        return as;
    }
    public static void main(String[] args) 
    {
        Scanner s=new Scanner(System.in);
        System.out.println("Enter the length of operations:");
        int n=s.nextInt();
        String[] stringarray=new String[n];
        System.out.println("Enter the queries:");
        for(int i=0;i<n;i++)
        {
            stringarray[i]=s.nextLine();
        }
        int[] x=getMax(stringarray);
        for(int i=0;i<x.length;i++)
        {
            System.out.println(x[i]);
        }
        s.close();
    }

}