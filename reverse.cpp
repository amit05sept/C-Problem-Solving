#include<iostream>
using namespace std;
int reverse(int ans, int num)
{
    if(num==0)
    return ans;

    ans=ans*10 +num%10;
    return reverse(ans,num/10);
}
int main()
{
    int num=12345;
    int ans=0;

    ans = reverse(ans,num);
    cout<<ans;
    return 0;    
}