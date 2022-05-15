#include<iostream>
using std::cin;
using std::cout;
int isprime(int num){
   if (num <= 1)
      return 0;
   for (int i = 2; i <= num/2; i++){
      if (num % i == 0)
         { return 0; }
   }
   return 1;
}
int countPrimes(int strt,int end){
   int count=0;
   for(int i=strt;i<=end;i++){
      if(isprime(i)==1)
         { count++; }
   }
   return count;
}
int counter(int num,int count){
    if(num==1) return count;
    else{
        num-=countPrimes(1,num);
        count++;
        return counter(num,count);
    }
    return 0;
}
int main(){
    int n,count=0;
    cin>>n;
    cout<<counter(n,count)+1;
}