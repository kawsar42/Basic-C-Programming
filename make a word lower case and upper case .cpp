
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    for(int i=0;i<s.size();i++)
    {
        s[i]+=32;
    }
    cout << s << endl;
    for(int i=0;i<s.size();i++)
    {
        s[i]-=32;
    }
    cout << s << endl;

}
int main()
{
    solve();
    return 0;
}
