import java.io.*;
class PROBOBAL {
    
    
	public static void main(String[] args)throws IOException {		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String str=br.readLine();
		int innum=Integer.parseInt(br.readLine());
        int len=str.length();
		int count=0, count1=0;
		double d=0;
		int j=0;
		for(int i=0;i<len;i++){
		    if(str.charAt(i)=='1')
		    count++;
		}
		if(count>=innum)
		{
		int a[][]=new int[count][2];
		count1=0;j=0;
		for(int i=0;i<len;i++)
		{
		    if(str.charAt(i)=='1')
		    {
		        a[j][0]=count1+1;
		        j++;
		        count1=0;
		    }
		    else
		    count1++;
		}
		j=count-1;
		for(int i=len-1;i>=0;i--){
		    if(str.charAt(i)=='1'){
		        a[j][1]=count1+1;
		        j--;
		        count1=0;
		    }
		    else
		    count1++;
		}
		long outnum=0;
		for(int i=0;i<=count-innum;i++)
		{
		    outnum+=a[i][0]*a[i+innum-1][1];
		}
		System.out.println(outnum);
		}
		else
		{
		    System.out.println(-1);
		}
	}
}