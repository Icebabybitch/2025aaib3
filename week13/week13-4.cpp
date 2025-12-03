// week13-4.cpp
int main() {
    char c;
    int d;
    int now = 50;
    int ans = 0;
    while(cin >> c >> d){
        // if (c=='L') cout << "往左轉" << d << "格\n";
        // if (c=='R') cout << "往右轉" << d << "格\n";

        if (c=='L') now -= d;
        if (c=='R') now += d;

        now = (now % 100 + 100) % 100;
        if (now==0) ans++;
        // cout << "現在到達格子刻度" << now << "\n";
    }
    cout << "答案是:" << ans;
}
