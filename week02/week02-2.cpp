/// week02-2.cpp C++
/// 要用 C++ 的字串 反過來
#include <iostream> /// IO串流外掛
#include <string> /// 字串外掛
using namespace std; /// 使用命名空間
int main()
{
    cout << "請輸入數字: ";
    string a, ans; /// C++ 的字串
    cin >> a; /// 讀入字串
    ///到過來的迴圈 字串的長度叫 a.length()
    for (int i=a.length()-1; i>=0; i--){
        ans += a[i]; /// 把字母倒過來, 放入答案
    } /// 寫到一半, 暫時休息一下
    cout << a << ans;
}
