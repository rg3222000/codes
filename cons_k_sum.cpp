#include<bits/stdc++.h>
using namespace std;
int main()
{


        #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
        #endif

 vector <int> v;

 int h=0,i=0,n=0,k=0,a=0;
 cin>>n>>k;
 for(i=0;i<n;i++)
 {
 	cin>>a;
 	v.push_back(a);
 }


  int s=0,s1=0,p=0,s2=0;
 for(i=0;i<n;i++)
 {
 	if(h<k)
 	{
 		s+=v[i];
 		h+=1;
 		s2=s;
 		//cout<<s2<<"\n";
 	}
    else
    {

     s1=s2+v[i]-v[p];
     s2=s1;
     p++;

     if(s<s1)
      {
        s=s1;   
      }
      else
      {
         continue;
      }
    }

 }

 cout<<"the maximum possible sum for "<<k<<" consecutive numbers of the array is "<<s;

 return 0;
}
