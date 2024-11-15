#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin>>n;
 map<int,int>mp;
 for(int i=1;i<=n;i++)
 {
    int x;
    cin>>x;
    mp[x]++;
 }
 int ans=0;
 for(auto u:mp)
 {
    if(u.second>u.first) ///map er maddome dekhtechi j array er moto prodotto value golor cnt tar maner soman kina, jodi soman na hoy/value.second>value.first hoy,taholee jeheto ADD korte parbo na,tai oi value er (u.second-u.first) sonkok delete dicci,seta ans e count rakhtechi.
    {
        ans+=(u.second-u.first);
    }
    else if(u.first>u.second)/// r jodi u.first>u.second hoy,tahole oi cnt=u.second porimanta porai delete dicchi, jeheto Problem onojayi ADD kore baraite parbo na.
    {
        ans+=u.second;
    }
 }
 cout<<ans<<endl;
return 0;
}
