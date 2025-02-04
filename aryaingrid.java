import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
	StringBuilder sb=new StringBuilder();
	
	int I=Integer.parseInt(br.readLine());
	
	while(I-->0){
	    String[] input=br.readLine().split(" ");
	    long N=Long.parseLong(input[0]);
	    Long M=Long.parseLong(input[1]);
	    long X0=Long.parseLong(input[2]);
	    long Y0=Long.parseLong(input[3]);
	    long L=Long.parseLong(input[4]);
	    
	    long reachableRows=(X0-1)/L+1+(N-X0)/L;
	    long reachableCols=(Y0-1)/L+1+(M-Y0)/L;
	    
	    sb.append(reachableRows*reachableCols).append("\n");
	}
	System.out.println(sb);
	
	}
}
