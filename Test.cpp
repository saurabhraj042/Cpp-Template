#include<bits/stdc++.h>

typedef long long ll;

#define F first;
#define S second;
#define PB push_back;
#define MP make_pair;
/*
-----------SOME USEFUL TRICKS----------

(1)   changes a to {10, 11, 12, 13, 14} 
      iota(a, a+5, 10);  
      iota(c, c+3, 'a'); // {'a', 'b', 'c'}

(2)   //  Use of strlen() can be avoided by: 
      for (i=0; s[i]; i++)  
      {  
      } 
      // loop breaks when the character array ends. 

(3)   for(auto &it:container) //Using & also allows us to modify the elements
	   cout<<it<<" ";


(4) Use all_of - to check if all elements in an array satisfy a condition or not
        any_of - if any one of the element satisfy a condition
        none_of - if any dosent satisfy a condition

    They all accept iterators
     string s = "ABCd";
     all_of(s.begin(),s.end(),[](char c){return (int)c<=90;})?cout<<1:cout<<2;


(5) Finding  prime numbers: -

      a> Naive Approach ---- o(N) check for each number between 1 and N if they are divisor of N i.e N%i==0,and count them

      b> Optimisation One --- O(sqrt(N))  1 2 3 4 5 {6} 7 8 9 .... 36 , just to check if no is prime or not this approach can be taken
                                          Just observe this 36 is already divisible by 1 & 36 so if it has one more divisor then condition fails
                                          and we just have to check for range 2 to sqrt{N} inclusive.
                                          So iterate from 2 to sqrt(N) : if N%i ==0 break loop and N is not prime
      
      c>Prime Sieve --- O(N.loglogN) bestest approach See below  


*/
using namespace std;

// To find exponentiation with powers as high as 10^18 in (logN) with o(1) space complexity
ll exp(ll a,ll b){
   ll result =1;

   //Check rightmost/last bit of power
   if(b&1){
      result *= a;
   }

   a *= a;
   //To understand watch the coding blocks vdo on yt/or do a dry run
   b >>= 1;

   return result;
}

// Sieve optimisation for  Finding Prime Numbers within a range N
int primeSieveArray[100001];
void primeSieve(ll N){
   primeSieveArray[100001]={0}; // Initialising every element as 0 first

//Since every prime int can be a subset of odd ints
   for(ll i=3;i<=N;i+=2){
      primeSieveArray[i]=1;// Since every even integer except 2 is not prime we dnt take them in consider to optimise the approach
   }

//For ex 5 10 15 20 ... 25 30 ....
// In this way the 10,15,20 are already marked 0 or non prime with prev ints that are <5 we do not need to traverse again so we start from sq of 5
   for(ll i=3;i<=N;i+=2){
      // If the number is set prime all the multiples of it should be non-prime
      if(primeSieveArray[i]==1){
         for(ll j=i*i;j<=N;j+=i){
            primeSieveArray[j]=0;
         }
      }
   }
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  
    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin);   
    freopen("output.txt", "w", stdout); 
    #endif 

   
   ll t;
   cin>>t;
  

   while(t--){
     
 
      
      cout<<"\n";
   }
}

