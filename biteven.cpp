
// Sample code to perform I/O:

#include <iostream>
#include<math.h>

using namespace std;

int bin(int k)
{
    cout<<k;

    int s=0,i=0;
        
        while(k>0)
        {
            int x=pow(10,i); 
            s=s+(k%2)*(x);          
            i=i+1;
            k=k/2;
        }
    
  

    for(int j=i-1;j>=0;j--)
    {
        int r=s%10;
        if(j%2==1 && r==1)
        {

             //   printf("%d %d %d \n",k,j,r);
                return 0;
                
        }
        s=s/10;
       
    }
     return 1;
}

int dec(int k){
    int s=0,i=0;
    while(k>0){
        s=s+(k%10)*(2^i);
        i=i+1;
        k=k/10;
    }
    return s;
}


int printnum(int k)
{
   // cout<<k<<"\n";
int num;
    if(k%2==0)
    {   
        num=k+2;
        k=bin(num);
        while(k!=1){
            num=num+2;
            k=bin(num);
        }
    }
    else{
        num=k+1;
        k=bin(num);
        while(k!=1){
            num=num+2;
            k=bin(num);
        }

        return num;
    }

}
   /* int i=0,s=0;
    while(k>0)
    {
        s=s+(k%2)*(10^i);
        i=i+1;
        k=k/2;
    }
    
    int num=0;
    for(int j=0;j<i;j++)
    {
        if(i%2==0)
        {
            num=num+(i*(10^i));
        }
        else
        {
            num=num+
        }
            
    }*/
        

    
    


int main() {
	int T,N;
	cin >> T;										// Reading input from STDIN
//	cout << "Input number is " << num << endl;		// Writing output to STDOUT

    while(T>0)
    {
        cin>>N;
        int A[N];
        int sum=0,k;
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }

        for (int i=0;i<N;i++){


            //printf("%d ",A[i-1]);
            if(A[i]==-1)
            {
               int k=  printnum(A[i-1]);
               A[i]=k;
            }  
                
            }
            
        
        
        
      //  cout<<sum;
        
        T=T-1;
    }
    
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


// Write your code here
