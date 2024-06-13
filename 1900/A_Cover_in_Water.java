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
	int n;
	String strg;
	char[] str;

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
	    int gap = 0;
	    for(int i=1; i<n-1; i++) {
	        if( (str[i]==str[i-1]) && (str[i]==str[i+1]) && (str[i]=='.') )
	        {
                System.out.println("2");
                return ;
	        }
	        if(str[i]=='.') gap++;
	    }
	    if(str[0]=='.') gap++;
	    if(str[n-1]=='.' && n!=1) gap++;
	    System.out.println(gap);
	    return ;
	}

	boolean input() throws IOException
	{
	    n = ni();
	    strg = ns();
	    str = strg.toCharArray();
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
