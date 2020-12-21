import java.util.*;
import java.lang.*;

class oddThread extends Thread 
	{
	int oddsum=0;
	oddThread()
	{
		super("ODD Thread");
		System.out.println("Child Thread: "+this);
		start();
	}
	public void run(){
		try{
			for(int n=1;n<=100;n++)
				{
				if(n%2!=0)
				{
					oddsum = oddsum + n;
					Thread.sleep(100);
				}
			}
		}
	catch(InterruptedException e)
		{
			System.out.println("Child Interrupted");
		}
		System.out.println("Sum of Odd Numbers from 1 to 100="+oddsum);
	}
}

class LAB9Practice1 {
	public static void main(String args[])
	{
		int evensum=0;
		new oddThread();
		try{
			for(int n=1;n<=100;n++){
				if(n%2==0)
				{
					evensum=evensum+n;
					Thread.sleep(200);
				}
			}
		}catch(InterruptedException e)
		{
			System.out.println("Main Thread Interrupted");
		}
		System.out.println("Sum of Even Numbers from 1 to 100= "+evensum);	
	}
}