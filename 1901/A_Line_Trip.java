/*
BY RUSHABH GALA
rushabhvg
GitHub :
https://github.com/rushabhvg
StackOverflow :
https://stackoverflow.com/users/16571212/rushabhvg
LinkedIn:
https://www.linkedin.com/in/rushabhvg/
*/

/*
Template taken from:
https://gist.github.com/raviagarwal7/e85898a2f9876581f154ee4aa0f98935
*/

import java.io.*;
import java.util.*;
import java.math.*;

public class Main
{
	BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
	StringTokenizer tokenizer=null;
	
	public static void main(String[] args) throws IOException
	{
		new Main().execute();
	}
	
	void debug(Object...os)
	{
		System.out.println(Arrays.deepToString(os));
	}
	
	int ni() throws IOException
	{
		return Integer.parseInt(ns());
	}
	
	long nl() throws IOException 
	{
		return Long.parseLong(ns());
	}
	
	double nd() throws IOException 
	{
		return Double.parseDouble(ns());
	}
		
	String ns() throws IOException 
	{
		while (tokenizer == null || !tokenizer.hasMoreTokens()) 
			tokenizer = new StringTokenizer(br.readLine());
		return tokenizer.nextToken();
	}
	
	String nline() throws IOException
	{
		tokenizer=null;
		return br.readLine();
	}
	

	//Main Code starts Here
	int totalCases, testnum;	
	int n, x;
	int[] arr;

	void execute() throws IOException
	{
		totalCases = ni();
		for(testnum = 1; testnum <= totalCases; testnum++)
		{
			if(!input())
				break;
			solve();
		}
	}

	void solve() throws IOException
	{
	    int mx = arr[0];
	    for(int i=1; i<n; i++) {
	        mx = Math.max(mx, Math.abs(arr[i]-arr[i-1]));
	    }
	    mx = Math.max(mx, Math.abs(arr[n-1]-x)*2);
	    System.out.println(mx);
	}

	boolean input() throws IOException
	{
	    n = ni();
	    x = ni();
	    arr = new int[n];
	    for(int i=0; i<n; i++) {
	        arr[i] = ni();
	    }
		return true;
	}
}

/*
BY RUSHABH GALA
rushabhvg
GitHub :
https://github.com/rushabhvg
StackOverflow :
https://stackoverflow.com/users/16571212/rushabhvg
LinkedIn:
https://www.linkedin.com/in/rushabhvg/
*/
