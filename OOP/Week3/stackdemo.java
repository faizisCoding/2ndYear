import java.util.Scanner;
class stack
{
	int a[];
	int tos;
	void assign(int length)
	{
		a = new int[length];
		tos=-1;
	}
	void push(int x)
	{
		if(isfull())
			System.out.println("Stack overflow");
		else
		{	
			tos++;
			a[tos]=x;
		}
	}
	void display()
	{
		if(isempty())
			System.out.println("Stack is empty");
		else
		{
			for(int i=tos;i>-1;i--)
			System.out.println(a[i]);
		}
	}
	int pop()
	{
		if(!isempty())
			return(a[tos--]);
		else
		{
			System.out.println("Stack underflow");
			return-9999;
		}
	}
	boolean isfull()
	{
		return(tos==a.length-1);
	}
	boolean isempty()
	{
		return(tos==-1);
	}
}
class stackdemo
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		int n,x;
		System.out.println("Enter length of stack : ");
		n=sc.nextInt();
		stack s = new stack();
		s.assign(n);
		System.out.println("Enter elements(pushing elements to stack) : ");
		for(int i=0;i<n;i++)
		{
			x=sc.nextInt();
			s.push(x);
		}
		s.push(10);
		System.out.println("Displaying elements of stack : ");
		s.display();
		System.out.println("Popping elements from stack : ");
		for(int i=0;i<n;i++)
		{
			System.out.println(s.pop());
		}
		s.pop();
	}

}